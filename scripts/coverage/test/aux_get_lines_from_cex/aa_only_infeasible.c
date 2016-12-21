void assert(int cond) {
    if (!cond) {
ERROR: goto ERROR;
    }
}

int __VERIFIER_nondet_int();

int main() {
    int x = __VERIFIER_nondet_int();
    int z = 1;
    if (x*x >= 0) {
        if (x > 0) {
            z = 4;
        } else {
            z = 3;
        }
    } else {
        z = 2;
        assert(0);
    }
    return 0;
}
