//define fun strcpy & copy to another
# include <conio.h>
# include <stdio.h>
void main()
{
	char name1[10],name2[10];
	clrscr();
	printf("Enter a name1");
	gets(name1);
	mystrcpy(name2,name1);
	printf("\n name2='\0'");
	puts(name1);
	getch();
}
mystrcpy(char *n2,char *n1)
{
	while(*n1!='\0')
	{
	*n2=*n1;
	n1++;
	n2++;
	}
	*n2='\0';
}