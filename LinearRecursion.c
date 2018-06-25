#include <stdio.h>
#include <time.h>
#include <stdlib.h>

//Recursive fuction in linear recursion
int R_L_R(int base, int exp){
  if(exp ==0){
    return 1;
  }
  else if(exp%2 == 0){ //base == even
    return R_L_R(base*base, exp/2);
  }
  else if(exp%2 != 0){//base == odd
    return base*R_L_R(base*base, (exp-1)/2);
  }

}

//Non_Recursive function in linear recursion
int NR_L_R(int base, int exp){
  int i;
  int f = 1;

  for(i=0; i<exp; i++){
    f= base*f;
    return f;
  }
}

int main(){
  clock_t start, finish;
  double duration;
  int result;
  int base;
  int exp;

  start = clock();

  printf("base:");
  scanf("%d", &base);
  printf("exp:");
  scanf("%d", &exp);
  result = R_L_R(base, exp); //Recursive
  printf("%d\n", result);

  finish = clock();
  duration = (double)(finish -start);
  printf("duration: %f \n", duration);

  start = clock();

  printf("base:");
  scanf("%d", &base);
  printf("exp:");
  scanf("%d", &exp);
  result = NR_L_R(base, exp); //Non_Recursive
  printf("%d\n", result);

  finish = clock();
  duration = (double)(finish -start);
  printf("duration: %f \n", duration);
}
