#ifndef DEBUG
extern void __VERIFIER_error() __attribute__ ((__noreturn__));
extern unsigned int __VERIFIER_nondet_uint(void);
extern int __VERIFIER_nondet_int(void);
#endif  // !DEBUG

int main() {
  int x = __VERIFIER_nondet_int();
  if (x < 6) {
    x = -x;
  } else {
ERROR: goto ERROR;
  }
  return 0;
}
