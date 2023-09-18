#ifndef TREE_H
#define TREE_H
#include<bits/stdc++.h>
#include "conio2.h"
using namespace std;
class Node{
  public:
  Node *left;
  Node *right;
  int val;
    Node(int v)
    {
        val=v;
        left=right=NULL;
    }

};
class Tree
{
    public:
    Node  *head=NULL;
    //function for building tree
       Node* buildtree()
       {
  int d;
  cout<<"Enter value: ";
  cin>>d;
  Node*root;
  if(d==-1)
    {
    return NULL;
     }
  root=new Node(d);
  cout<<"Enter value for left child\n";
  root->left=buildtree();
  cout<<"Enter value for right child\n";
  root->right=buildtree();
  return root;
}
//function for calling insert tree
  void insert()
    {
        head=buildtree();
    }
   //preorder
    void preorder(Node *head)
     {
       if(head==NULL)
            return;
            cout<<head->val<<" ";
       preorder(head->left);
       preorder(head->right);

     }
     //inorder
       void inorder(Node *head)
     {
       if(head==NULL)
            return;

        inorder(head->left);
          cout<<head->val<<" ";
         inorder(head->right);

     }
      //postorder
       void postorder(Node *head)
     {
       if(head==NULL)
            return;

       postorder(head->left);
       postorder(head->right);
         cout<<head->val<<" ";

     }
     void levelOrder(Node *head)
     {
         queue<Node *>q;
         q.push(head);
         int level=1;
         while(!q.empty())
         {
             int sz=q.size();
             cout<<endl;
             cout<<"Node at level "<<level<<endl;
             while(sz-->0)
             {
                 Node *root=q.front();
                        q.pop();
                 cout<<root->val<<" ";
                 if(root->left)
                        q.push(root->left);
                 if(root->right)
                        q.push(root->right);

             }

             level++;
         }
     }
     //calling which travesal need to execute
     void traverse(string s)
       {
           cout<<endl;
           textcolor(RED);
           cout<<s<<" Traversal of tree is:  ";
           if(s=="inorder")
             inorder(head);
           else if(s=="preorder")
             preorder(head);
           else if(s=="postorder")
             postorder(head);
            else
                levelOrder(head);
       }
};

#endif // TREE_H
