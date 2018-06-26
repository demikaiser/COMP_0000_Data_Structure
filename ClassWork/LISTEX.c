#include <stdlib.h>
#include <stdio.h>

//making the structure
typedef int element;
typedef struct ListNode {
  element data;
  struct ListNode *link;
} ListNode;

//creating the node
ListNode *create_node(element data, ListNode *link){
  ListNode *new_node;
  new_node = (ListNode*)malloc(sizeof(ListNode));
  new_node->data = data;
  new_node->link = link;
  return new_node;
}

//inserting the node
void insert_node(ListNode **phead, ListNode *p, ListNode *new_node){
  if(*phead == NULL) {
    new_node->link = NULL;
    *phead = new_node;
  }
  else if(p == NULL) {
    new_node->link = *phead;
    *phead = new_node;
  }
  else {
    new_node->link = p->link;
    p->link = new_node;
  }
}
