#ifndef ARRAY_H
#define ARRAY_H
#include<bits/stdc++.h>
using namespace std;
class Array
{
    public:
    int arr[100],n=100,sz;
     void insert()
      {
           cout<<"Enter the size of the array:";
           cin>>sz;
          n=sz;
          cout<<"Enter element of the array: ";
          for(int i=0;i<sz;i++)
            cin>>arr[i];

      }
      void print()
       {
           cout<<"Element of the arrays are:  ";
           for(int i=0;i<sz;i++)
             cout<<arr[i]<<" ";
             cout<<endl;
       }
       void reverse()
        {
            int i=0,j=n-1;
            while(i<j)
                 {
                int temp=arr[i];
                 arr[i]=arr[j];
                 arr[j]=temp;
                   i++,j--;
                 }
        }
        void maximum()
         {
               int ma=-1e8;
               for(int i=0;i<n;i++)
                  ma=max(ma,arr[i]);
               cout<<"Maximum element of Array is:"<<ma<<endl;

         }
             void minimum()
         {
               int ma=1e8;
               for(int i=0;i<n;i++)
                  ma=min(ma,arr[i]);
               cout<<"Minimum element of Array is:"<<ma<<endl;

         }



};

#endif // ARRAY_H
