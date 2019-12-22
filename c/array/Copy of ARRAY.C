#include<stdio.h>
#include<conio.h>
void main()
{
int a[3], b[3], c[3], *p, *p1, *p2, i;
clrscr();
for(i=0;i<3;i++)
{
printf("enter the 3 values of 1st array");
scanf("%d", &a[i]);
}
for(i=0;i<3;i++)
{
printf("enter the 3 values of 2nd array");
scanf("%d",&b[i]);
}
for(i=0;i<3;i++)
{
p=&a[i];
p1=&b[i];
p2=&c[i];
*p2=*p1+*p;
}
for(i=0;i<3;i++)
{
p2=&c[i];
printf("sum=%d", *p2);
}
getch();
}