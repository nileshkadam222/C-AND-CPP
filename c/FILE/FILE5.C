#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
FILE *fp;
char s[80];
clrscr();
fp=fopen("cmp.c","r");
if(fp==NULL)
{
puts("cannot open source file");
 exit();
}

while(fgets(s,79,fp)!=NULL)
{
printf("%s",s);
fclose(fp);
  }
getch();
}