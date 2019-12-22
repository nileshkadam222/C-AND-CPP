#include<iostream.h>
#include<conio.h>
class employee
{
   char name[30];
   float age;
   public:
	 void getdata();
	 void putdata();
};
void employee::getdata()
{
   cout<<"enter name:";
   cin>>name;
   cout<<"enter age:";
   cin>>age;
}
void employee::putdata()
{
   cout<<"name:"<<name;
   cout<<"age:"<<age;
   getch();
}
const int size=3;
void main()
{
	employee manager[size];
	clrscr();
	for(int i=0;i<size;i++)
	{
	   cout<<"\n details of manager:"<<i+1<<"\n";
	   manager[i].getdata();
	}
	cout<<"\n";
	for(i=0;i<size;i++)
	{
	   cout<<"\n manager:"<<i+1<<"\n";
	   manager[i].putdata();
	}
}