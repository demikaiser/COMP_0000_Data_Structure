#include <stdio.h>

int main() {

  int a[3] = {0, 1, 2};

  int *p_a;
  p_a = a;

  printf("%d\n", *a);

  return 0;
}
