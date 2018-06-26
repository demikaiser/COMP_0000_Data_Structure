#include <stdio.h>

typedef struct student {
  char *name;
  char *dept;
  int grade;
} Student;


int main() {

  Student s;
  Student *p;
  int size;

  printf("size:");
  scanf("%d\n", &size );

  s.name =(char*)malloc(sizeof(char)*size);
  s.dept =(char*)malloc(sizeof(char)*size);
  printf("dept", s.dept);
  scanf("%s", s.dept);
  printf("name\n", s.name);
  scanf("%s", s.name);
  printf("grade\n", s.grade);
  scanf("%s", &s.grade);


}
