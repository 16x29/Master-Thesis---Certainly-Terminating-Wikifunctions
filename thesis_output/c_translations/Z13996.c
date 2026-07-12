extern int __VERIFIER_nondet_int(void);
extern void __VERIFIER_assume(int);
int main() {
  long Z13995K1 = __VERIFIER_nondet_int();
  __VERIFIER_assume(Z13995K1 >= 0);
  long n = 0;
  long i = 0;
  goto Lloc2;
Lloc1: ;
  return 0;
Lloc2: ;
    n = 1;
  goto Lloc3;
Lloc3: ;
    i = Z13995K1;
  goto Lloc5;
Lloc4: ;
  goto Lloc1;
Lloc5: ;
  goto Lloc6;
Lloc6: ;
  if ((i > 0)) {
    goto Lloc7;
  }
  if ((!((i > 0)))) {
    goto Lloc4;
  }
  return 0;
Lloc7: ;
    n = ((n) * (i));
  goto Lloc9;
Lloc8: ;
    i = ((i) + ((-(2))));
  goto Lloc6;
Lloc9: ;
  goto Lloc8;
Lloc10: ;
  goto Lloc1;
}
