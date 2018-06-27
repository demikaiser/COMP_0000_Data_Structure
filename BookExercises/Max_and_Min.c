#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int Searching_Max(int* a, int n) {
  int max;
  int i;
  for(i = 0; i < n; i++) {
    if(max < a[i]) {
      max = a[i];
    }
  }
  printf("Max Number in this array: %d\n", max);
}

int Searching_Min(int* a, int n) {
  int min;
  int i;
  for(i = 0; i < n; i++) {
      if(min > a[i]) {
        min = a[i];
      }
  }
  printf("Min Number in this array: %d\n", min);
}

int Length(int *a) {
  int n = 0;
  for(a; a != NULL; a++) {
    n = n +1;
  }
  return n;
  printf("%d\n", n);
}

int main() {
  int i;
  int a[5] = {1, 2, 3, 4, 5};

}
