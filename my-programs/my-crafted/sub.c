#ifndef DEBUG
extern void __VERIFIER_error() __attribute__ ((__noreturn__));
extern unsigned int __VERIFIER_nondet_uint(void);
extern int __VERIFIER_nondet_int(void);
#endif  // !DEBUG

void stop(void) {
}

void some_method_1(void) {
}

void some_method_2(void) {
}

void error(void) {
ERROR: goto ERROR;
}

int main() {
  int x;
  int y;
  int z;
  int u = __VERIFIER_nondet_int();
  int i1 = 0;
  while (i1 < 5) {
    u = __VERIFIER_nondet_int();
    if (u) break;
    some_method_1();
    ++i1;
  }
  int i = 0;
  while (u) {
    if (i == 2) {
      stop();
    }
    if (i > 4) {
      error();
    }
    x = -(x+1);
    some_method_2();
    u = __VERIFIER_nondet_int();
    ++i;
  }

  return 0;
}
