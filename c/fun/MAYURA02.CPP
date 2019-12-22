#include<stdio.h>
#include<conio.h>
void main()
{
float p,n,r;
float mayur(float p,float n,float r);
clrscr();
printf("enter the value of p,n,r=\n");
scanf("%f%f%f",&p,&n,&r);
mayur(p,n,r);
getch();
}
float mayur(float p,float n,float r)
{
float simint;
simint=(p*n*r)/100;
printf("simint=%f",simint);
return(simint);
}