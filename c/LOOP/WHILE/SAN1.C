#include<stdio.h>
#include<conio.h>
void main()
{
int n,rem,rev=0,no;
clrscr();
printf("enter the no");/*value print*/
scanf("%d",&no);
while(no>0)
{
rem=no%10,
rev=(rev*10)+rem;
no=no/10;
}
printf("rev=%d",rev);
getch();
}