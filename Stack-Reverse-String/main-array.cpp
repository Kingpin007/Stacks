#include <iostream>
#include <stack>
#include <cstdio>
#include <cstring>

using namespace std;

void reverse(char *c,int n)
{
  stack<char> s;
  for(int i=0;i<n;i++)
    s.push(c[i]);
  for(int i=0;i<n;i++)
  {
    c[i] = s.top();
    s.pop();
  }
}

int main()
{
  printf("Enter a String: ");
  char c[51];
  gets(c);
  reverse(c,strlen(c));
  printf("The reversed string is: %s",c);
}
