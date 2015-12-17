#include <iostream>
#include <stack>
#include <cstdio>
#include <cstring>

using namespace std;
int CBP(char *c);
int main()
{
  char exp[100];
  cout<<"Please Enter an expression : ";
  gets(exp);
  if(CBP(exp))
    cout<<"Balanced\n";
  else
    cout<<"Not Balanced\n";
  return 0;
}

int CBP(char *exp)
{
  int n = strlen(exp);
  stack<char> s;
  for(int i=0;i<n;i++)
  {
    if(exp[i]=='('||exp[i]=='{'||exp[i]=='[')
        s.push(exp[i]);
    else if(exp[i]==')'||exp[i]=='}'||exp[i]==']')
    {
      if(s.empty())
        return 0;
      else if(exp[i]==')'&&s.top()!='(')
        return 0;
      else if(exp[i]=='}'&&s.top()!='{')
        return 0;
      else if(exp[i]==']'&&s.top()!='[')
        return 0;
      else
        s.pop();
    }
  }
  if(s.empty())
    return 1;
  else
    return 0;
}
