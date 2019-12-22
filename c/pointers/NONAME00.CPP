#include<stdio.h>
#include<conio.h>
void main()
{
   int a, *b;
   b=&a;
   printf("%x",b);
   b=b+1;
   printf("\n %x",b);
   b=b-1;
   printf("\n %x",b);
   getch();
}