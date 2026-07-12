extern int __VERIFIER_nondet_int(void);
extern void __VERIFIER_assume(int);
int main() {
  long Z14933K1 = __VERIFIER_nondet_int();
  __VERIFIER_assume(Z14933K1 >= 0);
  long i = 0;
  long sdiv = 0;
  goto Lloc2;
Lloc1: ;
  return 0;
Lloc2: ;
    i = 2;
  goto Lloc3;
Lloc3: ;
    sdiv = 1;
  goto Lloc4;
Lloc4: ;
  goto Lloc6;
Lloc5: ;
  goto Lloc1;
Lloc6: ;
  if ((((i) * (i)) <= Z14933K1)) {
    goto Lloc7;
  }
  if ((!((((i) * (i)) <= Z14933K1)))) {
    goto Lloc5;
  }
  return 0;
Lloc7: ;
  if ((((Z14933K1) % (i)) == 0)) {
    goto Lloc9;
  }
  if ((!((((Z14933K1) % (i)) == 0)))) {
    goto Lloc8;
  }
  return 0;
Lloc8: ;
    i = ((i) + (1));
  goto Lloc14;
Lloc9: ;
    sdiv = ((sdiv) + (i));
  goto Lloc10;
Lloc10: ;
  if ((((i) * (i)) < Z14933K1)) {
    goto Lloc12;
  }
  if ((!((((i) * (i)) < Z14933K1)))) {
    goto Lloc11;
  }
  return 0;
Lloc11: ;
  goto Lloc8;
Lloc12: ;
    sdiv = ((sdiv) + (((Z14933K1) / (i))));
  goto Lloc13;
Lloc13: ;
  goto Lloc11;
Lloc14: ;
  goto Lloc6;
Lloc15: ;
  goto Lloc1;
}
