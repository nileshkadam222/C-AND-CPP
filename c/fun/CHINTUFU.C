// funtions prog 1
/*

#include<stdio.h>
#include<conio.h>
void disp();
void disp()
  {
	 printf("ICLES");
  }
void main()
  {
   clrscr();
   printf("COM Department-\n");
   disp();
   printf("\nARTS Department-\n");
   disp();
   getch();
  }
  */

/*
//funtions prog 2
//2.sum sub mult div


#include<stdio.h>
#include<conio.h>
float sum(float x,float y);
float sub(float x,float y);
float mult(float x,float y);
float div(float x,float y);

float sum(float x,float y)
 {
	float z=0;
	z=x+y;
	return(z);
 }
float sub(float x,float y)
 {
	float z=0;
	z=x-y;
	return(z);
 }
float mult(float x,float y)
 {
	float z=0;
	z=x*y;
	return(z);
 }
float div(float x,float y)
 {
	float z=0;
	z=x/y;
	return(z);
 }
void main()
	{
	  float a,b;
	  clrscr();
	  printf("enter no A: ");
	  scanf("%f",&a);
	  printf("enter no B: ");
	  scanf("%f",&b);
	  printf("The sum of A and B is %f",sum(a,b));
	  printf("\nThe sub of A and B is %f",sub(a,b));
	  printf("\nThe mult of A and B is %f",mult(a,b));
	  printf("\nThe div of A and B is %f",div(a,b));
	  getch();
	}
				  */


//3. gr8r no
/*


#include<stdio.h>
#include<conio.h>
float gr8r(float a,float b);
float gr8r(float a,float b)
  {
	float c;
	if(a>b)
	{
	c=a;
	}
	else if(b>c)
	{
	c=b;
	}
	return(c);
  }
void main()
{
 float x,y;
 clrscr();
 printf("enter no A: ");
 scanf("%f",&x);
 printf("enter no B: ");
 scanf("%f",&y);
 printf("the greatr no is %f",gr8r(x,y));
 getch();
}

  */


// 4. area of circle and circum
							   /*

#include<stdio.h>
#include<conio.h>
float area(float r);
float circum(float r);
float area(float r)
 {
	float A=0,pi=3.14;
	A=r*r*pi;
	return(A);
  }
float circum(float r)
 {
	float C=0,pi=3.14;
	C=2*pi*r;
	return(C);
 }
void main()
{
 float radius;
 clrscr();
 printf("enter the radius of the circle: ");
 scanf("%f",&radius);
 printf("the area is %f",area(radius));
 printf("\n and the circumference is %f",circum(radius));
 getch();
}
*/

//5. local varible
  /*

#include<stdio.h>
#include<conio.h>
int fun1();
int fun2();
int fun3();
int fun1()
  {
	int z=10;
	printf("\n %d",z);
	return(0);
  }
int fun2()
  {
	int z=100;
	printf("\n %d",z);
	return(0);
  }
int fun3()
  {
	int z=1000;
	fun1();
	fun2();
	printf("\n %d",z);
	return(0);
  }
void main()
{
 int z=1;
 clrscr();
 printf("\n %d",z);
 fun3();
 getch();
}
*/

// 6. global var
   /*
#include<stdio.h>
#include<conio.h>
int z=10;
int fun1();
int fun2();
int fun3();
int fun1()
  {
	z=z+11;
	printf("\n %d",z);
	return(z);
  }
int fun2()
  {
	z=z+12;
	printf("\n %d",z);
	return(z);
  }
int fun3()
  {
	fun1();
	fun2();
	z=z+13;
	printf("\n %d",z);
	return(0);
  }
void main()
{
 clrscr();
 printf("\n %d",z);
 fun3();
 getch();
}
   */
/*

//7. factor0ial


#include<stdio.h>
#include<conio.h>
int fact();
int fact()
  {
	int i,n,z=1;
	printf("enter a no: ");
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	 {
	  z=z*i;
	 }
	printf("the factorial of d no is: %d",z);
	return(z);
  }
void main()
{
clrscr();
fact();
getch();
}
*/

//8. tables
/*


#include<stdio.h>
#include<conio.h>
int tab();
int tab()
  {
	int i,n,z=0;
	printf("enter a no: ");
	scanf("%d",&n);
	for (i=1;i<=10;i++)
	 {
	  z=n*i;
	  printf("\n%d * %d = %d",n,i,z);
	 }
	return(z);
  }
void main()
{
clrscr();
tab();
getch();
}

*/


//9. even odd

/*
#include<stdio.h>
#include<conio.h>
int eo(int eo);
int eo(int eo)
  {

	if(eo%2==0)
	 {
	  printf("no is even");
	 }
	else if(eo%2!=0)
	 {
	  printf("no is odd");
	 }
	return(0);
  }
void main()
{
int a;
clrscr();
printf("enter a no: ");
scanf("%d",&a);
eo(a);
getch();
}
*/

