#include <stdio.h>
#include <stdlib.h>
#include <time.h>


//adding two different lists
void add_list(int* a, int* b) {
  int i;
  int result = 0;
  for(i = 0; i < 3; ++i) {
    result = a[i] + b[i];
    printf("%d", result);
  }
  printf("\n");
}

//subtracting two different lists
void sub_list(int* a, int* b) {
  int i;
  int result;
  for(i = 0; i <3; ++i) {
    result = a[i] - b[i];
    printf("%d", result);
  }
  printf("\n");
}

int main() {
  int a[3] = {1, 2, 3};
  int b[3] = {3, 4, 5};
  add_list(a, b);
  sub_list(a, b);
  return 0;
}
