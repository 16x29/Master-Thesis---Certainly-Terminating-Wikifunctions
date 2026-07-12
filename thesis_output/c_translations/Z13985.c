extern int __VERIFIER_nondet_int(void);
extern void __VERIFIER_assume(int);
int main() {
  long Z13984K1 = __VERIFIER_nondet_int();
  __VERIFIER_assume(Z13984K1 >= 0);
  long n = 0;
  long i = 0;
  long sdiv = 0;
  goto Lloc2;
Lloc1: ;
  return 0;
Lloc2: ;
    n = Z13984K1;
  goto Lloc3;
Lloc3: ;
  goto Lloc5;
Lloc4: ;
    i = 1;
  goto Lloc8;
Lloc5: ;
  if (((n != 0) && (((n) % (2)) == 0))) {
    goto Lloc6;
  }
  if ((!(((n != 0) && (((n) % (2)) == 0))))) {
    goto Lloc4;
  }
  return 0;
Lloc6: ;
    n = ((n) / (2));
  goto Lloc7;
Lloc7: ;
  goto Lloc5;
Lloc8: ;
    sdiv = 0;
  goto Lloc9;
Lloc9: ;
  goto Lloc11;
Lloc10: ;
  goto Lloc1;
Lloc11: ;
  if ((((i) * (i)) <= n)) {
    goto Lloc12;
  }
  if ((!((((i) * (i)) <= n)))) {
    goto Lloc10;
  }
  return 0;
Lloc12: ;
  if ((((n) % (i)) == 0)) {
    goto Lloc14;
  }
  if ((!((((n) % (i)) == 0)))) {
    goto Lloc13;
  }
  return 0;
Lloc13: ;
    i = ((i) + (1));
  goto Lloc19;
Lloc14: ;
    sdiv = ((sdiv) + (i));
  goto Lloc15;
Lloc15: ;
  if ((((i) * (i)) < n)) {
    goto Lloc17;
  }
  if ((!((((i) * (i)) < n)))) {
    goto Lloc16;
  }
  return 0;
Lloc16: ;
  goto Lloc13;
Lloc17: ;
    sdiv = ((sdiv) + (((n) / (i))));
  goto Lloc18;
Lloc18: ;
  goto Lloc16;
Lloc19: ;
  goto Lloc11;
Lloc20: ;
  goto Lloc1;
}
