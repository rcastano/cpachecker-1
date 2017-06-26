int __VERIFIER_nondet_int();
int main() {
    int p = __VERIFIER_nondet_int();
    if (p) {
        int i;
        for (i = 0; i < 1000000; i++);
        if(!(i >= 1000000)) {
            goto ERROR;
        }
    } else {
        int x = 5;
        int y = 6;
        int r = x * y;
        if(!(r >= x)) {
ERROR:
            goto ERROR;
        }
    }
    return 0;
}
