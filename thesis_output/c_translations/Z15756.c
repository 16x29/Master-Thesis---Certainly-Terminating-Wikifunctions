extern int __VERIFIER_nondet_int(void);
extern void __VERIFIER_assume(int);
int main() {
  long Z15470K1 = __VERIFIER_nondet_int();
  __VERIFIER_assume(Z15470K1 >= 0);
  long sum = 0;
  long i = 0;
  goto Lloc2;
Lloc1: ;
  return 0;
Lloc2: ;
    sum = 1;
  goto Lloc3;
Lloc3: ;
    i = 0;
  goto Lloc4;
Lloc4: ;
  goto Lloc6;
Lloc5: ;
  goto Lloc1;
Lloc6: ;
  if ((i < Z15470K1)) {
    goto Lloc7;
  }
  if ((!((i < Z15470K1)))) {
    goto Lloc5;
  }
  return 0;
Lloc7: ;
    sum = ((sum) + (((9) * (i))));
  goto Lloc8;
Lloc8: ;
    i = ((i) + (1));
  goto Lloc9;
Lloc9: ;
  goto Lloc6;
Lloc10: ;
  goto Lloc1;
}
