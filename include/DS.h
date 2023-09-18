#ifndef DS_H
#define DS_H
#include<bits/stdc++.h>
#include "conio2.h"
#include<Stack.h>
#include<Queue.h>
#include<LinkedList.h>
#include<Tree.h>
#include<Array.h>
#include<Str.h>
#include<Graph.h>
using namespace std;



class DS{
  public :
      //print new line
      void print()
{
    int sz=120;
    textcolor(YELLOW);
      for(int i=0;i<sz;i++)
        {
            printf("%c",247);
        }
        cout<<endl;
        textcolor(CYAN);
}

   //arrays
    void arr()
     {
         clrscr();
            textcolor(GREEN);
   cout<<"\t\t\t\t\t\t Welcome To Array "<<endl;
      print();
          Array a;
        vector<string>arr;
        arr={"Insert","Print ","Reverse","Maximum Element","Minimum Element"};
        int sz=arr.size();
     while(true)
       {
           cout<<endl;
            textcolor(RED);
       cout<<"Which Operation do you want to perform,else print -1"<<endl;
        for(int i=0;i<sz;i++)
          cout<<(i+1)<<". "<<arr[i]<<endl;
          textcolor(WHITE);
          cout<<"Enter your choice: ";
            int choice;
            cin>>choice;
            if(choice==1)
                   a.insert();
            else if(choice==2)
                  a.print();
            else if(choice==3)
                  a.reverse();
            else if(choice==4)
                  a.maximum();
             else if(choice==5)
                 a.minimum();
          if(choice==-1)
              {
                  clrscr();
               break;
               }
       }
     }


         //string
    void str()
     {
               clrscr();
            textcolor(GREEN);
     cout<<"\t\t\t\t\t\t Welcome To String  "<<endl;
      print();
          Str s;
        vector<string>arr;
        arr={"Insert","Print ","Reverse","Maximum Frequency Character","Minimum Frequency Character"};
        int sz=arr.size();
     while(true)
       {
           cout<<endl;
            textcolor(RED);
       cout<<"Which Operation do you want to perform,else print -1"<<endl;
        for(int i=0;i<sz;i++)
          cout<<(i+1)<<". "<<arr[i]<<endl;
          textcolor(WHITE);
          cout<<"Enter your choice: ";
            int choice;
            cin>>choice;
            if(choice==1)
                   s.insert();
            else if(choice==2)
                  s.print();
            else if(choice==3)
                  s.reverse();
            else if(choice==4)
                  s.maxfreq();
             else if(choice==5)
                   s.minfreq();
         if(choice==-1)
              {
                  clrscr();
               break;
               }
       }
     }

        //stack
           void st()
    {
            clrscr();
            textcolor(GREEN);
   cout<<"\t\t\t\t\t\t Welcome To Stack"<<endl;
                print();
          Stack stk;
        vector<string>arr;

        arr={"Push","Pop","Peek","IsEmpty"};
    while(true)
       {
           cout<<endl;
           textcolor(RED);
       cout<<"Which Operation do you want to perform,else print -1"<<endl;
        for(int i=0;i<4;i++)
          cout<<(i+1)<<". "<<arr[i]<<endl;
           textcolor(WHITE);
          cout<<"Enter your choice: ";
            int choice;
            cin>>choice;
            if(choice==1)
                   {
                       cout<<"Enter value to push:"<<" ";
                       int val;
                       cin>>val;
                       stk.push(val);
                   }
            else if(choice==2)
                 stk.pop();
            else if(choice==3)
                stk.peek();
              else if(choice==4)
                stk.isEmpty();
          if(choice==-1)
                 {
                 clrscr();
                   break;
                 }
       }
    }



