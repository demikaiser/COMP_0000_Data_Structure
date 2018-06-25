#include <stdlib.h>
#include <stdio.h>

//making the structure
typedef int element;
typedef struct ListNode {
  element data;
  struct ListNode *link;
} ListNode;

//error detection
void error(char *message)
{
  fprintf(stderr, "%s\n", message );
  exit(1);
}

//inserting the node
void insert_node(ListNode **phead, ListNode *p, ListNode *new_node)
{
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

//removing the node
void remove_node(ListNode **phead, ListNode *p, ListNode *removed)
{
  if(p == NULL){
    *phead = (*phead)->link;
  }
  else {
    p->link = removed->link;
  }
  free(removed);
}

//show all the node in the liked-list
void display(ListNode *head)
{
  ListNode *p = head;
  while (p != NULL){
    printf("%d->", p->data);
    p = p->link;
  }
  printf("\n");
}

//searching node in the linked-list
ListNode *search (ListNode *head, int x)
{
    ListNode *p;
    p = head;
    while(p!= NULL){
      if (p->data == x) {
        return p;
      }
      p = p->link;
    }
    return p;
}

//merging two diffent lists
ListNode *concat(ListNode *head1, ListNode *head2)
{
  ListNode *p;
  if (head1 == NULL) {
    return head2;
  }
  else if (head2 == NULL) {
    return head1;
  }
  else {
    p = head1;
    while(p->link != NULL) {
      p = p->link;
    }
    p->link = head2;
    return head1;
  }
}

//reversing the list
ListNode *reverse(ListNode *head)
{
  ListNode *p, *q, *r;
  p = head;
  q = NULL;

  while (p != NULL) {
    r = q;
    q = p;
    p = p->link;
    q->link = r;
  }
  return q;
}

//creating the node
ListNode *create_node(element data, ListNode *link)
{
  ListNode *new_node;
  new_node = (ListNode*)malloc(sizeof(ListNode));
  if (new_node == NULL) error("memory allocated error");
  new_node->data = data;
  new_node->link = link;
  return new_node;
}

//where the program begin
int main()
{
  ListNode *list1 = NULL, *list2 = NULL;
  ListNode *p;

  //insert 50->40->30->20->10
  insert_node(&list1, NULL, create_node(10, NULL));
  insert_node(&list1, NULL, create_node(20, NULL));
  p = create_node(30, NULL);
  insert_node(&list1, NULL, p);
  insert_node(&list1, NULL, create_node(40, NULL));
  ListNode *t = create_node(50, NULL);
  insert_node(&list1, p, t);

  display(list1); //40->30->(50)->20->10

  insert_node(&list2, NULL, create_node(50, NULL));
  insert_node(&list2, NULL, create_node(60, NULL));
  insert_node(&list2, NULL, create_node(70, NULL));
  insert_node(&list2, NULL, create_node(80, NULL));
  insert_node(&list2, NULL, create_node(90, NULL));

  remove_node(&list2, NULL, list2);
  display(list2); //80->70->60->50

  list1 = concat(list1, list2);
  display(list1); //40->30->(50)->20->10->80->70->60->50

  list1 = reverse(list1);
  display(list1); //50->60->70->80->10->20->30->40

  p = search(list1, 40);
  printf("%d\n", p->data);

  return 0;
}
//40
