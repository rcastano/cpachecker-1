int __VERIFIER_nondet_int();
int main() {
    int x = 1;
    while(1) {
LOOP_HEAD:
        x = __VERIFIER_nondet_int();
        if (!x) goto while_break;
        if (x == 1000000) {
            break;
        }
        continue;

while_break:
        break;
    } 

    return 0;
}
