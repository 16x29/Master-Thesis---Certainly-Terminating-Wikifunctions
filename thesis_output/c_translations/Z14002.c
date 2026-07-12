extern int __VERIFIER_nondet_int(void);
extern void __VERIFIER_assume(int);
int main() {
  long Z14001K1 = __VERIFIER_nondet_int();
  __VERIFIER_assume(Z14001K1 >= 0);
  long i = 0;
  long ndiv = 0;
  long n = 0;
  goto Lloc2;
Lloc1: ;
  return 0;
Lloc2: ;
    i = 1;
  goto Lloc3;
Lloc3: ;
    ndiv = 0;
  goto Lloc4;
Lloc4: ;
    n = Z14001K1;
  goto Lloc5;
Lloc5: ;
  goto Lloc7;
Lloc6: ;
  goto Lloc11;
Lloc7: ;
  if (((n != 0) && (((n) % (2)) == 0))) {
    goto Lloc8;
  }
  if ((!(((n != 0) && (((n) % (2)) == 0))))) {
    goto Lloc6;
  }
  return 0;
Lloc8: ;
    n = ((n) / (2));
  goto Lloc9;
Lloc9: ;
  goto Lloc7;
Lloc10: ;
  goto Lloc1;
Lloc11: ;
  if ((((i) * (i)) <= n)) {
    goto Lloc12;
  }
  if ((!((((i) * (i)) <= n)))) {
    goto Lloc10;
  }
  return 0;
Lloc12: ;
  if ((((n) % (i)) == 0)) {
    goto Lloc14;
  }
  if ((!((((n) % (i)) == 0)))) {
    goto Lloc13;
  }
  return 0;
Lloc13: ;
    i = ((i) + (1));
  goto Lloc19;
Lloc14: ;
    ndiv = ((ndiv) + (1));
  goto Lloc15;
Lloc15: ;
  if ((((i) * (i)) < n)) {
    goto Lloc17;
  }
  if ((!((((i) * (i)) < n)))) {
    goto Lloc16;
  }
  return 0;
Lloc16: ;
  goto Lloc13;
Lloc17: ;
    ndiv = ((ndiv) + (1));
  goto Lloc18;
Lloc18: ;
  goto Lloc16;
Lloc19: ;
  goto Lloc11;
Lloc20: ;
  goto Lloc1;
}
