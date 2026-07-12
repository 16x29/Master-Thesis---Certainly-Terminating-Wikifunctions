extern int __VERIFIER_nondet_int(void);
extern void __VERIFIER_assume(int);
int main() {
  long Z13612K1 = __VERIFIER_nondet_int();
  long Z13612K2 = __VERIFIER_nondet_int();
  __VERIFIER_assume(Z13612K1 >= 0 && Z13612K2 >= 0);
  long x = 0;
  long y = 0;
  goto Lloc2;
Lloc1: ;
  return 0;
Lloc2: ;
  if ((Z13612K1 == 0)) {
    goto Lloc4;
  }
  if ((!((Z13612K1 == 0)))) {
    goto Lloc3;
  }
  return 0;
Lloc3: ;
    x = Z13612K1;
  goto Lloc6;
Lloc4: ;
  goto Lloc1;
Lloc5: ;
  goto Lloc3;
Lloc6: ;
    y = Z13612K2;
  goto Lloc7;
Lloc7: ;
  goto Lloc9;
Lloc8: ;
  goto Lloc1;
Lloc9: ;
  if (y) {
    goto Lloc10;
  }
  if ((!(y))) {
    goto Lloc8;
  }
  return 0;
Lloc10: ;
    long _t0 = y;
    long _t1 = ((x) % (y));
    x = _t0;
    y = _t1;
  goto Lloc11;
Lloc11: ;
  goto Lloc9;
Lloc12: ;
  goto Lloc1;
}
