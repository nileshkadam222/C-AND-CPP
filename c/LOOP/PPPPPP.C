#include<stdio.h>
#include<conio.h>
void main()
{
char ans='y';
int a,b=1;
while(ans=='y')
{
clrscr();
printf("enter any positive no.");
scanf("%d",&a);
while(b<=10)
{
printf("\n%d",a*b);
b++;
}
printf("\n Do you to continue ?(Y\N)");
ans=getch();
ans=toupper (ans);
while((ans!='y')&&(ans!='N'))
{
printf("please enter y or N only !");
ans=getch();
ans=toupper(ans);
}
b=1;
}
}