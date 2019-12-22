# include <stdio.h>
# include <conio.h>
 void main()
{
float x,y,a=1;
int i;
printf("enter the value of x \n");
scanf("%f",&x);
printf("enter the value of y \n");
scanf ("%f",&y);
for(i=0; i<y; i++)
{
	a=a*x;
}
printf("the result is %f",a);
getch();
}