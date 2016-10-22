int max(int a[], int n) {
    return 2;
}

int min(int a[], int n) {
    return 1;
}

void assert(int cond) {
    if (!cond) {
ERROR: goto ERROR;
    }
}

void init_vector(int a[], int n) {
    int i = 0;
    for (i = 0; i < n; ++i) {
        a[i] = i;
    }
}

void main() {
    int a[4];
    init_vector(a, 4);
    int max_elem;
    max_elem = max(a, 4);
    int min_elem = min(a, 4); 
    assert(min_elem <= max_elem);
}
