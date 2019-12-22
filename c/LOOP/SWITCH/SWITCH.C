#include<stdio.h>
#include<conio.h>
void main()
{
int number;
clrcsr();
printf("enter any no.");
scanf("%d",&number);
switch(number)
{
case1: puts("You entered 1\n");
break;
case2: puts("You entered 2\n");
break;
case3: puts("You entered 3\n");
break;
case4: puts("You entered 4\n");
break;
default: puts("Out of range \n");
}
getch();
}