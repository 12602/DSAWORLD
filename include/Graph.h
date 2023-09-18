#ifndef GRAPH_H
#define GRAPH_H

#include<bits/stdc++.h>

using namespace std;
class Graph
{
    public:
           vector<int>adj[100];
           int n;
       void insert()
        {

            cout<<"Enter number of rows in graph:";
            int r;


            cin>>r;

         n=r;
          for(int i=0;i<r;i++)
            adj[i].clear();
            for(int i=0;i<r;i++)
            {
                for(int j=0;j<r;j++)
                {
                    int v;
                    cin>>v;
                    if(v==1)
                         adj[i].push_back(j);
                }
            }
        }
        void print()
        {
            for(int i=0;i<n;i++)
            {
                vector<int>v=adj[i];
                cout<<i<<"->  ";
                for(auto it:v)
                    cout<<it<<" ";
                    cout<<endl;
            }
        }
        void dfs(vector<int>adj[],vector<bool>&vis,int src,vector<int>&d)
        {
            vis[src]=true;
            d.push_back(src);

            for(auto it:adj[src])
                if(!vis[it])
                 dfs(adj,vis,it,d);

        }
        void bfs(vector<int>adj[],vector<bool>&vis,int src,vector<int>&d){

          queue<int>q;
            q.push(src);
           vis[src]=true;
           while(!q.empty())
           {
               int tp=q.front();
               d.push_back(tp);
                    q.pop();
                  for(auto it:adj[tp])
                  {
                      if(!vis[it])
                        vis[it]=true,q.push(it);
                  }
           }
        }
        void traverse(string s)
         {
             if(s=="Print")
             {
                 print();
             }
            else if(s=="DFS")
             {
               //depth first search traversal
               vector<int>d;
               vector<bool>vis(n,false);
               for(int i=0;i<n;i++)
                if(!vis[i])
                   dfs(adj,vis,i,d);

                 cout<<"DFS Traversal of graph is: ";
                    for(auto it:d)
                        cout<<it<<" ";
             }
             else
             {
                //breadth first search traversal
                 vector<int>b;
               vector<bool>vis(n,false);
               for(int i=0;i<n;i++)
                if(!vis[i])
                   bfs(adj,vis,i,b);

                 cout<<"BFS Traversal of graph is:";
                    for(auto it:b)
                        cout<<it<<" ";
             }
         }
};

#endif // GRAPH_H
