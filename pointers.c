#include <stdio.h>
#include <unistd.h>

int main() {

  struct {
    int i;
    float f;
  } s, *ps;

  /* Assign the Address of Struct */
  printf("ps before: %x\n", ps);
  ps = &s;
  printf("ps after: %x\n", ps);

  ps->i = 1;
  ps->f = 1.01;

  /* Access a Value in Struct */
  printf("i: %d\n", s.i);
  printf("i: %d\n", ps->i);
  printf("i: %d\n", (*ps).i);

  /* Dereferencing */
  int number, *p_number;
  number = 3;
  p_number = &number;
  printf("number: %d\n", *p_number);

  return 0;
}
