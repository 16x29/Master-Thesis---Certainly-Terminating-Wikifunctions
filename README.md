# Wikifunctions Termination Analysis Pipeline

This repository contains the analysis notebook for the master's thesis
*Certainly Terminating Wikifunctions* (WU Wien). The thesis investigates
whether existing automated termination analysis tools can be applied to
functions from [Wikifunctions](https://www.wikifunctions.org), an open,
collaboratively edited function repository.

The pipeline extracts all Python implementations from the official
Wikifunctions XML dump, categorizes them by structure (AST analysis),
translates the integer-loop functions into the input formats of five
termination tools (AProVE, MuVal, T2, KoAT, VeryMax), validates every
translation against the original Python with a differential test, runs the
tools in their Termination Competition Docker images with a 60-second
timeout, and maps all raw outputs onto five common verdicts
(terminating / non-terminating / unknown / timeout / tool error).

## Repository contents

| Path | Content |
|---|---|
| `wikifunctions_thesis_pipeline.ipynb` | The complete pipeline notebook |
| `thesis_output/wikifunctions.db` | SQLite database of record: original Python code, translations, **raw tool outputs**, verdicts |
| `thesis_output/c_translations/` | The 43 `.c` files given to AProVE and MuVal |
| `thesis_output/t2_translations/` | The 43 `.t2` files given to T2 and VeryMax |
| `thesis_output/its_translations/` | The 43 `.koat` files given to KoAT |
| `thesis_output/its_ari/` | `.ari` files (standards-compliant artifact, not used to drive tools) |
| `thesis_output/results/` | The result CSVs behind the thesis tables (RQ1–RQ3) |
| `thesis_output/full_results.csv` | One row per function: category, features, every tool's verdict |

## The two switches

The notebook is controlled by two flags:

**`REBUILD_FROM_SOURCE`** (configuration cell, near the top)
- `False` (reproduction mode): skips XML extraction, categorization, and
  translation. Everything is loaded from the committed
  `thesis_output/wikifunctions.db`. No dump file needed.
- `True`: re-derives everything from the raw XML dump — extraction,
  categorization, translation, differential testing. Requires the dump file
  (see below).

**`RUN_TOOLS`** (tool execution cell, further down)
- `False` (reproduction mode): does not execute any tool. All verdicts are
  re-derived from the raw tool outputs already stored in the database. No
  Docker needed.
- `True`: actually runs the five tools in Docker on the translated files
  (215 runs, up to 60 s each). Requires Docker and the termcomp images
  (see below).

**To reproduce the thesis results exactly, set both flags to `False` and run
all cells top to bottom.** This regenerates every result table and CSV from
the stored raw outputs in a few minutes, with no external dependencies
beyond Python.

**To re-run the full experiment**, set both flags to `True` after setting up
the dump and Docker. Note: proven results (terminating / non-terminating)
are stable across machines, but timeout and memory-related counts depend on
hardware, so those marginal counts may shift on a different machine.

## Requirements

- Python 3 with Jupyter; packages: `pandas`, `tqdm` (the notebook installs
  `tqdm` itself; everything else is standard library)
- Only for `REBUILD_FROM_SOURCE = True`: the Wikifunctions XML dump of
  **2026-05-01**, available from the Wikimedia dump service:
  <https://dumps.wikimedia.org/other/mediawiki_content_current/wikifunctionswiki/2026-05-01/xml/bzip2/>
  — download, decompress, and place it next to the notebook as
  `wikifunctionswiki-2026-05-01-p3p82100.xml` (or adjust `DUMP_PATH` in the
  configuration cell).
- Only for `RUN_TOOLS = True`: [Docker](https://www.docker.com/) and the four
  official Termination Competition tool images. The exact image names, the
  tool-to-image mapping, and setup are in
  [Running the tools with Docker](#running-the-tools-with-docker) below.

## Running the tools with Docker

This section is only needed to **re-run the tools** (`RUN_TOOLS = True`). For
plain reproduction of the thesis numbers you do **not** need Docker — set both
switches to `False` and the verdicts are re-derived from the raw outputs already
stored in the database.

### Tool-to-image mapping

The five tools run inside **four** official Termination Competition Docker
images (AProVE and KoAT share one image). The image names are defined as
constants at the top of the tool-execution cell in the notebook, and the
notebook calls them exactly as listed here:

| Tool | Notebook constant | Docker image (`name:tag`) | Input files | Command run inside the container |
|---|---|---|---|---|
| AProVE  | `APROVE_IMAGE`  | `termcomp/2025_aprove_koat_loat:578822` | `.c`    | `solver --timeout=60 --category=C_Integer_Programs <file>` |
| MuVal   | `MUVAL_IMAGE`   | `termcomp/2025_coar:latest`             | `.c`    | `solver --timeout=60 --category=C <file>` |
| KoAT    | `APROVE_IMAGE`  | `termcomp/2025_aprove_koat_loat:578822` | `.koat` | `/aprove/bin/koat2 analyse --input <file>` |
| T2      | `T2_IMAGE`      | `termcomp/2025_t2_termcomp:2025`        | `.t2`   | `/t2/t2/bin/T2_static -termination -print_proof -try_nonterm true -input_t2 <file>` |
| VeryMax | `VERYMAX_IMAGE` | `termcomp/2025_verymax_termcomp:2025`   | `.t2`   | `/verymax/bin/verymax <file>` |

The 60-second per-run limit is the `TOOL_TIMEOUT` constant in the same cell.

### Setup

1. **Install Docker** and confirm it works: `docker run --rm hello-world`.
2. **Get the images.** Go to the Termination Competition's Docker Hub page,
   <https://hub.docker.com/u/termcomp>, and download the four images listed in
   the table above (they are named after the tools). A plain `docker run` also
   pulls them automatically the first time they are used.
3. **Run the experiment.** In the tool-execution cell set `RUN_TOOLS = True` and
   run all cells top to bottom. The notebook mounts the translation folders into
   each container automatically and executes all 215 runs (43 functions × 5
   tools), storing each tool's verbatim output in the database.

The image names in the table match the `*_IMAGE` constants at the top of the
tool-execution cell by default; if your local copies are named differently, edit
those constants. KoAT runs from the AProVE image (it has no separate image).
Proven verdicts are stable across machines, but timeout and memory-related
counts depend on hardware and may differ slightly from the committed run.

## Verifying individual results

Open `thesis_output/wikifunctions.db` with any SQLite viewer (e.g.
[DB Browser for SQLite](https://sqlitebrowser.org/)):

```sql
-- all verdicts for one function
SELECT tool, verdict_corrected, failure_reason
FROM tool_results WHERE zid = 'Z14962';

-- the complete raw output of one tool run (unedited)
SELECT raw_output FROM tool_results
WHERE zid = 'Z13668' AND tool = 'aprove_c';

-- the original Python of any function
SELECT python_code FROM implementations WHERE zid = 'Z14962';
```

The chain for every number in the thesis is:
dump → `implementations` → `translations` (and the files in
`c_translations/` etc.) → `tool_results.raw_output` (verbatim tool output)
→ `verdict_corrected` (derived by the classifier cell in the notebook)
→ the CSVs in `results/` → the thesis tables.

## A note on verdict_corrected

The database stores two verdict columns. The original `result` column was
produced by early per-tool parsers that misclassified some outputs (e.g.
KoAT parser crashes counted as "unknown"). The notebook's classifier cell
re-derives `verdict_corrected` and `failure_reason` for every run from the
stored raw output; `verdict_corrected` is the authoritative column and the
one all thesis tables use. Since the raw outputs are stored verbatim, this
correction is fully transparent and re-runnable.
