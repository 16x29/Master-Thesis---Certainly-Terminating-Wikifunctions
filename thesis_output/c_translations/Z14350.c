extern int __VERIFIER_nondet_int(void);
extern void __VERIFIER_assume(int);
int main() {
  long Z14344K1 = __VERIFIER_nondet_int();
  __VERIFIER_assume(Z14344K1 >= 0);
  long i = 0;
  long level = 0;
  goto Lloc2;
Lloc1: ;
  return 0;
Lloc2: ;
    i = 1;
  goto Lloc3;
Lloc3: ;
    level = 10;
  goto Lloc4;
Lloc4: ;
  goto Lloc6;
Lloc5: ;
  goto Lloc1;
Lloc6: ;
  if ((((Z14344K1) / (level)) != 0)) {
    goto Lloc7;
  }
  if ((!((((Z14344K1) / (level)) != 0)))) {
    goto Lloc5;
  }
  return 0;
Lloc7: ;
    i = ((i) + (1));
  goto Lloc8;
Lloc8: ;
    level = ((level) * (10));
  goto Lloc9;
Lloc9: ;
  goto Lloc6;
Lloc10: ;
  goto Lloc1;
}
