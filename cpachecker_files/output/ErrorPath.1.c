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
int pop_2(int *a);
void init_3();
int main_0() {
  int total_pushed;
  total_pushed = __VERIFIER_nondet_int();
  __CPROVER_assume(!(total_pushed < 0));
  harness_1(total_pushed);
}

void harness_1(int total_pushed) {
  count = 0;
  int size_b = 20;
  int b[size_b];
  __CPROVER_assume(total_pushed > 0);
  unsigned int op;
  op = __VERIFIER_nondet_uint();
  __CPROVER_assume(!(op == 0));
  int old_count = count;
  pop_2(b);
}

int pop_2(int *a) {
  __CPROVER_assume(initialized == 0);
  init_3();
}

void init_3() {
  __VERIFIER_error(); // target state
}
