/*
#include<stdio.h>
#include<conio.h>
void main()
{
  int i, no;
  clrscr();
  for(i=0;i<10;i++)
  {
	scanf("%d",&no);
	if(no==0)
	break;
  }
  getch();
}

#include<stdio.h>
#include<conio.h>
void main()
{
  int i;
  clrscr();
  for(i=1;i<=50;i++)
  {
	if(i%5==0)
	 printf("\n %d",i);
	 continue;
  }
  getch();
} */

#include<stdio.h>
#include<conio.h>
void main()
{
  int a;
  clrscr();
  printf("Enter a number");
  scanf("%d",&a);
  if(a%2==0)
  {
	printf("\n It is a even number");
  }
  else if(a%2!=0)
   {
	goto xyz;
  }
  else
  {
	printf("Entered a wrong number");
	}
  xyz: printf("\n It is a odd number");
  getch();
 }