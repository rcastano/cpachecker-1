
// #define DEBUG

#ifndef DEBUG
extern void __VERIFIER_error() __attribute__ ((__noreturn__));
extern unsigned int __VERIFIER_nondet_uint(void);
extern int __VERIFIER_nondet_int(void);
#endif  // !DEBUG

void __VERIFIER_assert(int cond) {
  if (!(cond)) {
   ERROR:
    goto ERROR;
  }
  return;
}

int main(void) {

  int total_pushed = __VERIFIER_nondet_int();
  if (total_pushed < 0) {
    total_pushed = -total_pushed;
  }
  __VERIFIER_assert(0);

}
