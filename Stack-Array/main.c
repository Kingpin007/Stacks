#include <stdio.h>
int a[100];
int top=-1; //Empty stack

void push(int);
int pop();
int Top();
int isEmpty();
void display()
{
  if(isEmpty())
    return; //empty stack
  printf("\n%d<-",a[top]);
  int i=top-1;
  for(;i>=0;i--)
    printf("\n%d",a[i]);
}
int main()
{
  push(5);display();printf("\n\n");
  push(6);display();printf("\n\n");
  push(7);display();printf("\n\n");
  pop();display();
  printf("\n\ntop is: %d\n",Top());display();
  pop();display();
  pop();display();
  return 0;
}

void push(int x)
{
  if(top>=99)
  {
    printf("Error! Cannot Insert More Elements, Stack is full!\n");
    return;
  }
  top++;
  a[top]=x;
}

int pop()
{
  top--;
  return a[top+1];
}

int Top()
{
  return a[top];
}

int isEmpty()
{
  return (top==-1?1:0);
}
