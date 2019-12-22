#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
 {
   struct vegetables
	{
	 char vege[20];
	 float mass;
	 int  price;
	};
 struct vegetables v1,v2,v3;
 clrscr();
 printf("\nenter 1st vegetable details");
 scanf("%s %f %d",v1.vege,&v1.mass,&v1.price);
 printf("\nenter 2nd vegetable details");
 scanf("%s %f %d",v2.vege,&v2.mass,&v2.price);
 printf("\nenter 3rd vegetable details");
 scanf("%s %f %d",v3.vege,&v3.mass,&v3.price);

 clrscr();
 printf("\n%s %fkg %d",v1.vege,v1.mass,v1.price);
 printf("\n%s %fkg %d",v2.vege,v2.mass,v2.price);
 printf("\n%s %fkg %d",v3.vege,v3.mass,v3.price);
 getch();
}