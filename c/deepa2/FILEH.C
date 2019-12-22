/*
#include<stdio.h>
#include<conio.h>
void main()
{
FILE *fp;
char s[20]="This is Disha";
int i;
clrscr();
fp=fopen("abn.txt","w");
for(i=0;i<=4;i++)
	{
		fprintf(fp,"\n %s.line no%d",s,i);
	}
		printf("Data write sucessfully\n");

	getch();}
*/
/*
#include<stdio.h>
#include<conio.h>
void main()
{
FILE *fp;
char ch;
clrscr();
fp=fopen("abn.txt","r");
ch=getc(fp);
while(ch!=EOF)
	{
		printf("%c",ch);
		ch=getc(fp);
	}
getch();
}
  */

  //WAP to transfer data from one file to another
  /*
#include<stdio.h>
#include<conio.h>

void main()
{
FILE *fp,*fp1;
char ch;
clrscr();
fp=fopen("abn.txt","r");
fp1=fopen("mitesh.txt","w");
ch=getc(fp);
while(ch!=EOF)
	{
		putc(ch,fp1);
		ch=getc(fp);
	}
		printf("data transfer sucessfully\n");
		getch();
	}

	 */
