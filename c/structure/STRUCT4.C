#include<stdio.h>
#include<conio.h>
void main()
{
struct marks
{
int sub[3];
int total;
};
clrscr();
static struct marks student[3]={45,67,81,0,75,53,69,0,57,36,71,0};
static struct marks total;
int i,j;
for (i=0; i<=2; i++)
{
for (j=0; j<=2; j++)
{
student[i].total+=student[i].sub[j];
total.sub[j]+=student[i].sub[j];
}
total.total += student[i].total;
}
printf ("STUDENT   TOTAL\n\n");
for (i=0; i<=2; i++)
printf("student[%d]     %d\n",i+1, student[i].total);

printf ("\n SUBJECT     TOTAL\n\n");
for(j=0; j<=2; j++)
printf ("subject-%d     %d\n",j+1,total.sub[j]);
printf ("\n grand total = %d\n",total.total);
getch();
}















