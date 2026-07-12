extern int __VERIFIER_nondet_int(void);
extern void __VERIFIER_assume(int);
int main() {
  long Z13767K1 = __VERIFIER_nondet_int();
  __VERIFIER_assume(Z13767K1 >= 0);
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
    n = Z13767K1;
  goto Lloc5;
Lloc5: ;
  goto Lloc7;
Lloc6: ;
  if ((n > 1)) {
    goto Lloc18;
  }
  if ((!((n > 1)))) {
    goto Lloc17;
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
  if ((((n) % (i)) == 0)) {
    goto Lloc10;
  }
  if ((!((((n) % (i)) == 0)))) {
    goto Lloc9;
  }
  return 0;
Lloc9: ;
  goto Lloc13;
Lloc10: ;
    npdiv = ((npdiv) + (1));
  goto Lloc11;
Lloc11: ;
  goto Lloc9;
Lloc12: ;
    i = ((i) + (1));
  goto Lloc16;
Lloc13: ;
  if ((((n) % (i)) == 0)) {
    goto Lloc14;
  }
  if ((!((((n) % (i)) == 0)))) {
    goto Lloc12;
  }
  return 0;
Lloc14: ;
    n = ((n) / (i));
  goto Lloc15;
Lloc15: ;
  goto Lloc13;
Lloc16: ;
  goto Lloc7;
Lloc17: ;
  goto Lloc1;
Lloc18: ;
    npdiv = ((npdiv) + (1));
  goto Lloc19;
Lloc19: ;
  goto Lloc17;
Lloc20: ;
  goto Lloc1;
}
