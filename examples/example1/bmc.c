int __VERIFIER_nondet_int();
int min(int a[], int n) {
    int res = a[0];
    for (int i=0;i<n;++i)
      if (a[i] < res) res = a[i];
    return res;
}
void assert(int cond);
void init_vector(int a[], int n) {
    int i = 0;
    for (i = 0; i < n; ++i) {
        a[i] = __VERIFIER_nondet_int();
    }
}
// test_min
void main(int large) {
    int n;
    if (large) {
	n = 20;
    } else {
	n = 1;
    }
    int a[20];
    init_vector(a, n);
    int min_elem = min(a, n); 
    assert(min_elem <= a[0]);
}
void assert(int cond) {
    if (!cond) {
ERROR: goto ERROR;
    }
}
