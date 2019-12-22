#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
clrscr();
printf("enter the value of a,b,c");
scanf("%d%d%d",&a,&b,&c);
if(a>b)
{
if(a>c)
{
printf("\n a is greater");
}
}
if(b>a)
{
if(b>c)
{
printf("\n b is greater");
}
}
if(c>a)
{
if(c>b)
{
printf("\n c is greater");
}
}
getch();
}