 //queue
 void qu()
 {
    textcolor(GREEN);
    clrscr();
   cout<<"\t\t\t\t\t Welcome To Queue"<<endl;
      print();
          Queue q;
        vector<string>arr;
        arr={"Enqueue","Dequeue","Peek","IsEmpty"};
    while(true)
       {
           cout<<endl;
            textcolor(RED);
       cout<<"Which Operation do you want to perform,else print -1"<<endl;
        for(int i=0;i<4;i++)
          cout<<(i+1)<<". "<<arr[i]<<endl;
           textcolor(WHITE);
          cout<<"Enter your choice: ";
            int choice;
            cin>>choice;
            if(choice==1)
                   {
                       cout<<"Enter value to push:"<<" ";
                       int val;
                       cin>>val;
                       q.enqueue(val);
                   }
            else if(choice==2)
                 q.dequeue();
            else if(choice==3)
                q.peek();
              else if(choice==4)
                q.isEmpty();
          if(choice==-1)
                 {
                     clrscr();
                     break;
                  }
       }

 }

  //linked list
 void ll()
 {
     clrscr();
      textcolor(GREEN);

       cout<<"\t\t\t\t\t Welcome To Linked List "<<endl;
          print();
        LinkedList linked;
        vector<string>arr;
        arr={"Insert At Starting","Insert At Tail","Reverse Linked List" ,"Print"};
     while(true)
       {
           cout<<endl;
            textcolor(RED);
       cout<<"Which Operation do you want to perform,else print -1"<<endl;
        for(int i=0;i<arr.size();i++)
          cout<<(i+1)<<". "<<arr[i]<<endl;
          textcolor(WHITE);
          cout<<"Enter your choice: ";

            int choice;
            cin>>choice;
            if(choice==1)
                   linked.insert("beg");
            else if(choice==2)
                 linked.insert("end");
            else if(choice==3)
                 linked.op("rev");
              else if(choice==4)
                    linked.traverse();

           if(choice==-1)
               {
                   clrscr();
                   break;
                }
       }
 }



  //tree
 void tree()
 {
     clrscr();
      textcolor(GREEN);
   cout<<"\t\t\t\t\t\t Welcome To Tree "<<endl;
      print();
          Tree t;
        vector<string>arr;
        arr={"Insert","Pre-Order ","In-Order","Post-Order","Level-Order-Traversal"};
        int sz=arr.size();
     while(true)
       {
           cout<<endl;
            textcolor(RED);
       cout<<"Which Operation do you want to perform,else print -1"<<endl;
        for(int i=0;i<sz;i++)
          cout<<(i+1)<<". "<<arr[i]<<endl;
          textcolor(WHITE);
          cout<<"Enter your choice: ";
            int choice;
            cin>>choice;
            if(choice==1)
                   t.insert();
            else if(choice==2)
                 t.traverse("preorder");
            else if(choice==3)
                 t.traverse("inorder");
            else if(choice==4)
                t.traverse("postorder");
             else if(choice==5)
                t.traverse("level order traversal");
          if(choice==-1)
               {
                   clrscr();
                  break;
            }
       }
   }


    //graph
      void graph()
      {

            clrscr();
            textcolor(GREEN);
     cout<<"\t\t\t\t\t\t Welcome To Graph  "<<endl;
      print();
          Graph g;
        vector<string>arr;
        arr={"Insert","Print", "DFS","BFS"};
        int sz=arr.size();
     while(true)
       {
           cout<<endl;
            textcolor(RED);
       cout<<"Which Operation do you want to perform,else print -1"<<endl;
        for(int i=0;i<sz;i++)
          cout<<(i+1)<<". "<<arr[i]<<endl;
          textcolor(WHITE);
          cout<<"Enter your choice: ";
            int choice;
            cin>>choice;
            if(choice==1)
                   g.insert();
            else if(choice==2)
                   g.traverse("Print");
            else if(choice==3)
                  g.traverse("DFS");
            else if(choice==4)
                  g.traverse("BFS");
            if(choice==-1)
              {
                  clrscr();
               break;
               }
       }
      }

};

#endif // DS_H
