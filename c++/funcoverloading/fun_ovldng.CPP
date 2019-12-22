#include<iostream.h>
#include<conio.h>
#include<string.h>

 int add(int,int);
 void add(char *,char *);
 float add(float, float,float);
 void main()
  {
  int a=10,b=20;
  float a1=1.2 , b1=5.2,c1=2;
	 char n1[]="Disha",n2[]="  Computers";
  clrscr();
  cout<<endl<<add(a,b);
  cout<<endl<<add(a1,b1,c1);
  add(n1,n2);
  cout<<endl<<n1;
 // op1=add(a,b,c);
  //cout<<endl<<add(a1,b1);
  getch();
 }

int add(int a,int b)
  {
   int s;
   s=a+b;
   return s;
  }
float add(float a1, float b1,float c1)
  {
   float s=0;
   s=a1+b1+c1;
   return s;
  }

  void add(char *s,char *t)
  {
   strcat(s,t);
  }


