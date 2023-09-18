#ifndef STACK_H
#define STACK_H
#include<iostream>
using namespace std;

class Stack
{
public:
  int top=-1,n=100;
  int stck[100];
  int val;

       void push(int val)
       {
   if(top>=n-1)
   cout<<"Stack Overflow"<<endl;
   else
    {
      top++;
      stck[top]=val;
     }
}
void pop()
{
   if(top<=-1)
   cout<<"Stack Underflow"<<endl;
   else
    {
      cout<<"The popped element is :"<< stck[top] <<endl;
      top--;
     }
}
void isEmpty()
{
   if(top==-1)
    {
      cout<<"Stack is empty"<<endl;
    }
   else
   cout<<"Stack is not empty"<<endl;
}
void peek()
 {

     if(top<n)
        cout<<"Top Element of the stack is:" <<stck[top]<<endl;
      else
        cout<<"Stack is empty"<<endl;
 }

};


#endif // STACK_H
