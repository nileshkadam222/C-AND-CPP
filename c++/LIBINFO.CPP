#include"iostream.h"
#include"conio.h"
class lib
{
private:
static int l;
int code;
char name[10];
float qua,price;
public:
void getdata (void)
{
l++;
cout<<"\n enter code name qua price of books";
cin>>code>>name>>qua>>price;
}
void putdata(void)
{
 cout<<"\n\t code"<<code;
 cout<<"\n-------------------------------";

 cout<<"\n\t name"<<name;
 cout<<"\n------------------------------------";

 cout<<"\n\t qua"<<qua;
 cout<<"\n------------------------------------";

 cout<<"\n\t price= " <<price<<"/-\n";
 cout<<"\n------------------------------------";
 }
 void showcount(void)
 {
 cout<<"\n no of records="<< l;
 }
 };
 int lib::l;
 int main()
 {
 lib l1,l2;
 clrscr();
 l1.getdata();
 l1.putdata();
 l1.showcount();
 l2.getdata();
 l2.putdata();
 //l1.showcount();
 l2.showcount();
 getch();
 return 0;
 }
