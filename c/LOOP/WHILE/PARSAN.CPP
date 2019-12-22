#include<stdio.h>
#include<conio.h>
void main()
{
int rem,sum=0,no;
clrscr();
printf("enter the no");
scanf("%d",no);
while (no>0)
{
rem=no%10;
sum=sum+rem;
no=no/10;
}
printf("sum=%d",sum);
getch();
}
