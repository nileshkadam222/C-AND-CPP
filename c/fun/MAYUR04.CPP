#include<stdio.h>
#include<conio.h>
void main()
{
int a=10;
int b=20;
void swap(int *x,int *y);
clrscr();
printf("a=%d",a);
printf("b=%d",b);
swap(&a,&b);
printf("a=%d,b=%d",a,b);
getch();
}
void swap(int *x,int *y)
{
int temp;
temp=*x;
*x=*y;
*y=temp;
}
