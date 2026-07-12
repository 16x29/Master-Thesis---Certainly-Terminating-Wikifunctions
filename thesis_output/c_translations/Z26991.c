extern int __VERIFIER_nondet_int(void);
extern void __VERIFIER_assume(int);
int main() {
  long Z26988K1 = __VERIFIER_nondet_int();
  long Z26988K2 = __VERIFIER_nondet_int();
  __VERIFIER_assume(Z26988K1 >= 0 && Z26988K2 >= 0);
  long i = 0;
  goto Lloc2;
Lloc1: ;
  return 0;
Lloc2: ;
    i = 0;
  goto Lloc3;
Lloc3: ;
  goto Lloc5;
Lloc4: ;
  goto Lloc1;
Lloc5: ;
  if ((((Z26988K1) % (Z26988K2)) == 0)) {
    goto Lloc6;
  }
  if ((!((((Z26988K1) % (Z26988K2)) == 0)))) {
    goto Lloc4;
  }
  return 0;
Lloc6: ;
    Z26988K1 = ((Z26988K1) / (Z26988K2));
  goto Lloc7;
Lloc7: ;
    i = ((i) + (1));
  goto Lloc8;
Lloc8: ;
  goto Lloc5;
Lloc9: ;
  goto Lloc1;
}
