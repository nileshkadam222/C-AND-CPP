//class using array of objects
#include<iostream.h>
#include<conio.h>

class student
{
 int roll;
 char name[10];
 int marks;


public:
 void gettime()
 {
  cout<<"Enter the roll:";
  cin>>roll;
  cout<<"Enter the name:";
  cin>>name;
  cout<<"Enter the marks:";
  cin>>marks;
 }

  void printtime()
  {
  cout<<"\n\n roll is :"<<roll<<"name  :"<<name<<"marks :"<<marks;
  }
  };

  void main()
  {
  student a[6];
  clrscr();
  for(int i=0;i<6;i++)
  a[i].gettime();

  for(i=0;i<6;i++)
  a[i].printtime();
  getch();
  }




