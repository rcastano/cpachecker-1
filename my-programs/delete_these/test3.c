extern char __VERIFIER_nondet_char(void);
void __VERIFIER_assert(int cond) {
  if (!(cond)) {
    ERROR: goto ERROR;
  }
  return;
}
signed char gcd(signed char a, signed char b)
{
    signed char t;
    signed char temp = a;
    signed char temp2 = b;

    while (b != 0) {
        t = b;
        b = a % b;
        __VERIFIER_assert(temp ==0 || temp2 == 0 || temp % (a+1) != 0 || temp2 % (a+1) != 0);
        a = t;
    }
    return a;
}


int main()
{
    int x1 = __VERIFIER_nondet_char();
    int x2 = __VERIFIER_nondet_char();
    if (x1 >= 0 && x2 >= 0)
    gcd(x1, x2);

    return 0;
}
