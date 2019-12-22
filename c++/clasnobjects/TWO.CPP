//CLASS USING POINTERS

#include<iostream.h>
#include<conio.h>

class time          //class declaration
 {
  int hr;          //data members
  int min;
  int sec;

 public :            //permission lable
   void gettime()         //member function
    {
     cout<<"Enter Hours    :  ";
     cin>>hr;
     cout<<"Enter Minutes  :  ";
     cin>>min;
     cout<<"Enter Seconds  :  ";
     cin>>sec;
    }
  void printtime()  //member function
   {
     cout<<"\n\nHr  : "<<hr<<"  Min  :  "<<min<<"  Sec  :  "<<sec;
   }
  };  //closing of class

 void main()
  {
   time *a;
   clrscr();

   a->gettime();
   a->printtime();  //a is called as invoking object
   getch();
  }
