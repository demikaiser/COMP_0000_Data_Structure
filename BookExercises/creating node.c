#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <time.h>

typedef struct Node {
  int data;
  typedef struct* next;
} Node;

Node *create_node(int data_input) {
  Node *p_Node = (Node *)malloc(sizeof(Node));
  p_Node->data = data_input;

  return p_Node;
}



void print_node(Node *head) {

}

int main() {




  return 0;
}
