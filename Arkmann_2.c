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
  int table[5][5000];
  int i, j;
  for (i =0; i <= m; i++){
    for(j=0; j <5000; j++){
    if(i==0){
      table[i][j] = j+1;
    }
    else if(j==0) {
      table[i][j] = table[i-1][1];
    }
    else{
      table[i][j] = table[i-1][table[i][j-1]];
    }
  }
  }

  return table[m][n];
}
main() {
  int m, n, result;
  clock_t start, finish;

  printf("M:");
  scanf("%d", &m);
  printf("N:");
  scanf("%d", &n);
  result = R_A(m,n);
  printf("(%d,%d) = %d \n",m, n, result);



  printf("M:");
  scanf("%d", &m);
  printf("N:");
  scanf("%d", &n);
  result = NonR_A(m,n);
  printf("(%d,%d) = %d \n",m, n, result);

}
