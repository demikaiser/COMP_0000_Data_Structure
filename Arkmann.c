#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Recursive_Ackerman
int R_A(int m, int n ){
  if (m==0){
    return n+1;
  }
  else if (n==0){
    return R_A(m-1,1);
  }
  else {
    return R_A(m-1,R_A(m,n-1));
  }
}

//NonRecursive_Ackerman
int NonR_A(int m, int n){
    while(1){
      if (m ==0){
      }
    }
}
main() {
  int m, n, result;

  printf("M:");
  scanf("%d", &m);
  printf("N:");
  scanf("%d", &n);
  result = R_A(m,n);
  printf("(%d,%d) = %d \n",m, n, result);

}
