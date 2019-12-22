
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
}   /*


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
}
 */
