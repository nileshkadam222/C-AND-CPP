#include<iostream.h>
#include<conio.h>
class B
{
   int a;
   public:
	 int b;
	 void get_ab();
	 int get_a();
	 void show_a();
};
class D :private B
{
   int c;
   public:
	  void mul();
	  void display();
};
void B:: get_ab()
{
	cout << "enter values for a n b:";
	cin >>a >>b;
}

int B :: get_a()
{
  return a;
}
void B :: show_a()
{
	cout << "a=" << a << "\n";
	getch();

}
void D::mul()
{
  get_ab();
  c=b*get_a();
}
void D :: display()
{
   show_a();
   cout << "b=" << b << "\n";
   cout << "c=" << c << "\n";

   getch();
}
void main()
{
   D d;
   clrscr();
   d.mul();

   d.display();
   //d.b=20;
   d.mul();
   d.display();
   getch();
}
