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

    while (b != 0) {
        t = b;
        b = a % b;
        a = t;
    }
    return a;
}


int main()
{
    signed char x = __VERIFIER_nondet_char();
    signed char y = __VERIFIER_nondet_char();
    signed char g;

    if (y > 0 && x % y == 0) {
        signed char a = x;
        signed char b = y;
        {
            signed char t;

            if (a < 0) a = -a;
            if (b < 0) b = -b;

            while (b != 0) {
                t = b;
                b = a % b;
                a = t;
            }
            g = a;
        }

        if (!(g==y)) {
          goto ERROR;
          ERROR: ;
          goto ERROR;
        }
    }

    return 0;
}