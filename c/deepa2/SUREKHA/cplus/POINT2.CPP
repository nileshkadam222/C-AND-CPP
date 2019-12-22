#include<iostream.h>
#include<conio.h>
class item
{
  int code;
  float price;
  public:
  void getdata(int a,float b)
  {
	 code=a;
	 price=b;
  }
  void show()
  {
	 cout << "code: " << code << "\n";
	 cout << "price:" << price<< "\n";
	 getch();
  }
};
const int size=2;

void main()
{
   item *p=new item[size];
   item *d=p;
   int x,i;
   float y;
   clrscr();

   for(i=0;i<size;i++)
   {
	  cout << "input code and price:" ;
	  cin >> x >> y;
	  p->getdata(x,y);
	  p++;
   }
   for(i=0;i<size;i++)
   {
	   cout << "\nitem:" << i+1 ;
	   d->show();
	   d++;
   }
}