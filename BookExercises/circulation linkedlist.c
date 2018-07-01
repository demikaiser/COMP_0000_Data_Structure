#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <time.h>

typedef struct Node {
  int data;
  struct *link;
} Node;

Node create_node(int data_input){
  Node *p_Node = (Node*)malloc(sizeof(Node));
  p_Node->data;= data_input;

  return p_Node;
}

void insert_node(Node **head, Node *p, Node *new_node) {
  

}

void remove_node(Node **head, Node *p, Node *new_node) {


}

void display(Node *p) {

}

int main() {

}
