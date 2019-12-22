#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char ch[10]={"DISHA"};
int i=0,j;
clrscr();
   while(ch[i]!='\0')
   {
    i++;
  }

for(j=i;j>=0;j--)
{
printf("%c",ch[j]);
}
getch();
}
