void __VERIFIER_error();
unsigned int __VERIFIER_nondet_uint();
int __VERIFIER_nondet_int();
void __VERIFIER_assert(int cond);
int circular_buffer[1000] = {  };
int count = 0;
int start = 0;
int initialized = 0;
void init();
int push(int x);
int pop(int *a);
void harness(int total_pushed);
int main();
extern void __VERIFIER_error(void);
int main_0();
void harness_1(int total_pushed);
int main_0() {
  int total_pushed;
  total_pushed = __VERIFIER_nondet_int();
  __CPROVER_assume(!(total_pushed < 0));
  harness_1(total_pushed);
}

void harness_1(int total_pushed) {
  __VERIFIER_error(); // target state
}
