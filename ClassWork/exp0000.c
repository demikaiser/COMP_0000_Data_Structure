#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <time.h>


void reverseArray(int a_count, int* a){
  int i;

  for(i = a_count - 1; i >= 0; i--) {
    printf("%d\n", a[i]);
  }
}

int main() {
  int a[2] = {};
  int i;
  //a = (a)malloc(sizeof(a));
  scanf("%d", a);
  (double)printf("%x\n", a);
  scanf("%d", a);
  (double)printf("%x\n", a);
  scanf("%d", a);
  (double)printf("%x\n", a);

  reverseArray(3, a);

  return 0;

}
