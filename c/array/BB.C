# include <stdio.h>
#include<conio.h>
void main()
{
int n,i,num[20];
clrscr();
printf("enter the value of n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
	printf("enter the %d element\n",i+1);
	scanf("%d",&num[i]);
}
printf("printing the even numbers");
for(i=0;i<n;i++)
{
if((num[i]%2)==0)
{
printf("%d\n",num[i]);
}
}
getch();
}