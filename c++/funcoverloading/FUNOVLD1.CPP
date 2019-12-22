#include<iostream.h>
#include<conio.h>
#include<string.h>

 int add(int,int);
 void add(char *,char *);
 int add(int,int,int);

 void main()
  {
  int a=10,b=20,op;
  char n1[]="Disha",n2[]="  Computers";
  clrscr();
  op=add(a,b);
  cout<<endl<<op;
  add(n1,n2);
  cout<<endl<<n1;
  getch();
 }

int add(int a,int b)
  {
   int s;
   s=a+b;
   return s;
  }
int add(int a,int b,int c)
  {
   int s;
   s=a+b+c;
   return s;
  }

  void add(char *s,char *t)
  {
   strcat(s,t);
  }


