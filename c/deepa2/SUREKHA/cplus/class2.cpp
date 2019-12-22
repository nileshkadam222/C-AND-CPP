#include<iostream.h>
#include<conio.h>
class person
{
  char name[30];
  int age;
  public:
	 void getdata();
	 void display();
};
void person :: getdata()
{
	cout << "enter ur name:";
	cin >> name;
	cout << "enter the age:";
	cin >> age;
}
void person :: display()
{
   cout << "\nname:" << name;
   cout << "\nage:" << age;
}
void main()
{
  person p;
  clrscr();
  p.getdata();
  p.display();
  getch();
}
