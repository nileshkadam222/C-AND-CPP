#include<stdio.h>
#include<conio.h>

void ind();
void china();
void mess();

void main()
{

clrscr();
ind();
china();
mess();
getch();

}
void ind()
{
int a,b,c;
scanf("%d%d",&a,&b);
c=a+b;
printf("c=%d",c);
}
void china()
{
printf("\n MADE IN CHINA");
}
void mess()
{
printf("\n MESSAGE");
}
