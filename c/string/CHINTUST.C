/*
// display entered string
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
 char ch[20];
 clrscr();
 printf("\nenter a string: ");
 gets(ch);
 printf("\nthe entered string is: ");
 puts(ch);
 getch();
}
// to display len of string and print it in reverse

#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
 int i,len;
 char ch[20];
 clrscr();
 printf("\nenter a string: ");
 gets(ch);
 len=strlen(ch);
 printf("\nthe length of the string is: %d",len);
 printf("\nthe reverse of the string is: ");
  for(i=len-1;i>=0;i--)
   {
	  printf("%c",ch[i]);
   }
 getch();
}

*/
//  to display no of spaces and no of words in d string

#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
 int i,len,count=0;
 char ch[100];
 clrscr();
 printf("\nenter a string: ");
 gets(ch);
 len=strlen(ch);
 for(i=0;i<=len;i++)
  {
   if(ch[i]==' ')
	 {
	   count++;
	 }
  }
 printf("\n the no of spaces in d string is: %d",count);
 printf("\nthe no of words in d strinf is: %d",count+1);
 getch();
}
