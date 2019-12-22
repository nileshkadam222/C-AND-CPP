#include<stdio.h>
#include<conio.h>
void main()
{
int m[10][10],i,j,row,col;
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
}
}
for(i=0;i<row;i++)
{
for(j=0;j<col;j++)
{
printf("%d  ",m[i][j]);


}
printf("\n");
}getch();}