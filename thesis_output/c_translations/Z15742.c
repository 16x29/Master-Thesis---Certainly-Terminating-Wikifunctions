extern int __VERIFIER_nondet_int(void);
extern void __VERIFIER_assume(int);
int main() {
  long Z15741K1 = __VERIFIER_nondet_int();
  long Z15741K2 = __VERIFIER_nondet_int();
  __VERIFIER_assume(Z15741K1 >= 0 && Z15741K2 >= 0);
  long n = 0;
  long k = 0;
  goto Lloc2;
Lloc1: ;
  return 0;
Lloc2: ;
    long _t0 = Z15741K1;
    long _t1 = Z15741K2;
    n = _t0;
    k = _t1;
  goto Lloc3;
Lloc3: ;
  if (((k <= 1) || (n == 0))) {
    goto Lloc5;
  }
  if ((!(((k <= 1) || (n == 0))))) {
    goto Lloc4;
  }
  return 0;
Lloc4: ;
  goto Lloc8;
Lloc5: ;
  goto Lloc1;
Lloc6: ;
  goto Lloc4;
Lloc7: ;
  goto Lloc1;
Lloc8: ;
  if ((((n) % (k)) == 0)) {
    goto Lloc9;
  }
  if ((!((((n) % (k)) == 0)))) {
    goto Lloc7;
  }
  return 0;
Lloc9: ;
    n = ((n) / (k));
  goto Lloc10;
Lloc10: ;
  goto Lloc8;
Lloc11: ;
  goto Lloc1;
}
