#ifndef QUEUE_H
#define QUEUE_H
#include<iostream>
using namespace std;

class Queue
{
   public:
       int q[100], n = 100, front = - 1, rear = - 1;
       void enqueue(int val) {

   if (rear == n - 1)
   cout<<"Queue Overflow"<<endl;
   else {
      if (front == - 1)
      front = 0;

      rear++;
      q[rear] = val;
   }
}
void dequeue()
{
   if (front == - 1 || front > rear) {
      cout<<"Queue Underflow ";
      return ;
   } else {
      cout<<"Element deleted from queue is : "<< q[front] <<endl;
      front++;;
   }
}
void peek()
{
    if(front!=-1)
        cout<<"Top Element of the Queue is<<"<<q[front]<<endl;
    else
        cout<<"Queue is empty"<<endl;

}
void isEmpty()
{
    if(front!=-1)
        cout<<"Queue is empty"<<endl;
    else
        cout<<"Queue is empty"<<endl;

}
};

#endif // QUEUE_H
