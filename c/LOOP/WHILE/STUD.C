#include<stdio.h>
#include<conio.h>
void main()
{
int rollno,id,i=1,j;
char name[20],add[20];
clrscr();
printf("enter how many student =\n");
scanf("%d",&j);
while(i<=j)
{
printf("enter student roll no =\n");
scanf("%d",&rollno);
printf("enter student name =\n");
scanf("%s",&name);
printf("enter student add =\n");
scanf("%s",&add);
printf("enter student Id =\n\n");
scanf("%d",&id);

printf("\nRoll no  = %d\n ",rollno);
printf("Student Name = %s \n",name);
printf("Student address = %s\n",add);
printf("\nStudent Id no = %d\n",id);
i++;
}

getch();

}