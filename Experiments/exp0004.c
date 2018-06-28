#include <stdio.h>
#include <stdlib.h>

void print_array(int *a, size_t size) {
  int i;
  for (i = 0; i < size - 1; ++i) {
    printf("a[%d]: %d\n", i, a[i]);
  }
}

int main() {

  int *array;
  size_t size = 1;
  array = (int *)malloc(size * sizeof(int));

  int n;
  while (1) {
    scanf("%d", &n);
    if (-1 == n) {
      break;
    }
    array[size - 1] = n;
    array = (int *)realloc((void *) array, size + 1);
    ++size;
  }

  print_array(array, size);
  free(array);

  return 0;
}
