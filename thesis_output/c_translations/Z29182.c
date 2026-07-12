extern int __VERIFIER_nondet_int(void);
extern void __VERIFIER_assume(int);
int main() {
  long Z13701K1 = __VERIFIER_nondet_int();
  long Z13701K2 = __VERIFIER_nondet_int();
  __VERIFIER_assume(Z13701K1 >= 0 && Z13701K2 >= 0);
  goto Lloc2;
Lloc1: ;
  return 0;
Lloc2: ;
  goto Lloc4;
Lloc3: ;
  goto Lloc1;
Lloc4: ;
  if ((Z13701K2 != 0)) {
    goto Lloc5;
  }
  if ((!((Z13701K2 != 0)))) {
    goto Lloc3;
  }
  return 0;
Lloc5: ;
    long _t0 = Z13701K2;
    long _t1 = ((Z13701K1) % (Z13701K2));
    Z13701K1 = _t0;
    Z13701K2 = _t1;
  goto Lloc6;
Lloc6: ;
  goto Lloc4;
Lloc7: ;
  goto Lloc1;
}
