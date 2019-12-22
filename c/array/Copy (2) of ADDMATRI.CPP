#include<stdio.h>
#include<conio.h>
void main()
{
int m[3][3],i,j,row,col,sum=0;
clrscr();
printf("enter no of rows =");
scanf("%d",&row);
printf("enter no of col =");
scanf("%d",&col);
for(i=0;i<row;i++)
{
for(j=0;j<col;j++)
{
printf("enter elements of matrix");
scanf("%d",&m[i][j]);
sum=sum+m[i][j];
}
}
for(i=0;i<row;i++)
{
for(j=0;j<col;j++)
{
printf("%d  ",m[i][j]);
}
printf("\n");
}
printf("\naddition of rows and col is  %d",sum);
getch();
}