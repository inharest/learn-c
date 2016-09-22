#include <stdio.h>
#include <stdlib.h>

struct S
{
  int a;
  char b;
  double c;
}s, *sp;

// typedef struct {
//   int a;
//   char b;
//   double c;
// } TS;
typedef struct S TS;


void print(int a, char b, double c)
{
  // printf("%d\n", a);
  // printf("%c\n", b);
  // printf("%f\n", c);
  printf("%d %c %f\n", a, b, c);
}

int main()
{
  s.a = 1;
  s.b = 'a';
  s.c = 1.01;
  print(s.a, s.b, s.c);

  sp = (struct S*)malloc(sizeof(struct S));
  sp->a = 2;
  sp->b = 'b';
  sp->c = 2.01;
  print(sp->a, sp->b, sp->c);

  struct S ss;
  ss.a = 3;
  ss.b = 'c';
  ss.c = 3.03;
  print(ss.a, ss.b, ss.c);

  TS ts;
  ts.a = 4;
  ts.b = 'd';
  ts.c = 4.04;
  print(ts.a, ts.b, ts.c);

  TS* tsp = (TS*)malloc(sizeof(TS));
  ts.a = 5;
  ts.b = 'e';
  ts.c = 5.05;
  print(ts.a, ts.b, ts.c);

  return 0;
}
