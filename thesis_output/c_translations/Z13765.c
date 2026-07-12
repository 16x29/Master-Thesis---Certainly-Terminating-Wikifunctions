extern int __VERIFIER_nondet_int(void);
extern void __VERIFIER_assume(int);
int main() {
  long Z13764K1 = __VERIFIER_nondet_int();
  __VERIFIER_assume(Z13764K1 >= 0);
  long npdiv = 0;
  long i = 0;
  long n = 0;
  goto Lloc2;
Lloc1: ;
  return 0;
Lloc2: ;
    npdiv = 0;
  goto Lloc3;
Lloc3: ;
    i = 2;
  goto Lloc4;
Lloc4: ;
    n = Z13764K1;
  goto Lloc5;
Lloc5: ;
  goto Lloc7;
Lloc6: ;
  if ((n > 1)) {
    goto Lloc16;
  }
  if ((!((n > 1)))) {
    goto Lloc15;
  }
  return 0;
Lloc7: ;
  if ((((i) * (i)) <= n)) {
    goto Lloc8;
  }
  if ((!((((i) * (i)) <= n)))) {
    goto Lloc6;
  }
  return 0;
Lloc8: ;
  goto Lloc10;
Lloc9: ;
    i = ((i) + (1));
  goto Lloc14;
Lloc10: ;
  if ((((n) % (i)) == 0)) {
    goto Lloc11;
  }
  if ((!((((n) % (i)) == 0)))) {
    goto Lloc9;
  }
  return 0;
Lloc11: ;
    n = ((n) / (i));
  goto Lloc12;
Lloc12: ;
    npdiv = ((npdiv) + (1));
  goto Lloc13;
Lloc13: ;
  goto Lloc10;
Lloc14: ;
  goto Lloc7;
Lloc15: ;
  goto Lloc1;
Lloc16: ;
    npdiv = ((npdiv) + (1));
  goto Lloc17;
Lloc17: ;
  goto Lloc15;
Lloc18: ;
  goto Lloc1;
}
