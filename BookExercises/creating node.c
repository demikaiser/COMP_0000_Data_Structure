#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <time.h>

typedef struct Node {
  int data;
  struct Node *link;
} Node;

Node *create_node(int data_input) {
  Node *p_Node = (Node *)malloc(sizeof(Node));
  p_Node->data = data_input;

  return p_Node;
}

void insert_node(Node **head, Node *p, Node *new_node) {
  if(*head == NULL ) {
    new_node->link = NULL;
    *head = new_node;
  }

  else if(p == NULL) {
    new_node->link = *head;
    *head = new_node;
  }

  else {
    new_node->link = p->link;
    p->link = new_node;
  }
}

void remove_node(Node **head, Node *p, Node *removed_node) {
  if (p == NULL) {
    *head = (*head)->link;
  }

  else {
    p->link = removed_node->link;

  }
}

void display(Node *head) {
  Node *p = head;
  while (p != NULL){
    printf("%d->", p->data);
    p = p->link;
  }
  printf("\n");
}

int main() {
  Node *list1 = NULL;
  Node *list2 = NULL;
  Node *p;

  insert_node(&list1, NULL, create_node(10));
  display(list1);
  insert_node(&list1, NULL, create_node(20));
  display(list1);
  insert_node(&list1, NULL, create_node(30));
  p = create_node(14);
  insert_node(&list1, NULL, p);
  display(list1);
  Node *t = create_node(50);
  insert_node(&list1, p, t);
  display(list1);
  remove_node(&list1, p, t);
  display(list1);


  return 0;
}
