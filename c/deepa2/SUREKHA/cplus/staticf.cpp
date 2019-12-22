#include<iostream.h>
#include<conio.h>
class test
{
   int code;
   static int count;
  public:
   void setcode(void)
   {
	   code=++count;
   }
   void showcode(void)
   {
	   cout<<"code value :"<<code<<"\n";
   }
   static void showcount(void) //static member function
   {
	   cout<<"count:"<<count<<"\n";
   }
};
int test::count;
main()
{
   test t1,t2;
   clrscr();
   t1.setcode();
   t2.setcode();
   test::showcount();

   test t3;
   t3.setcode();
   test::showcount();

   t1.showcode();
   t2.showcode();
   t3.showcode();
   getch();
}