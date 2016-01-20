
// #define DEBUG

#ifndef DEBUG
extern void __VERIFIER_error() __attribute__ ((__noreturn__));
extern unsigned int __VERIFIER_nondet_uint(void);
extern int __VERIFIER_nondet_int(void);
extern void __VERIFIER_assume(int cond);
#endif  // !DEBUG


 void __VERIFIER_assert(int cond) {
   if (!(cond)) {
     ERROR: __VERIFIER_error();
   }
   return;
 }



int main() {

    int a, b;
    a = __VERIFIER_nondet_int();
    b = __VERIFIER_nondet_int();
    if(a != 0 && b != 0) {
    if ((a < 0 && b < 0) || (a > 0 && b > 0)) {
        a = -a;
    }

    __VERIFIER_assert((a*b) < 0);
    }
    
}
