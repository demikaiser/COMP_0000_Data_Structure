#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

typedef struct node {
  int data;
  struct node *next;
} Node;

 Node* create(int num){
  Node* new_node = (Node*)malloc(sizeof(Node*));
  new_node -> data = num;
  new_node -> next = NULL;
  return new_node;
}

void add_first(Node** head_p, int num){
  Node* tmp = create(num);
  tmp -> next = *head_p;
  *head_p = tmp;
}

void add_last(Node **tail_p, int num){
  Node * tmp = create(num);
  tmp -> next = *tail_p;
  *tail_p = tmp;
}

void insert(Node **head_p, Node **tail_p, int num){
  Node *p = head_p;
  Node *e = tail_p;

  Node *tmp = create(num);
  while (p-> next != NULL){
     if(p->next->data > num){
        break;
      }
    else {
      p = p-> next;
    }
  }
  if (p->data != num){
      tmp->next = p ->next;
    p->next = tmp;
  }
  else printf("Same number already included\n");
}


int main(){
  Node *head = NULL;
  Node *tail = NULL;
  Node *p = NULL;

  N
}
