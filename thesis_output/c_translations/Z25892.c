extern int __VERIFIER_nondet_int(void);
extern void __VERIFIER_assume(int);
int main() {
  long Z12427K1 = __VERIFIER_nondet_int();
  __VERIFIER_assume(Z12427K1 >= 0);
  long x = 0;
  long div = 0;
  goto Lloc2;
Lloc1: ;
  return 0;
Lloc2: ;
    x = Z12427K1;
  goto Lloc3;
Lloc3: ;
  if ((x <= 1)) {
    goto Lloc5;
  }
  if ((!((x <= 1)))) {
    goto Lloc4;
  }
  return 0;
Lloc4: ;
  if ((x <= 3)) {
    goto Lloc8;
  }
  if ((!((x <= 3)))) {
    goto Lloc7;
  }
  return 0;
Lloc5: ;
  goto Lloc1;
Lloc6: ;
  goto Lloc4;
Lloc7: ;
  if (((((x) % (2)) == 0) || (((x) % (3)) == 0))) {
    goto Lloc11;
  }
  if ((!(((((x) % (2)) == 0) || (((x) % (3)) == 0))))) {
    goto Lloc10;
  }
  return 0;
Lloc8: ;
  goto Lloc1;
Lloc9: ;
  goto Lloc7;
Lloc10: ;
    div = 5;
  goto Lloc13;
Lloc11: ;
  goto Lloc1;
Lloc12: ;
  goto Lloc10;
Lloc13: ;
  goto Lloc15;
Lloc14: ;
  goto Lloc1;
Lloc15: ;
  if ((((div) * (div)) <= x)) {
    goto Lloc16;
  }
  if ((!((((div) * (div)) <= x)))) {
    goto Lloc14;
  }
  return 0;
Lloc16: ;
  if (((((x) % (div)) == 0) || (((x) % (((div) + (2)))) == 0))) {
    goto Lloc18;
  }
  if ((!(((((x) % (div)) == 0) || (((x) % (((div) + (2)))) == 0))))) {
    goto Lloc17;
  }
  return 0;
Lloc17: ;
    div = ((div) + (6));
  goto Lloc20;
Lloc18: ;
  goto Lloc1;
Lloc19: ;
  goto Lloc17;
Lloc20: ;
  goto Lloc15;
Lloc21: ;
  goto Lloc1;
}
