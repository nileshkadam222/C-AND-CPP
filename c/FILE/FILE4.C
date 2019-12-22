#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
FILE *fp;
char s[80];
clrscr();
fp=fopen("cmp.c","w");
if(fp==NULL)
{
puts("cannot open source file");
 exit();
}
printf("\nenter a few line\n");
while(strlen(gets(s))>0)
{
fputs(s,fp);
fputs("\n",fp);
}
fclose(fp);
}