#include<iostream.h>
#include<conio.h>
class student
{
  protected:
	 int roll_no;
  public:
	void get_no(int);
	void put_number();
};
class test : public student
{
   protected:
		float sub1;
		float sub2;
   public:
	  void getm(float x,float y);
	  void put_marks();

};


class result : public test
{
   float total;
   public:
	void display();
};
void test :: getm(float x,float y)
{
   sub1=x;
   sub2=y;
}
void test :: put_marks()
{
		cout << "marks in sub1 = " << sub1 << "\n";
		cout << "marks in sub2 = " << sub2 << "\n";
}




void  student :: get_no(int a)
{
  roll_no=a;
}
void student :: put_number()
{
   cout << "rollno: " << roll_no << "\n";
   getch();
}
void result :: display()
{
   total=sub1+ sub2;
   put_number();
   put_marks();
   cout << "total=" << total << "\n";
   getch();
}
void main()
{
   result student1;
   clrscr();
   student1.get_no(111);
   student1.getm(75.9,78.6);
   student1.display();
}

