/*
#include<stdio.h>
#include<conio.h>
void main()
{
	int n, first=0, second=1, next=0, c;
	clrscr();
	printf("Enter the number of terms \n");
	scanf("%d",&n);
	printf("The fibo series are \n");
	for(c=1;c<n;c++)
	{
		   next=first+second;
		   first=second;
		   second=next;
		printf("%d \n",next);
	}
	getch();
}

#include<stdio.h>
#include<conio.h>
void main()
{
   int r,s=0,t=0,n;
   clrscr();
   printf("Enter a number");
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
	   printf("Palindrome number");
   }
   else
   {
		printf("Not a palindrome");
   }
   getch();
   }

*/
#include<stdio.h>
#include<conio.h>
void main()
{
   int r,s=0,t=0,n;
   clrscr();
   printf("Enter a number");
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
	   printf("Armstrong number");
   }
   else
   {
		printf("Not a armstrong number");
   }
   getch();
}

 /*


#include<stdio.h>
#include<conio.h>
void main()
{
   int r, n=1;
   clrscr();
   r=n%10;
   printf("%d",r);
   getch();
}

