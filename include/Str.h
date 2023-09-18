#ifndef STR_H
#define STR_H



#include<bits/stdc++.h>
using namespace std;
class Str
{
    public:
  string str;
    void insert()
      {
          cout<<"Enter data ,or to end press '*':";
              getline(cin>>ws,str);


      }
      void print()
       {
           cout<<"Value are:"<<str;
       }
       void maxfreq()
       {
           map<char,int>mp;
           int ma=0;
           for(auto it:str)
             mp[it]++,ma=max(ma,mp[it]);
             char ch;
             for(auto it:mp)
                 if(it.second==ma)
                 ch=it.first;
           cout<<"Maximum Frequency character is"<<ch<<"and it's frequency is"<<ma;
       }
        void minfreq()
       {
           map<char,int>mp;
           int ma=1e8;
           for(auto it:str)
             mp[it]++,ma=min(ma,mp[it]);
             char ch;
             for(auto it:mp)
                 if(it.second==ma)
                 ch=it.first;
           cout<<"Minimum Frequency character is"<<ch<<"and it's frequency is"<<ma;
       }
       void reverse()
        {
               int i=0,j=str.size()-1;
           while(i<j)
                 {
                char temp=str[i];
                 str[i]=str[j];
                 str[j]=temp;
                   i++,j--;
                 }
        }
};

#endif // STR_H
