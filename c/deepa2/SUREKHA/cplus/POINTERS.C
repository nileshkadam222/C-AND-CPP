#include<stdio.h>
#include<conio.h>
void main()
{
  char name[10];
  int length;
  char *cptr;
  cptr=name;
  clrscr();
  strcpy(name,"delhi");
  printf("\nthe value of name is %s",name);
  getch();
  printf("\n the value of cptr is %s",cptr);
  getch();

  while(*cptr !='\0')
  {
     printf("\n %c is stored at address %u\n",*cptr,cptr);
     cptr++;
  }
  length=cptr - name;
  printf("\n length of the string =%d\n",length);
  getch();
}