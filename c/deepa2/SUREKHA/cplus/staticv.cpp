#include<iostream.h>
#include<conio.h>
class item
{
  static int count; //count is static
  int number;
 public:
  void getdata(int a)
  {
	number=a;
	count++;
  }
  void getcount(void)
  {
	cout<<"count:";
	cout<<count<<"\n";
  }
};
int item::count; //count defined
void main()
{
	item a,b,c;
	clrscr();
	a.getcount();
	b.getcount();
	c.getcount();
	a.getdata(100);
	b.getdata(200);
	c.getdata(300);
	cout<<"after reading data:"<<"\n";
	a.getcount();
	b.getcount();
	c.getcount();
	getch();
}
