#include <stdio.h>

void swap (int *pi, int *py) {
  int tmp;

  tmp = *pi;
  *pi = *py;
  *py = tmp;


}

int main (){
  int a;
  int b;
  int result;
  printf("swap a : ");
  scanf("%d", &a);
  printf("swap b : ");
  scanf("%d", &b);
  result = swap(a, b);

  printf(result);

}
