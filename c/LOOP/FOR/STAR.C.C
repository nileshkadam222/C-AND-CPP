#include<stdio.h>
#include<conio.h>
void main()
{
int ln,i,j;
clrscr();
printf("enter the no of lines \n");
scanf("%d",&ln);
for(i=1;i<=ln;i++)
{
for(j=1;j<=i;j++)
{
printf("%d ",i);
}
printf("\n");
}

getch();
}