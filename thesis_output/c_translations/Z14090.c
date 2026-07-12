extern int __VERIFIER_nondet_int(void);
extern void __VERIFIER_assume(int);
int main() {
  long Z12427K1 = __VERIFIER_nondet_int();
  __VERIFIER_assume(Z12427K1 >= 0);
  long cnt = 0;
  long x = 0;
  goto Lloc2;
Lloc1: ;
  return 0;
Lloc2: ;
    cnt = 2;
  goto Lloc3;
Lloc3: ;
    x = Z12427K1;
  goto Lloc4;
Lloc4: ;
  if ((x <= 1)) {
    goto Lloc6;
  }
  if ((!((x <= 1)))) {
    goto Lloc5;
  }
  return 0;
Lloc5: ;
  goto Lloc9;
Lloc6: ;
  goto Lloc1;
Lloc7: ;
  goto Lloc5;
Lloc8: ;
  goto Lloc1;
Lloc9: ;
  if ((((cnt) * (cnt)) <= x)) {
    goto Lloc10;
  }
  if ((!((((cnt) * (cnt)) <= x)))) {
    goto Lloc8;
  }
  return 0;
Lloc10: ;
  if ((((x) % (cnt)) == 0)) {
    goto Lloc12;
  }
  if ((!((((x) % (cnt)) == 0)))) {
    goto Lloc14;
  }
  return 0;
Lloc11: ;
  goto Lloc9;
Lloc12: ;
  goto Lloc1;
Lloc13: ;
  goto Lloc11;
Lloc14: ;
    cnt = ((cnt) + (1));
  goto Lloc15;
Lloc15: ;
  goto Lloc11;
Lloc16: ;
  goto Lloc1;
}
