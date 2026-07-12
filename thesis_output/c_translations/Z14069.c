extern int __VERIFIER_nondet_int(void);
extern void __VERIFIER_assume(int);
int main() {
  long Z14066K1 = __VERIFIER_nondet_int();
  __VERIFIER_assume(Z14066K1 >= 0);
  long value = 0;
  long steps = 0;
  goto Lloc2;
Lloc1: ;
  return 0;
Lloc2: ;
  if ((Z14066K1 <= 1)) {
    goto Lloc4;
  }
  if ((!((Z14066K1 <= 1)))) {
    goto Lloc3;
  }
  return 0;
Lloc3: ;
    value = Z14066K1;
  goto Lloc6;
Lloc4: ;
  goto Lloc1;
Lloc5: ;
  goto Lloc3;
Lloc6: ;
    steps = 0;
  goto Lloc7;
Lloc7: ;
  goto Lloc9;
Lloc8: ;
  goto Lloc1;
Lloc9: ;
  if ((value >= Z14066K1)) {
    goto Lloc10;
  }
  if ((!((value >= Z14066K1)))) {
    goto Lloc8;
  }
  return 0;
Lloc10: ;
    steps = ((steps) + (1));
  goto Lloc11;
Lloc11: ;
  if ((((value) % (2)) == 0)) {
    goto Lloc13;
  }
  if ((!((((value) % (2)) == 0)))) {
    goto Lloc15;
  }
  return 0;
Lloc12: ;
  goto Lloc9;
Lloc13: ;
    value = ((value) / (2));
  goto Lloc14;
Lloc14: ;
  goto Lloc12;
Lloc15: ;
    value = ((((3) * (value))) + (1));
  goto Lloc16;
Lloc16: ;
  goto Lloc12;
Lloc17: ;
  goto Lloc1;
}
