#include<stdio.h>
#include<conio.h>
void main()
{
float radius;
float area(float radius);
clrscr();
printf("enter the value of radius=\n");
scanf("%f",&radius);
area(radius);
getch();
}
float area(float radius)
{
float area1;
area1=3.14*radius*radius;
printf("area1=%f",area1);
return(area1);
}