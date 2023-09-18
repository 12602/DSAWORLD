#include <iostream>
#include <DS.h>
#include "conio2.h"
using namespace std;
//function for printing lines
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






int main()
{
      textcolor(CYAN);
      gotoxy(60,12);
    cout<<"Welcome to DSA WORLD"<<endl;

    print();
     gotoxy(50,15);
      textcolor(RED);
     cout<<"Designed and Developed by Jatin Sharma"<<endl;
     print();
      gotoxy(40,20);
      textcolor(WHITE);
    cout<<"Press any key to continue";

      getch();
     clrscr();

    vector<string>arr;
    textcolor(YELLOW);
    arr={"Array","String","Stack","Queue","Linked List","Tree","Graph"};
    int sz=arr.size();
    DS D;
    while(true)
   {
         print();
    cout<<"\t\t\t\t\t\tSELECT YOUR FAVOURITE DSA"<<endl;
         print();

            cout<<endl<<endl;
    for(int i=0;i<sz;i++)
        cout<<(i+1)<<". "<<arr[i]<<endl;

        print();
         textcolor(WHITE);
         gotoxy(40,18);
     cout<<"Enter your choice,or else -1: ";
     int choice;

       cin>>choice;
            // clrscr();
      switch(choice)
       {
       case 1:
             D.arr();break;
       case 2:
              D.str();break;
       case 3:
             D.st();break;
       case 4:
            D.qu();break;
       case 5:
            D.ll();break;
       case 6:
             D.tree();break;
       case 7:
              D.graph();break;
       default:
          break;
       }

    }

}


