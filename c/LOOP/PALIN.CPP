#include<stdio.h>
#include<conio.h>
void main()
{
int c,j,rem,no=0;
clrscr();
printf("enter any no = \n");
scanf("%d",&j);
c=j;
while(j>0)
{
rem=j%10;
no=((no*10)+rem);
j=j/10;
}
if(no==c)
{
printf("no is palindrome");
}
else
printf("no is no palindrome");
getch();
}


