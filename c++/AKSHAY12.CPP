#include<stdio.h>
#include<conio.h>
void main()
{
int i;
clrscr();
printf("enter the number=\n");
scanf("%d",&i);
do
{
printf("the number is even%d",i);
i++;
}
while(i%2==0);
do
{
printf("the number is odd%d",i);
i++;
}
while(i%2!=0);
getch();
}