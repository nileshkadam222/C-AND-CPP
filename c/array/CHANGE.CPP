#include<stdio.h>
#include<conio.h>
void main()
{
int arr1[3][3],i,j,k;
clrscr();
printf("enter elements of first array = \n");
for(i=1;i<=3;i++)
{
for(j=1;j<=3;j++)
{
scanf("%d",&arr1[i][j]);
}
}
printf(" elements of  array = \n");
for(i=1;i<=3;i++)
{
for(j=1;j<=3;j++)
{
printf("%d ",arr1[i][j]);
}
printf("\n");
}
printf("changing of row to col array = \n");
for(i=1;i<=3;i++)
{
for(j=1;j<=3;j++)
{
printf("%d ",arr1[j][i]);
}
printf("\n");
}

getch();
}