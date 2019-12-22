#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int a,b;
int power(int a,int b);
clrscr();
printf("enter the value of a,b=\n\n");
scanf("%d%d",&a,&b);
power(a,b);
getch();
}
int power(int a,int b)
{
int value;
value=pow(a,b);
printf("value=%d",value);
return(value);
}