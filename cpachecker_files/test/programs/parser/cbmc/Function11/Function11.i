# 1 "Function11/main.c"
# 1 "<eingebaut>"
# 1 "<Kommandozeile>"
# 1 "Function11/main.c"
struct s {
  int f;
} g;

void f(int *pp)
{
  int *p3=pp;
  assert(p3==&g.f);
}

int main()
{
  void *p1=&g;
  struct s *p2=(struct s *)p1;
  f(&(p2->f));
}
