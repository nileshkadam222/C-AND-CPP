#include<stdio.h>
#include<conio.h>
void main()
{
int a[25],i=0,sum=0,sum1=0;
clrscr();
printf("enter 25 elements");
for(i=0;i<25;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<25;i++)
{
if(a[i]%2==0)
{
sum=sum+a[i];
}
else
sum1=sum1+a[i];
}
printf("addition of even %d \n ",sum);
printf("addition of odd %d \n",sum1);
getch();
}