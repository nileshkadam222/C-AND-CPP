/*
#include<stdio.h>
#include<conio.h>
void main()
{
 int i,m,a[10];
 clrscr();
 for(i=0;i<10;i++)
 {
  printf("enter a value:");
  scanf("%d",&a[i]);
  }
  printf("which value u want to search for:");
  scanf("%d",&m);
   for(i=0;i<10;i++)
   {
	if(a[i]==m)
	{
	 printf("\it is existing:");
	 getch();
	 return;
	}
   }

  printf("\nIT  is not existing:");
  getch();
 }

 #include<stdio.h>
 #include<conio.h>
 void disp();
 void disp()
 {
	printf("\n ICLES");
 }
 void main()
 {
	clrscr();
	printf("C.S. Department");
	disp();
	printf("\n I.T. Department");
	disp();
	getch();
 }

 # include<stdio.h>
 # include<conio.h>
 int sum(int x, int y);
 int sub(int x, int y);
 int mul(int x, int y);
 int div(int x, int y);

 int sum(int x, int y)
 {
   int z=0;
   z=x+y;
   printf("the sum is %d",z);
   return(0);
 }

 int sub(int x, int y)
 {
   int z=0;
   z=x-y;
   return(z);
 }

 int mul(int x, int y)
 {
   int z=0;
   z=x*y;
   return(z);
 }

 int div(int x, int y)
 {
   int z=0;
   z=x/y;
   return(z);
 }

 void main()
 {
	int a, b;
	clrscr();
	printf("Enter a number");
	scanf("%d",&a);
	printf("\n Enter another number");
	scanf("%d",&b);
   //	printf("\n The sum is %d",sum(a,b));
	sum(a,b);
	printf("\n The substraction is %d",sub(a,b));
	printf("\n The multiplication is %d",mul(a,b));
	printf("\n The division is %d",div(a,b));
	getch();
 }

 #include<stdio.h>
 #include<conio.h>
 int greater(int a, int b);
 int greater(int a, int b)
 {
	int c;
	if(a>b)
	{
	c=a;
	}
	else if(b>a)
	{
	c=b;
	}
	return(c);
 }
 void main()
 {
	int x,y;
	clrscr();
	printf("Enter 1st number");
	scanf("%d",&x);
	printf("Enter 2nd number");
	scanf("%d",&y);
	printf("The greater number is %d",greater(x,y));
	getch();
}
  */
#include<stdio.h>
#include<conio.h>
float circle(float r);
float circle(float r)
{
	float area=0, pi=3.14;
	area=r*r*pi;
	return(area);
}
void main()
{
   float radius;
   clrscr();
   printf("Enter the radius");
   scanf("%f",&radius);
   printf("The area of the circle is %f",circle(radius));
   getch();
}

#include<stdio.h>
#include<conio.h>
int fun1();
int fun2();
int fun3();
int fun1()
{
   int m=100;
   printf("\n m=%d",m);
   return(0);
}
int fun2()
{
   int m=1000;
   printf("\n m=%d",m);
   return(0);
}
int fun3()
{
   int m=10000;
   fun1();
   fun2();
   printf("\n m=%d",m);
   return(0);
}
void main()
{
  int m=1;
  clrscr();
  printf("\n m=%d",m);
  fun3();
  getch();
}


#include<stdio.h>
#include<conio.h>
int x=10;
int fun1();
int fun2();
int fun3();
int fun1()
{
   x=x+10;
   printf("\n x=%d",x);
   return(x);
}
int fun2()
{
   x=x+11;
   printf("\n x=%d",x);
   return(x);
}
int fun3()
{
   fun1();
   fun2();
   x=x+12;
   printf("\n x=%d",x);
   return(x);
}
void main()
{
   clrscr();
   printf("x=%d",x);
   fun3();
   getch();
}



	 /*

#include<stdio.h>
#include<conio.h>
int fact();
int fact()
{
   int i,fact=1,n;
   printf("Enter a number");
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
	  fact=fact*i;
   }
   printf("Factorial of the given number is %d",fact);
   return(fact);
}
void main()
{
  clrscr();
  fact();
  getch();
}

#include<stdio.h>
#include<conio.h>
int table();
int table()
{
   int n, ans=0, i;
   printf("Enter a number");
   scanf("%d",&n);
   for(i=1;i<=10;i++)
   {
	  ans=i*n;
	  printf("\n ans=%d",ans);
	}
	  return(ans);

}
void main()
{
   clrscr();
   table();
   getch();
}


#include<stdio.h>
#include<conio.h>
int eo(int a);
int eo(int a)
{

  if(a%2==0)
  {
	printf("The entered number is even");
  }
  else if(a%2!=0)
  {
	printf("The entered number is odd");
  }
  return(0);
}
void main()
{
   int x;
   clrscr();
   printf("Enter a number");
   scanf("%d",&x);
   eo(x);
   getch();
}*/




