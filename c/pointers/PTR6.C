#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
  char name[10];
  int length;
  char *cptr=name;
  strcpy(name,"DELHI");
  clrscr();
  while(*cptr!='\0')
  {
	printf("%c is stored at addr %u\n",*cptr,cptr);
	getch();
	cptr++;
  }
  length=cptr-name;
  printf("\n length of the string=%d\n",length);
  getch();
}