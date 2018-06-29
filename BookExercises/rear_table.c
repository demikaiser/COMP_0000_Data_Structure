#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <time.h>

typedef struct element {
  int row;
  int col;
  int value;
} element;

int main() {
  int a[3][3] = {{2, 3, 0},
                 {8, 9, 1},
                 {7, 0, 5}};

  int c[7][3];
  int i, j, k = 0;

  for (i = 0; i < 3; ++i) {
    for (j = 0; j < 3; ++j) {
      if (0 != a[i][j]) {
        c[k][0] = i;
        c[k][1] = j;
        c[k][2] = a[i][j];
        ++k;
      }
    }
  }

  for (i = 0; i < 7; ++i) {
    for (j = 0; j < 3; ++j) {
      printf("%d\t", c[i][j]);
    }
    printf("\n");
  }

  // int b[6][6] = {{0, 0, 0, 7, 0, 0},
  //                {9, 0, 0, 0, 0, 8},
  //                {0, 0, 0, 0, 0, 0},
  //                {6, 5, 0, 0, 0, 0},
  //                {0, 0, 0, 0, 0, 1},
  //                {0, 0, 2, 0, 0, 0}};
  //

  return 0;
}
