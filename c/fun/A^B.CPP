#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int a,b;
int power(int x,int y);
clrscr();
printf("\nenter the base and power =");
scanf("%d%d",&a,&b);
power(a,b);
getch();
}
int power(int x,int y)
{
int c;
c=pow(x,y);
printf("\na^b is = %d",c);
return c;
}
