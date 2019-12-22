#include<iostream.h>
#include<conio.h>
void main()
{
int a[3][3],i,j,sum=0;
clrscr();
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
cout<<"\n enter the number:";
cin>>a[i][j];
}
}
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
cout<<"\n values are:"<<a[i][j];
getch();
}
}
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
sum=sum+a[i][j];
}
}
cout<<"\n the sum is:"<<sum;
getch();
//sum of diag ;
sum=0;
for(i=0,j=2;i<3;i++,j--)
{
sum=sum+a[i][j];
}
cout<<"\n diag sum is:"<<sum;
getch();
sum=0;
}

