#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Recursive_Ackerman
int R_A(int m, int n) {
  if (m == 0) {
    return n + 1;
  }
  else if (n == 0) {
    return R_A(m-1, 1);
  }
  else {
    return R_A(m-1, R_A(m, n-1));
  }
}

//NonRecursive_Ackerman
int NonR_A(int m, int n) {
  int *value = NULL;
  size_t size = 0;

  while (size >= 0) {
    if (m == 0) {
      n++;
      if (size-- == 0) { break; }
      m = value[size];
      continue;
    }

    if (n == 0) {
      m--;
      n = 1;
      continue;
    }

    size_t index = size++;
    if ((size & index) == 0) {
      void *temp = realloc(value, (2 * size + 1) * sizeof *value);
      value = temp;
    }
    value[index] = m - 1;
    n--;
  }

  free(value);
  return n;
}

int main() {
  int m, n, result;

  printf("M:");
  scanf("%d", &m);
  printf("N:");
  scanf("%d", &n);
  result = R_A(m,n);
  printf("R_A(%d,%d) = %d \n",m, n, result);

  result = NonR_A(m,n);
  printf("Non R_A(%d,%d) = %d \n",m, n, result);

  return 0;
}
