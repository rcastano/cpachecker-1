int __VERIFIER_nondet_int();
int main() {
    int x = __VERIFIER_nondet_int();
    if (x*x > 3) {
        x = x + 1;
        x = x + 2;
        x = x + 3;
        x = x + 4;
L1:
        x = 111;

    }
    else {
ASSUME_TRUE:
        x = 2;

    }
    return 0;
}
