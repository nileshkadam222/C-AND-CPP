#include<stdio.h>
#include<conio.h>

void main(int argc,char *cmp[])
{
FILE *fs,*ft;
char ch;
if(argc!=3)
{
puts("improper number of argument");
exit();
}
fs=fopen(cmp[1],"r");
if(fs==NULL)
{
puts("can not open source file");
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
