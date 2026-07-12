extern int __VERIFIER_nondet_int(void);
extern void __VERIFIER_assume(int);
int main() {
  long Z14058K1 = __VERIFIER_nondet_int();
  __VERIFIER_assume(Z14058K1 >= 0);
  long value = 0;
  long steps = 0;
  goto Lloc2;
Lloc1: ;
  return 0;
Lloc2: ;
    value = Z14058K1;
  goto Lloc3;
Lloc3: ;
    steps = 0;
  goto Lloc4;
Lloc4: ;
  goto Lloc6;
Lloc5: ;
  goto Lloc1;
Lloc6: ;
  if ((value > 1)) {
    goto Lloc7;
  }
  if ((!((value > 1)))) {
    goto Lloc5;
  }
  return 0;
Lloc7: ;
    steps = ((steps) + (1));
  goto Lloc8;
Lloc8: ;
  if ((((value) % (2)) == 0)) {
    goto Lloc10;
  }
  if ((!((((value) % (2)) == 0)))) {
    goto Lloc12;
  }
  return 0;
Lloc9: ;
  goto Lloc6;
Lloc10: ;
    value = ((value) / (2));
  goto Lloc11;
Lloc11: ;
  goto Lloc9;
Lloc12: ;
    value = ((((3) * (value))) + (1));
  goto Lloc13;
Lloc13: ;
  goto Lloc9;
Lloc14: ;
  goto Lloc1;
}
