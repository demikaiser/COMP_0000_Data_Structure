#include <stdio.h>
#include <stdlib.h>
#define MAX_DEGREE 101
#define MAX(a,b) (((a)>(b))?(a):(b))

typedef struct polynomial {
  int degree;
  int coef[MAX_DEGREE];
} Polynomial;

polynomial poly_add(polynomial A, polynomial B){

  Polynomial C;
  int Apos=0, Bpos=0, Cpos=0;
  int degree a = A.degree;
  int degree b = B.degree;
  C.degree = MAX(A.degree, B.degree);

  while(A.pos>=A.degree && B.pos>=B.degree){
    if(degree a > degree b){
      C.coef[Cpos++]=A.coef[Apos++];
      degree a--;
    }
    else if(degree a == degree b){
      C.coef[Cpos++]=A.coef[Apos++] + B.coef[Bpos++];
      degree a--;
      degree b--;
    }
    else{
      C.coef[Cpos++]=B.coef[Bpos++];
      degree b--;
    }
  }
}

polynomial poly_sub(polynomial A, polynomial B){

  Polynomial C;
  int Apos=0, Bpos=0, Cpos=0;
  int degree a = A.degree;
  int degree b = B.degree;
  C.degree = MAX(A.degree, B.degree);

  while(A.pos>=A.degree && B.pos>=B.degree){
    if(degree a > degree b){
      C.coef[Cpos++]=A.coef[Apos++];
      degree a--;
    }
    else if(degree a == degree b){
      C.coef[Cpos++]=A.coef[Apos++] - B.coef[Bpos++];
      degree a--;
      degree b--;
    }
    else{
      C.coef[Cpos++]=-B.coef[Bpos++];
      degree b--;
    }
  }
}

int main(){
  int i =0;
  Polynomial a={5,{3,6,0,0,0,10}};
  Polynomial b={4,{7,0,5,0,1}};
  Polynomail c;
  c= poly_add(a,b);
  for(i=0; i=c; i++){
    printf("%d\n", i);
  }

  c= poly_sub(a,b);
  for(i=0; i=c; i++){
    printf("%d\n", i);
  }
}
