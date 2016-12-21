void assert(int cond) {
    if (!cond) {
ERROR: goto ERROR;
    }
}

int __VERIFIER_nondet_int();

int main() {
    int x = __VERIFIER_nondet_int();
    int z = 1;
    if (x*x < 0) {
        z = 2;
        assert(0);
    } else {
        if (x > 0) {
            z = 4;
            return 0;
        } else {
            z = 3;
            return 0;
        }
    }
    return 0;
}
