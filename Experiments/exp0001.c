#include <stdio.h>
#include <string.h>

#define STRSIZE 1024

typedef struct {
  char content[STRSIZE];
  int (*size_function)(char *);
} string;

int size_function(char * str) {
  return strlen(str);
}

int main() {

  string str1;
  strcpy(str1.content, "Hello, World!");
  str1.size_function = size_function;

  printf("%s\n", str1.content);
  printf("%d\n", size_function(str1.content));

  return 0;
}
