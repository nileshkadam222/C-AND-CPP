//FUNCTION OVERLOADING  - POLYMORPHISM

#include<iostream.h>
#include<conio.h>
#include<string.h>

 class trial
  {
  int i1,i2,i3,i4;

  public :
    int add(int a ,int b)
     {
    int s;
    s=a+b;
    return s;
    }
//ONLY PROTOTYPE DECLARATION
  int add(int,int,int);
  int add(int,int,int,int);
  void add(char *, char *);
  int mul(int,int,int);
  };

    void trial :: add(char *a ,char *b)
     {
      strcat(a,b);
     }

  int trial::add(int a,int b,int c)
       {
	int s;
	s=a+b+c;
	return s;
       }

   int trial::add(int a,int b,int c,int d)
       {
	int s;
	s=a+b+c+d;
	return s;
       }

 //DEFAULT ARGUMENTS
   int trial::mul(int a,int b,int c=10)
       {
	int s;
	s=a*b*c;
	return s;
       }


 void main()
  {
  trial a;
  int op;
  float fop;
  char nm1[]="Santosh",nm2[]=" Sarwan";
  clrscr();

  op=a.add(10,10);
   cout<<endl<<endl<<op;
  op=a.add(10,10,10,10);
    cout<<endl<<endl<<op;
  op=a.add(10,10);
  cout<<endl<<endl<<op;
  a.add(nm1,nm2);
//  puts(nm1);
  cout<<endl<<endl<<nm1;
  op=a.mul(2,2,25);  //default arguments so one parameter is less;
    cout<<endl<<endl<<op;
  getch();
  }
