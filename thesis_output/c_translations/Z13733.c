extern int __VERIFIER_nondet_int(void);
extern void __VERIFIER_assume(int);
int main() {
  long Z13732K1 = __VERIFIER_nondet_int();
  __VERIFIER_assume(Z13732K1 >= 0);
  long i = 0;
  long n = 0;
  goto Lloc2;
Lloc1: ;
  return 0;
Lloc2: ;
    i = 2;
  goto Lloc3;
Lloc3: ;
    n = Z13732K1;
  goto Lloc4;
Lloc4: ;
  goto Lloc6;
Lloc5: ;
  goto Lloc1;
Lloc6: ;
  if ((((i) * (i)) <= n)) {
    goto Lloc7;
  }
  if ((!((((i) * (i)) <= n)))) {
    goto Lloc5;
  }
  return 0;
Lloc7: ;
  goto Lloc9;
Lloc8: ;
    i = ((i) + (1));
  goto Lloc12;
Lloc9: ;
  if ((((n) % (i)) == 0)) {
    goto Lloc10;
  }
  if ((!((((n) % (i)) == 0)))) {
    goto Lloc8;
  }
  return 0;
Lloc10: ;
  goto Lloc1;
Lloc11: ;
  goto Lloc9;
Lloc12: ;
  goto Lloc6;
Lloc13: ;
  goto Lloc1;
}
