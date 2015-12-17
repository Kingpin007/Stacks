#include <stdio.h>
char a[100];
int top=-1; //Empty stack

void push(char);
char pop();
char Top();
int isEmpty();
void display()
{
  if(isEmpty())
    return; //empty stack
  printf("\n%c<-",a[top]);
  int i=top-1;
  for(;i>=0;i--)
    printf("\n%c",a[i]);
}
void reverse();
int main()
{
  push('h');display();printf("\n\n");
  push('e');display();printf("\n\n");
  push('l');display();printf("\n\n");
  reverse();printf("\n\nAfter reversal: \n\n");display();
  pop();display();
  printf("\n\ntop is: %c\n",Top());display();
  pop();display();
  pop();display();
  return 0;
}

void push(char x)
{
  if(top>=99)
  {
    printf("Error! Cannot Insert More Elements, Stack is full!\n");
    return;
  }
  top++;
  a[top]=x;
}

char pop()
{
  top--;
  return a[top+1];
}

char Top()
{
  return a[top];
}

int isEmpty()
{
  return (top==-1?1:0);
}
void reverse()
{
  char t[100];
  int i,j;
  for(i=top,j=0;i>=0;i--,j++)
  {
    t[j] = a[i];
  }
  for(i=top;i>=0;i--)
  {
    a[i] = t[i];
  }
}
