#include <stdio.h>
#include <stdlib.h>
#define MAX_DEGREE 101
#define MAX(a,b) (((a)>(b))?(a):(b))
#define NELEMS(x) (sizeof(x) / sizeof((x)[0]))

typedef struct {
  int degree;
  int coef[MAX_DEGREE];
} polynomial;

polynomial Polynomial;

polynomial poly_add(polynomial A, polynomial B){

  polynomial C;
  int Apos = 0, Bpos = 0, Cpos = 0;
  int degree_a = A.degree;
  int degree_b = B.degree;
  C.degree = MAX(A.degree, B.degree);

  while((Apos <= A.degree) && (Bpos <= B.degree)) {
    if(degree_a > degree_b) {
      C.coef[Cpos++] = A.coef[Apos++];
      degree_a--;
    }
    else if(degree_a == degree_b) {
      C.coef[Cpos++] = A.coef[Apos++] + B.coef[Bpos++];
      degree_a--;
      degree_b--;
    }
    else {
      C.coef[Cpos++] = B.coef[Bpos++];
      degree_b--;
    }
  }

  return C;
}

polynomial poly_sub(polynomial A, polynomial B) {

  polynomial C;
  int Apos = 0, Bpos = 0, Cpos = 0;
  int degree_a = A.degree; // 5
  int degree_b = B.degree; // 4
  C.degree = MAX(A.degree, B.degree); // 5

  while((Apos <= A.degree) && (Bpos <= B.degree)) {
    if(degree_a > degree_b){
      C.coef[Cpos++] = A.coef[Apos++];
      degree_a--;
    }
    else if(degree_a == degree_b) {
      C.coef[Cpos++] = A.coef[Apos++] - B.coef[Bpos++];
      degree_a--;
      degree_b--;
    }
    else {
      C.coef[Cpos++] = B.coef[Bpos++];
      degree_b--;
    }
  }

  return C;
}

int main() {
  int i = 0;
  polynomial a = {5, {3, 6, 0, 0, 0, 10}};
  polynomial b = {4,    {7, 0, 5, 0,  1}};
  polynomial c;
  polynomial d;

  c = poly_add(a,b);
  printf("poly_add - Degree: %d\n", c.degree);
  for(i = 0; i < 6; i++){
    printf("%d\n", c.coef[i]);
  }

  d = poly_sub(a,b);
  printf("poly_sub - Degree: %d\n", d.degree);
  for(i = 0; i < 6; i++){
    printf("%d\n", d.coef[i]);
  }
}
