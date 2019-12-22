//25.05.13
//(1)ARMSTRONG no:

/*
#include<conio.h>
#include<stdio.h>
void main()
{
  int n,r=0,s=0,t=0;
  clrscr();
  printf("\n Enter a no: ");
  scanf("%d",&n);
  t=n;
  while(n!=0)
  {
	r=n%10;
	s=s+(r*r*r);
	n=n/10;
  }
  if(s==t)
  {
	printf("\n It is an ARMSTRONG no");
  }
  else
  {
	printf("\n It is NOT an ARMSTRONG no");
  }
  getch();
}

//(2)Palindrome

#include<conio.h>
#include<stdio.h>
void main()
{
  int n,r=0,s=0,t=0;
  clrscr();
  printf("\n Enter a no: ");
  scanf("%d",&n);
  t=n;
  while(n!=0)
  {
	r=n%10;
	s=(s*10)+r;
	n=n/10;
  }
  if(s==t)
  {
	printf("\n It is a PALINDROME");
  }
  else
  {
	printf("\n It is NOT a PALINDROME");
  }
  getch();
}
*/

//(3)Fibonacci series

/*
#include<stdio.h>
#include<conio.h>
void main()
{
  int n,i,nx,f=1,s=1;
  clrscr();
  printf("Enter the upper limit\n");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
	 nx=f+s;
	 f=s;
	 s=nx;
	 printf("\n%d",nx);
  }
  getch();
}
*/


						   //RECURSIVE FUNCTIONS//

//(1)Factorial :

/*
#include<stdio.h>
#include<conio.h>
int fact(int a, int b);
int fact(int a, int b)
{
  int ans=1;
  ans=a*b;
  return(ans);
}
void main()
{
  int f=1,i,n;
  clrscr();
  printf("\n Enter a no: ");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
	f=fact(f,i);
  }
  printf("\nThe factorial of the no is: %d",f);
  getch();
}
  */

//(2)Table :

/*
#include<conio.h>
#include<stdio.h>
int table(int a , int b);
int table(int a , int b)
{
  int ans=0;
  ans=a*b;
  return(ans);
}
void main()
{
  int tbl=0,n,i;
  clrscr();
  printf("\nEnter a no:");
  scanf("%d",&n);
  for(i=1;i<=10;i++)
  {
	tbl=table(n,i);
	printf("\n %d * %d = %d",n,i,tbl);
  }
  getch();
}
*/

//(3)summation of ol nos from 1 to n:


#include<stdio.h>
#include<conio.h>
int sum(int a , int b);
int sum(int a , int b)
{
  int ans=0;
  ans=a+b;
  return(ans);
}
void main()
{
  int i,n,summ=0;
  clrscr();
  printf("\nEnter the upper limit: ");
  scanf("%d",&n);
  for(i=0;i<=n;i++)
  {
	summ=sum(summ,i);
  }
  printf("\nThe sum of all nos between 1 to %d is: %d",n,summ);
  getch();
}


/*							   //POINTERS//

//(1)Addition of two nos using pointers:


#include<stdio.h>
#include<conio.h>
void main()
{
  int a,b,c,*a1,*b1;
  clrscr();
  a1=&a;
  b1=&b;
  printf("\nEnter two nos:");
  scanf("%d %d",a1,b1);
  c=(*a1)+(*b1);
  printf("\nThe addition of two nos is: %d",c);
  getch();
}


//(2)swapping of two nos:

   /*
#include<conio.h>
#include<stdio.h>
void main()
{
  int a,b,temp,*a1,*b1,*temp1;
  clrscr();
  printf("\nEnter 1st no: ");
  scanf("%d",&a);
  a1=&a;
  printf("\nEnter 2nd no: ");
  scanf("%d",&b);
  b1=&b;
  printf("\nNumbers Before Swapping\na=%d , b=%d",a,b);
  *temp1=*a1;
  *a1=*b1;
  *b1=*temp1;
  printf("\nNumbers after Swapping\na=%d , b=%d",*a1,*b1);
  getch();
}
//(3)swapping of nos WITHOUT using temp:


#include<conio.h>
#include<stdio.h>
void main()
{
  int a,b,*a1,*b1;
  clrscr();
  printf("\nEnter 1st no: ");
  scanf("%d",&a);
  a1=&a;
  printf("\nEnter 2nd no: ");
  scanf("%d",&b);
  b1=&b;
  printf("\nNumbers Before Swapping\na=%d , b=%d",a,b);
  a=(*a1) + (*b1);
  b=(*a1) - (*b1);
  a=(*a1) - (*b1);
  printf("\nNumbers after Swapping\na=%d , b=%d",*a1,*b1);
  getch();
}