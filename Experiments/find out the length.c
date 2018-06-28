#include <stdio.h>

int Length(int a[]) {
  // int n = 0;
  // for(a; a != NULL; a++) {
  //   n = n + 1;
  // }
  // printf("%d\n", n);
  // return n;
  int n = sizeof(a)/sizeof(a[0]);

  printf("a: %d\n", sizeof(a));
  printf("a[0]: %d\n", sizeof(a[0]));
  printf("Length: %d\n", n);
  return n;
}

int main() {

  int a[] = {1, 2, 3, 4, 5};

  printf("%d\n", sizeof(a)/sizeof(a[0]));

  return 0;
}
