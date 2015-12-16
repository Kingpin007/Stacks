#include <stdio.h>

struct Node
{
  int data;
  struct Node *next;
};
struct Node *head;

void push(int);
int pop();
int Top();
int isEmpty();
void print();

int main()
{
  head = NULL;  //Empty Stack
  push(5);print();
  push(7);print();
  push(8);print();
  push(9);print();
  pop();print();
  pop();print();
  printf("\nTop is : %d\n",Top());
  pop();print();
  push(7);print();
}

void push(int data)
{
  struct Node *t1 = (struct Node*)malloc(sizeof(struct Node));
  t1->data=data;
  t1->next=NULL;
    t1->next=head;
    head=t1;
    return;
}

int pop()
{
  struct Node *t1 = head;
  head = head->next;
  int x = t1->data;
  free(t1);
  return x;
}

int Top()
{
  return head->data;
}

int isEmpty()
{
  return (head==NULL?1:0);
}

void print()
{
  if(head == NULL)
  {
    printf("\n\nThe Stack is Empty!\n\n");
    return;
  }
  struct Node *t = head;
  printf("\n%d<-",t->data);
  while(t->next!=NULL)
  {
    t = t->next;
    printf("\n%d",t->data);
  }
  printf("\n\n");
}
