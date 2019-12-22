#include<stdio.h>
#include<conio.h>
void add(int,int);
void main()
{
int a,b,c;
printf("\n ENTER THE VALUE A");
scanf("%d",&a);
printf("\n ENTER THE VALUE B");
scanf("%d",&b);
c= add(a,b);
printf("\n ADDITON =%d",c);
getch();
}
void add(int x,int y)
{
int z;
z=x+y;
return(z);
}
