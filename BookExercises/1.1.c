#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main() {
  int i, tmp;
  clock_t finish, start;
  double duration;

  start = clock();
  int score[5] = {10, 22, 100, 23, 42};

  tmp = score[0];
  for(i = 0; i < 5; i++) {
    if(score[i] > tmp) {
      tmp = score[i];
    }
  }
  finish = clock();
  duration = (double)(finish - start);
  printf("%d\n", tmp);
  printf("%f\n", duration);
}
