#include<stdio.h>
#include<conio.h>
void main()
{
int arr1[3][3],arr2[3][3],arr3[3][3],i,j;
clrscr();
printf("enter elements of first array = \n");
for(i=1;i<=3;i++)
{
for(j=1;j<=3;j++)
{
scanf("%d",&arr1[i][j]);
}
}
printf("enter elements of second array = \n");
for(i=1;i<=3;i++)
{
for(j=1;j<=3;j++)
{
scanf("%d",&arr2[i][j]);
}
}
printf("elements of first array = \n");
for(i=1;i<=3;i++)
{
for(j=1;j<=3;j++)
{
printf("%d ",arr1[i][j]);
}
printf("\n");
}
printf(" elements of second array = \n");
for(i=1;i<=3;i++)
{
for(j=1;j<=3;j++)
{
printf("%d ",arr2[i][j]);
}
printf("\n");
}
printf("addition of matrix 1 and matrix 2  = \n");
for(i=1;i<=3;i++)
{
for(j=1;j<=3;j++)
{
arr3[i][j]=arr1[i][j]+arr2[i][j];
}
}
for(i=1;i<=3;i++)
{
for(j=1;j<=3;j++)
{
printf("%d ",arr3[i][j]);
}
printf("\n");
}
getch();





}