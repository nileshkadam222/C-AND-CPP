#include<stdio.h>
#include<conio.h>
void main()
{
int a=10;
int b=20;
clrscr();
int swap(int a,int b);
swap(a,b);
printf("a=%d",a);
printf("b=%d",b);
getch();
}
swap(int x,int y)
{
int temp;
temp=x;
x=y;
y=temp;
printf("x=%d",x);
printf("y=%d",y);
return temp;
}