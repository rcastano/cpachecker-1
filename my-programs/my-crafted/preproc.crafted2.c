# 1 "crafted2.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "crafted2.c"




extern void __VERIFIER_error() __attribute__ ((__noreturn__));
extern unsigned int __VERIFIER_nondet_uint(void);
extern int __VERIFIER_nondet_int(void);
# 37 "crafted2.c"
 void __VERIFIER_assert(int cond) {
   if (!(cond)) {
     ERROR: __VERIFIER_error();
   }
   return;
 }





int circular_buffer[100];
int count = 0;
int start;
int initialized = 0;
# 104 "crafted2.c"
void init() {
  int i;
  start = 0;
  count = 0;
  for (i = 0; i < 100; ++i) {
    circular_buffer[i] = 0;
  }
  ;
}

void fill_random(int *a, int n) {
  int i;
  for (i = 0; i < n; ++i) {
    a[i] = __VERIFIER_nondet_int();
  }
}

int min (int a, int b) {
  if (a < b) {
    return a;
  }
  return b;
}

int push(int *a, int n) {
  if (!initialized) {
    init();
    initialized = 1;
  }
  int old_count = count;
  n = min(n, 100 - count);
  if (n < 100 - (start + count)) {
    int i;
    for (i = 0; i < n; ++i) {
      circular_buffer[start + count] = a[i];
      ++count;
    }
  } else {
    int i = 0;
    for (i = 0; start + count < 100; ++i) {
      circular_buffer[start + count] = a[i];
      ++count;
    }
    int j = 0;
    for (; i < n; ++i) {
      circular_buffer[j] = a[i];
      ++count;
      ++j;
    }

  }
  ;
  return n;
}

int pop(int *a, int n) {
  if (!initialized) {
    init();
    initialized = 1;
  }
  n = min(n, count);
  int i = 0;
  for (;i<n && start < 100; ++start) {
    a[i] = circular_buffer[start];


    ++i;
  }
  if (start == 100) {
    start = 0;
  }
  for (;i < n; ++start) {
    a[i] = circular_buffer[start];


    ++i;
  }
  count -= n;
  ;
  return n;
}

void harness(int total_pushed) {

  count = 0;

  int size_b = 20;
  int b[size_b];
  while (total_pushed > 0) {
    unsigned int op = __VERIFIER_nondet_uint();
    int n = __VERIFIER_nondet_int();
    if (n < 0) {
      n = -n;
    }

    if (op == 0) {

      n = min(min(size_b,n),total_pushed);
      total_pushed -= n;
      fill_random(b,n);
      push(b,n);

    } else {

      int old_count = count;
      pop(b,n);
      if (n > 100) {
        __VERIFIER_assert(count == 0 || old_count == count + n);

      }
    }
  }
}
# 235 "crafted2.c"
int main(void) {


  int total_pushed = __VERIFIER_nondet_int();
  if (total_pushed < 0) {
    total_pushed = -total_pushed;
  }
  harness(total_pushed);



}
