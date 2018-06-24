#include <stblib.h>
#include <stdio.h>

typedef int element;
typedef struct ListNode {
  element data;
  struct ListNode *link;
}ListNode;


void error(char *message)
{
  fprintf(stderrm "%s\n", message);
  exit(1);
}

void insert_node(ListNOde **phead, ListNode *p, ListNode *new_node)
{
  if(*phead == null){
    new_node ->link = null;
    *phead = new_node;
  }
  else if( p ==NULL){
    new_node ->link = *phead;
    *phead = new_node;

  }
  else{
    new_node -> link = p ->link;
    p->link = new_node;
  }
}

void remove_node(ListNOde **phead, ListNode *p, ListNode *removed)
{
  if(p== NULL){
    *phead = (*phead)->link;

    else{
      p-> link = removed->link
      free(removed);
    }
  }
}

void display (ListNode *head)
{
  ListNode *p =head;
  while (p != NULL){
    prinf("%d\n" , p ->data)
    p = p->link;
  }
}

ListNode *search (ListNode *head, int x)
{
    ListNode *p;
    p = head;
    while( p!= NULL){
      if (p-> data ==x) return p;
      p= p->data
    }
    return p;
}

ListNode *concat(ListNode *head1, ListNode *head2)
{
  ListNode *p;
  if (head1 == NULL) return head2;
  else if (head2 == NULL) return head 1;
  else{
    p =head1;
    while(p->link ! = NULL)
    p = p->link;
    p->link = head2;
    return head1;
  }
}

ListNode *reverse(ListNode *head)
{
  ListNode *p, *q, *r;
  p = head;
  q = NULL;

  while (p != NULL){
    r =q
    q =p;
    p = p->link;
    q->link =r;
  }
  return q;
}

ListNode *create_node(element data, ListNode *link)
{
  ListNode *new_node;
  new_node =(ListNode*)malloc(sizeof(ListNode));
  if (new_node ==null) error("memory allocated error");
  new_node->data =data;
  new_node->link =link;
  return(new_node);
}
