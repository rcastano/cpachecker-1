extern char __VERIFIER_nondet_char(void);
void __VERIFIER_assert(int cond) {
  if (!(cond)) {
    ERROR: goto ERROR;
  }
  return;
}
signed char gcd_test(signed char a, signed char b)
{
    signed char t;
    if (a < 0) a = -a;
    if (b < 0) b = -b;
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
    signed char a = 5;
    signed char b = 3;
    signed char c = a % b;
    //   8  %  2
    if (((a+b) % (a-b)) == 0) {
        a = a + 1;
        if (!(a % (a+1) != 0)) {
            __VERIFIER_assert(0);
        }
    }
    b = b + 1;
    if (!((b % (b+1)) != 0)) {
        a = a - 1;
        __VERIFIER_assert(0);
    }


    return 0;
}
