extern int __VERIFIER_nondet_int(void);
extern void __VERIFIER_assume(int);
int main() {
  long Z13982K1 = __VERIFIER_nondet_int();
  __VERIFIER_assume(Z13982K1 >= 0);
  long n = 0;
  goto Lloc2;
Lloc1: ;
  return 0;
Lloc2: ;
    n = Z13982K1;
  goto Lloc3;
Lloc3: ;
  goto Lloc5;
Lloc4: ;
  goto Lloc1;
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
  goto Lloc1;
}
