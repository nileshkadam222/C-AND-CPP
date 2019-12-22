#include<stdio.h>
#include<conio.h>
void main()
{
FILE *fs,*ft;
char ch;
clrscr();
fs=fopen("cmp.c","r");
if(fs==NULL)
{
puts("cannot open source file");
vexit();
}
ft=fopen("copy.c","w");
if(ft==NULL)
{
puts("cannot open target file");
fclose(fs);
exit();
}
while(1)
{
ch=fgetc(fs);
if(ch==EOF)
break;
else
fputc(ch,ft);
}
fclose(fs);
fclose(ft);
getch();
}