#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int R_fib(int n){
  if (n==0){
    return 0;
  }
  else if (n==1){
    return 1;
  }
  else{
    return R_fib(n-1) + R_fib(n-2);
  }
}

int NR_fib(int n){
  int last, tmp, i;
  int current =1;

  if (n < 2) return n;
  else{
    for(i=2; i<=n; i++){
      tmp = current;
      current += last;
      last = tmp;
    }
    return current;
  }

}

int main(){
  int n, result;

  printf("N:");
  scanf("%d", &n);
  result = R_fib(n);
  printf("%d\n", result);

  printf("N:");
  scanf("%d", &n);
  result = NR_fib(n);
  printf("%d\n", result);

}
