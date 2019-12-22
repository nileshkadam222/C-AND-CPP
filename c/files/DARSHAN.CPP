/*
#include<stdio.h>
#include<conio.h>
void main()
{
FILE *fp;
char ch;
clrscr();
fp=fopen("Fi.txt","r");
ch=getc(fp);
while (ch!=EOF)
{
  printf("%c",ch);
  ch=getc(fp);
}
getch();
}


#include<stdio.h>
#include<conio.h>
void main()
{
  FILE *fp;
  char a[20]="this is disha";
  int i;
  clrscr();
  fp=fopen("darshan.txt","w");
  for(i=0; i<4; i++)
  {
	fprintf(fp,"\n%sxline no%d", a,i);
  }
  printf("data write sucessfully\n");
  getch();
}
  */

#include<stdio.h>
#include<conio.h>
void main()
{
  FILE *fp,*fp1;
  char ch;
  clrscr();
  fp=fopen("fi.txt","r");
  fp1=fopen("fh.txt","w");
  ch=getc(fp);
  while (ch!=EOF)
  {
		putc(ch,fp1);
		ch=getc(fp);
	}
	printf("data transfer sucessfully\n");
	getch();
}
