#include<stdio.h>
#include<conio.h>
void main()
{
int sum(int, int);
int sub(int,int);
int mult(int, int);
int div(int, int);
int a, b, choice, ans;
clrscr();
do
{
printf("menu \n");
printf("1 addition \n");
printf("2 subtraction \n");
printf("3 multiplication \n");
printf("4 division \n");
printf("5 exit \n");
scanf("%d", &choice);
switch(choice)
{
case 1: printf("enter the value of a");
	scanf("%d", &a);
	printf("enter the value of b");
	scanf("%d",&b);
	ans= a+b;
	printf("the sum is %d", ans);
case 2:	printf("enter the value of a");
	scanf("%d", &a);
	printf("enter the value of b");
	scanf("%d",&b);
	ans= a-b;
	printf("the subtraction is %d", ans);
case 3: printf("enter the value of a");
	scanf("%d", &a);
	printf("enter the value of b");
	scanf("%d",&b);
	ans=a*b;
	printf("the multiplication is %d", ans);
case 4: printf("enter the value of a");
	scanf("%d", &a);
	printf("enter the value of b");
	scanf("%d",&b);
	ans=a/b;
	printf("the division is %d", ans);
case 5: void exit();
default: printf("the value is unpredictible");
}
}while(choice!=5);
getch();
}
int sum(int, int)
{
int x,y, result;
result=x+y;
return result;
}
int sub(int, int)
{
int x,y, result;
result=x-y;
return result;
}
int mult(int, int)
{
int x,y, result;
result=x*y;
return result;
}
int div(int, int)
{
int x,y, result;
result=x/y;
return result;
}





