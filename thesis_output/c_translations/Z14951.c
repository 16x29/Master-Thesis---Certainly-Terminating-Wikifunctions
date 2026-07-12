extern int __VERIFIER_nondet_int(void);
extern void __VERIFIER_assume(int);
int main() {
  long Z14946K1 = __VERIFIER_nondet_int();
  long Z14946K2 = __VERIFIER_nondet_int();
  __VERIFIER_assume(Z14946K1 >= 0 && Z14946K2 >= 0);
  long i = 0;
  long omega = 0;
  long n = 0;
  goto Lloc2;
Lloc1: ;
  return 0;
Lloc2: ;
    i = 2;
  goto Lloc3;
Lloc3: ;
    omega = 0;
  goto Lloc4;
Lloc4: ;
    n = Z14946K1;
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
  if ((((n) % (i)) == 0)) {
    goto Lloc10;
  }
  if ((!((((n) % (i)) == 0)))) {
    goto Lloc13;
  }
  return 0;
Lloc9: ;
  goto Lloc7;
Lloc10: ;
    n = ((n) / (i));
  goto Lloc11;
Lloc11: ;
    omega = ((omega) + (1));
  goto Lloc12;
Lloc12: ;
  goto Lloc9;
Lloc13: ;
    i = ((i) + (1));
  goto Lloc14;
Lloc14: ;
  goto Lloc9;
Lloc15: ;
  goto Lloc1;
Lloc16: ;
    omega = ((omega) + (1));
  goto Lloc17;
Lloc17: ;
  goto Lloc15;
Lloc18: ;
  goto Lloc1;
}
