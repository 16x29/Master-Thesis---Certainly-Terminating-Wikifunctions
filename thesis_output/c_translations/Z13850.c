extern int __VERIFIER_nondet_int(void);
extern void __VERIFIER_assume(int);
int main() {
  long Z13848K1 = __VERIFIER_nondet_int();
  long Z13848K2 = __VERIFIER_nondet_int();
  __VERIFIER_assume(Z13848K1 >= 0 && Z13848K2 >= 0);
  long x = 0;
  long i = 0;
  goto Lloc2;
Lloc1: ;
  return 0;
Lloc2: ;
    x = 1;
  goto Lloc3;
Lloc3: ;
    i = 1;
  goto Lloc5;
Lloc4: ;
  goto Lloc1;
Lloc5: ;
  goto Lloc6;
Lloc6: ;
  if ((i < ((Z13848K2) + (1)))) {
    goto Lloc7;
  }
  if ((!((i < ((Z13848K2) + (1)))))) {
    goto Lloc4;
  }
  return 0;
Lloc7: ;
    x = ((((x) * (((((Z13848K1) - (Z13848K2))) + (i))))) / (i));
  goto Lloc9;
Lloc8: ;
    i = ((i) + (1));
  goto Lloc6;
Lloc9: ;
  goto Lloc8;
Lloc10: ;
  goto Lloc1;
}
