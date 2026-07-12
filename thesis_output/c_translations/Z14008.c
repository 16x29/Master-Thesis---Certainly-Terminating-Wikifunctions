extern int __VERIFIER_nondet_int(void);
extern void __VERIFIER_assume(int);
int main() {
  long Z14007K1 = __VERIFIER_nondet_int();
  __VERIFIER_assume(Z14007K1 >= 0);
  long k = 0;
  long n = 0;
  long i = 0;
  goto Lloc2;
Lloc1: ;
  return 0;
Lloc2: ;
    k = ((Z14007K1) / (2));
  goto Lloc3;
Lloc3: ;
    n = 1;
  goto Lloc4;
Lloc4: ;
    i = 1;
  goto Lloc6;
Lloc5: ;
  goto Lloc1;
Lloc6: ;
  goto Lloc7;
Lloc7: ;
  if ((i < ((k) + (1)))) {
    goto Lloc8;
  }
  if ((!((i < ((k) + (1)))))) {
    goto Lloc5;
  }
  return 0;
Lloc8: ;
    n = ((((n) * (((((Z14007K1) - (k))) + (i))))) / (i));
  goto Lloc10;
Lloc9: ;
    i = ((i) + (1));
  goto Lloc7;
Lloc10: ;
  goto Lloc9;
Lloc11: ;
  goto Lloc1;
}
