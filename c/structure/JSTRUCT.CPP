#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
 struct book
 {
 char b_name[20];
 int pages;
 float price;
 };
 struct book b1 ,b2, b3;
 clrscr();
 printf("enter the book details");
 scanf("%s %d %f",b1.b_name,&b1.pages,&b1.price);
 printf("enter the book details");
 scanf("%s %d %f",b2.b_name,&b2.pages,&b2.price);
 printf("enter the book details");
 scanf("%s %d %f",b3.b_name,&b3.pages,&b3.price);
 clrscr();
 printf("\n %s %d %f",b1.b_name,b1.pages,b1.price);
 printf("\n %s %d %f",b2.b_name,b2.pages,b2.price);
 printf("\n %s %d %f",b3.b_name,b3.pages,b3.price);
 getch();
 }