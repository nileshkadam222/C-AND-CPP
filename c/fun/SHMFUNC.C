
/*
#include<stdio.h>
#include<conio.h>
void disp();
void disp()
{
  printf("\n ICLES");
}
void main()
{
  clrscr();
  printf("C.S.Department");
  disp();
  printf("\n I.T.Department");
  disp();
  getch();
}




#include<stdio.h>
#include<conio.h>
int greater(int a, int b);
int greater(int a, int b)
{
   int c;
   if(a>b)
   {
   c=a;
   }
   else if(b>a)
   {
   c=b;
   }
   return(c);
   }
void main()
{
   int x,y;
   clrscr();
   printf("Enter first number");
   scanf("%d",&x);
   printf("Enter second number");
   scanf("%d",&y);
   printf("\n The greater number is %d",greater(x,y));
   getch();
} */



#include<stdio.h>
#include<conio.h>
float circle(float r);
float circle(float r)
{
	float area=0, pi=3.14;
	area=r*r*pi;
	return(area);
}

void main()
{
   float radius;
   clrscr();
   printf("Enter the radius");
   scanf("%f",&radius);
   printf("The area of the circle is %f",circle(radius));
   getch();
}
