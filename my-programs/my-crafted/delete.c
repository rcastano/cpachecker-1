
// #define DEBUG

#ifndef DEBUG
extern void __VERIFIER_error() __attribute__ ((__noreturn__));
extern unsigned int __VERIFIER_nondet_uint(void);
extern int __VERIFIER_nondet_int(void);
#endif  // !DEBUG

#ifdef DEBUG
#include "stdio.h"
#include "stdlib.h"
int debugging = 1;
void __VERIFIER_error() {
  exit(110);
}
int last = 0;
unsigned int __VERIFIER_nondet_uint(void) {
  if (last == 0) {
    last = 1;
    return 1;
  }
  last = 0;
  return 0;
}

int last_int = 7;
int __VERIFIER_nondet_int(void) {
  if (last_int < -4) {
    last_int = 6;
  }
  last_int -= 2;
  return last_int;
}
#endif // DEBUG

 void __VERIFIER_assert(int cond) {
   if (!(cond)) {
     ERROR: __VERIFIER_error();
   }
   return;
 }



#define size 5
// #define size 5
int circular_buffer[size];
int count = 0;
int start;
int initialized = 0;


#ifdef DEBUG
void print_array(int *a, int n) {
  int i;
  for (i = 0; i < n; ++i) {
    if (i!=0) {
      printf(", ");
    }
    printf("%d", a[i]);
  }
  printf("\n");
}


void print_buffer() {
  printf("count: %d\n", count);
  printf("start: %d\n", start);
  printf("initialized: %d\n", initialized);
  int i;
  int printed = 0;
  printf("[");
  for (i = start; i < size && i < count; ++i) {
    if (i!=start) {
      printf(", ");
    }
    printf("%d", circular_buffer[i]);
    ++printed;
  }
  for (i = 0; printed < count; ++i) {
    if (i!=start) {
      printf(", ");
    }
    printf("%d", circular_buffer[i]);
    ++printed;
  }
  printf("]\n\n");
}

void debug(char *s) {
  if (debugging) {
    printf("method: %s\n", s);
    print_buffer();
  }
}
#endif  // DEBUG
#ifndef DEBUG
#define debug(s) 

#endif  // !DEBUG


void init() {
  int i;
  start = 0;
  count = 0;
  for (i = 0; i < size; ++i) {
    circular_buffer[i] = 0;
  }
  debug("init");
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
  __VERIFIER_assert((count % n) < 6);
  if (!initialized) {
    init();
    initialized = 1;
  }
  int old_count = count;
  n = min(n, size - count);
  if (n < size - (start + count)) {
    int i;
    for (i = 0; i < n; ++i) {
      circular_buffer[start + count] = a[i];
      ++count;
    }
  } else {
    int  i = 0;
    for (i = 0; start + count < size; ++i) {
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
  debug("push");
  return n;
}

int pop(int *a, int n) {
  if (!initialized) {
    init();
    initialized = 1;
  }
  n = min(n, count);
  int i = 0;
  for (;i<n && start < size; ++start) {
    a[i] = circular_buffer[start];

    // cpachecker complains
    ++i;
  }
  if (start == size) {
    start = 0;
  }
  for (;i < n; ++start) {
    a[i] = circular_buffer[start];

    // cpachecker complains
    ++i;
  }
  count -= n;
  debug("pop");
  return n;
}

void harness(int total_pushed) {
  // fake init
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
      // do push
      n = min(min(size_b,n),total_pushed);
      total_pushed -= n;
      fill_random(b,n);
      push(b,n);

    } else {
      // __VERIFIER_assert(n < -total_pushed);
      // do pop
      int old_count = count;
      pop(b,n);
      if (n > size) {
        __VERIFIER_assert(count == 0 || old_count == count + n);
        // count != 0 ==> old_count == count + n;
      }
    }
    __VERIFIER_assert(count >= 0);
  }
}


// void test1() {
// 
//   int a[3];
//   int b[10];
//   a[0] = 11;
//   a[1] = 12;
//   a[2] = 13;
//   push(a,1);
//   int c = pop(b, 2);
//   printf("popped %d element/s.\n", c);
//   push(a,2); // 11, 12
//   push(a,3); // 11, 12, 11, 12, 13
//   pop(b,5);
//   print_array(b, 5);   
// }

int main(void) {
  // test1();

  unsigned int a = 0;
  unsigned int b = __VERIFIER_nondet_uint();

  while (1) {
    a = a % (2*b);
    a += 2;
    __VERIFIER_assert(a != 33);
  }

}