#include <stdio.h>
#include <time.h>
#include <stdlib.h>

//find out the max number in the array
void Searching_Max(int* a, int n) {
  int max = a[0];
  int i;
  for(i = 0; i < n; i++) {
    if(max < *(a + i)) {
      max = *(a + i);
    }
  }
  printf("Max Number in this array: %d\n", max);
}

//find out the min number in the array
void Searching_Min(int* a, int n) {
  int min = a[0];
  int i;
  for(i = 0; i < n; i++) {
      if(min > *(a+i)) {
        min = *(a+i);
      }
  }
  printf("Min Number in this array: %d\n", min);
}

//in order to get the length of the array
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
  int i;
  int result;
  clock_t start, finish;
  double duration;

  //experiment 1
  start = clock();
  int a[5] = {1, 2, 3, 4, 5};
  Searching_Max(a, sizeof(a)/sizeof(a[0]));
  finish = clock();
  duration = (double)(finish - start);
  printf("%f\n", duration);


  //experiment 2
  start = clock();
  for(i = 0; i < 5; i++){
    if(result < a[i]){
      result = a[i];
    }
  }
  finish = clock();
  duration = (double)(finish - start);
  printf("Max Number in this array: %d\n", result);
  printf("%f\n", duration);
  sleep(); // why do i have to put sleep in order to operate function min

  Searching_Min(a,5);


}
