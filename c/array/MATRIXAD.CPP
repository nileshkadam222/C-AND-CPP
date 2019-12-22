#include<stdio.h>
#include<conio.h>
void main()
{
int m[3][3],m1[3][3],i,j,row,col,sum=0;
clrscr();
printf("enter elements of first matrix");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
scanf("%d",&m[i][j]);
}
}

printf("enter elements of second matrix");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
scanf("%d",&m1[i][j]);
}}
sum=0;
for(i=0;i<3;i++)
{
for(j=0;j<i;j++)
{
sum=sum+m[i][j]+m1[i][j];
printf("%d",sum);
}
}
getch();
}