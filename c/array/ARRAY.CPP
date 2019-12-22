#include<stdio.h>
#include<conio.h>
void main()
{
int rem,i=0,j,no,sum=0,arr[10];
clrscr();
printf("enter any decimal no");
scanf("%d",&no);
while(no>0)
{
rem=no%2;
arr[i]=rem;
no=no/2;
i++;
}
while(i>0)
{
printf("%d",arr[i]);
i--;
}
getch();
}