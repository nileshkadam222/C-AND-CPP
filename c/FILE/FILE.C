#include<stdio.h>
#include<conio.h>
void main()
{
FILE *fp;
char ch;
int nol=0,not=0,nob=0,noc=0;
clrscr();
fp=fopen("cmp.c","r");
while(1)
{
ch=fgetc(fp);
if(ch==EOF)
break;
noc++;
if(ch==' ')
nob++;
if(ch=='\n')
nol++;
if(ch=='\t')
   not++;
   }
   fclose(fp);
   printf("\nnumber of character=%d",noc);
   printf("\nnumber of blanks=%d",nob);
    printf("\nnumber of tabs=%d",not);
     printf("\nnumber of lines=%d",nol);
     getch();
     }