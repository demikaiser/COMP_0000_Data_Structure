#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

typedef struct StackNode {
  int item;
  struct StackNode *link;
} StackNode;

typedef struct {
  StackNode *top;
} LinkedStackType;

void init(LinkedStackType *s) {
  s->top == NULL;
}

int is_empty(LinkedStackType *s) {

  return (s->top == NULL);
}

void push(LinkedStackType *s, int item) {
  StackNode *tmp = (StackNode*)malloc(sizeof(StackNode));
  tmp->item = item;  
  tmp->link = s->top;
  s->top = tmp;
}

int pop(LinkedStackType *s) {

}

int main() {

  return 0;
}
