#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//recursive fatorial
int re_factorial(int n){
  if(n == 0){
    return 1;
  }
  else if(n >= 1){
    return n*re_factorial(n-1);
  }
}

//non-recursive factorial
int Nonre_factorial(int n){
  int i,f = 1;

  if (n <= 1){
    return 1;
  }
  else{
    for(i = n; i > 0; i--){
      f= f*i;
      return f;
    }
  }
}

int main(){
  clock_t start, finish;
  double duration;
  start = clock();

  int n;
  int result;

  printf("N:" );
  scanf("%d", &n);
  result = re_factorial(n);  //recursive funtion duration
  printf("%d \n", result);

  finish = clock();
  duration = (double)(finish - start);
  printf("%f sec \n", duration);

  start = clock();
  printf("N:" );
  scanf("%d", &n);
  result = Nonre_factorial(n);  //non-recursive function duration
  printf("%d \n", result);
  finish = clock();
  duration = (double)(finish - start);
  printf("%f sec \n", duration);

}
