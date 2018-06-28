#include <stdio.h>

int main() {

  int a[5];

  int i;
  int n;
  for (i = 0; i < 5; ++i) {
    scanf("%d", &n);
    a[i] = n;
  }

  for (i = 0; i < 5; ++i) {
    printf("a[%d]: %d\n", i, a[i]);
  }

  return 0;
}
