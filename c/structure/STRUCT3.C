#include<stdio.h>
#include<conio.h>
struct marks
{
int sub1;
int sub2;
int sub3;
int total;
};
void main()
{
int i;

static struct marks student[3]={{45,67,81,0},
								{75,53,69,0},
								{57,36,71,0} };
static struct marks total;
clrscr();
for (i=0; i<=2; i++)
{
student[i].total=student[i].sub1+
				 student[i].sub2+
				 student[i].sub3;

total.sub1 = total.sub1+student[i].sub1;
total.sub2 = total.sub2+student[i].sub2;
total.sub3 = total.sub3+student[i].sub3;
total.total = total.total+student[i].total;

}
printf("STUDENT   TOTAL\n\n");
for(i=0; i<=2; i++)
printf ("student[%d]   %d\n",i+1,student[i].total);
printf ("\n SUBJECT   TOTAL\n\n");
printf ("%s    %d\n%s    %d\n%s    %d\n",
		"subject1   ",   total.sub1,
		"subject2   ",   total.sub2,
		"subject3   ",   total.sub3);

printf ("\n Grand total=%d\n",total.total);
getch();
}
