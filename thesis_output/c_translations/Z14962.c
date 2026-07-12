extern int __VERIFIER_nondet_int(void);
extern void __VERIFIER_assume(int);
int main() {
  long Z14961K1 = __VERIFIER_nondet_int();
  __VERIFIER_assume(Z14961K1 >= 0);
  long i = 0;
  long n = 0;
  goto Lloc2;
Lloc1: ;
  return 0;
Lloc2: ;
    i = 1;
  goto Lloc3;
Lloc3: ;
    n = Z14961K1;
  goto Lloc4;
Lloc4: ;
  goto Lloc6;
Lloc5: ;
  goto Lloc1;
Lloc6: ;
  if (1) {
    goto Lloc7;
  }
  if ((!(1))) {
    goto Lloc5;
  }
  return 0;
Lloc7: ;
  if ((((n) % (i)) == 0)) {
    goto Lloc9;
  }
  if ((!((((n) % (i)) == 0)))) {
    goto Lloc11;
  }
  return 0;
Lloc8: ;
    i = ((i) + (1));
  goto Lloc13;
Lloc9: ;
    n = ((n) / (i));
  goto Lloc10;
Lloc10: ;
  goto Lloc8;
Lloc11: ;
  goto Lloc5;
Lloc12: ;
  goto Lloc8;
Lloc13: ;
  goto Lloc6;
Lloc14: ;
  goto Lloc1;
}
