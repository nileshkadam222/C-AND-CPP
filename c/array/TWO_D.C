#include<stdio.h>
#include<conio.h>
void main()
{
int m1[10][10], m2[10][10], m3[10][10], r1, c1, r2, c2, i, j;
clrscr();
printf("enter the no. of rows for 1st matrix");
scanf("%d",&r1);
printf("enter the no. of coloumns for 1st matrix");
scanf("%d",&c1);
printf("enter the no.of rows for 2nd matrix");
scanf("%d",&r2);
printf("enter the no. of coloumns for 2nd matrix");
scanf("%d",&c2);
if((r1==r2)&&(c1==c2))
{
printf("addition is possible");
printf("enter the value of 1st matrix");
for(i=0;i<r1;i++)
{
	for(j=0;j<c1;j++)
	{
	printf("enter the element");
	scanf("%d",&m1[i][j]);
	}
}
printf("enter elements of 2nd array");
for(i=0;i<r2;i++)
{
	for(j=0;j<c2;j++)
	{
	printf("enter the element");
	scanf("%d",&m2[i][j]);
	}
}
for(i=0;i<r1;i++)
{
	for(j=0;j<c1;j++)
	{
	m3[i][j]=m1[i][j]+m2[i][j];
	}
}
for(i=0;i<r1;i++)
{
	for(j=0;j<c1;j++)
	{
	printf("%d \t", m3[i][j]);
	}
printf("\n");
}
}
else
{
printf("addition is not possible");
}
getch();
}