#include<iostream>

using namespace std; 

int main()
{
   char op;
   int a,b;
   cout<<"enter the number:";
   cin>>a>>b;
   cout<<"Enter the operator(+,-,*,/)";
   cin>>op;
if(op=='+')
    {cout<<a<<"+"<<b<<"="<<(a+b);}
   else if(op=='-')
{cout<<a<<"-"<<b<<"="<<(a-b);}
 else if(op=='*')
   {cout<<a<<"*"<<b<<"="<<(a*b);}
else if(op=='/')
{cout<<a<<"/"<<b<<"="<<(a/b);}
else
{cout<<"invalid";}

   return 0;

}