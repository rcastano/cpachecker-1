int main() {
  unsigned int x1 = 0, x2 = 0;
  int s = 1;
  while
  (nondet()) {
    if (s == 1) x1++;
    else if (s == 2) x2++;
    s++;
    if (s == 5) s = 1;
    if ((s == 1) && (x1 != x2)) {
      // Valid safety property
      ERROR:
      return 1;
    }
  }
}
