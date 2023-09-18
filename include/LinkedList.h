#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include<bits/stdc++.h>
using namespace std;
class Nd
{
  public:
       Nd *next;
       int val;
       Nd(int val)
       {
           next=NULL;
           this->val=val;
       }
};


class LinkedList
{
    Nd *head=NULL;
    public:
       void insertAtHead(int val)
        {
            Nd *newnd=new Nd(val);
            if(head==NULL)
            {
                head=newnd;
            }
            else
            {
                newnd->next=head;
                head=newnd;
            }
        }
           void insertAtTail(int val)
        {
            Nd *newnd=new Nd(val);
            if(head==NULL)
            {
                head=newnd;
            }
            else
              {
                Nd *temp=head;
                while(temp->next!=NULL)
                     temp=temp->next;
               temp->next=newnd;
            }
        }
         void print(Nd *head)
          {

              while(head!=NULL)
              {
              cout<<head->val<<"->";
              head=head->next;
              }
              cout<<"NULL";
              cout<<endl;
          }
       void  insert(string s)
        {
            cout<<"Enter value to insert: ";
            int val;
            cin>>val;
            if(s=="beg")
                 insertAtHead(val);
            else
                insertAtTail(val);
        }
        void reverseLL()
         {
             Nd *curr=head;
             Nd *prev=NULL;
             Nd *next=NULL;
             while(curr!=NULL)
             {
                 next=curr->next;
                 curr->next=prev;
                 prev=curr;
                 curr=next;
             }
             head=prev;
         }
        void traverse()
          {
              print(head);
          }
          void op(string s)
           {
               if(s=="rev")
                reverseLL();
           }
};

#endif // LINKEDLIST_H
