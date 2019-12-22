

/*
What is virtual function? Explain with an example.

A virtual function is a member function that is declared within a base class
and redefined by a derived class. To create virtual function, precede the
function declaration in the base class with the keyword virtual.

When a class containing virtual function is inherited, the derived class
redefines the virtual function to suit its own needs.

Base class pointer can point to derived class object. In this case,
using base class pointer if we call some function which is in both classes,
then base class function is invoked. But if we want to invoke derived class
function using base class pointer, it can be achieved by defining the function
as virtual in base class, this is how virtual functions support runtime polymorphism.



Consider following program code:

		*/

#include<iostream.h>
#include<conio.h>
class A
{
		int a;
		public:
		A()         //constructor.
		{
				 a = 1;
		}
		virtual void show()
		{
					cout <<"a="<<a<<endl;
		}
};

class B: public A
{
		 int b;
		 public:
		 B()
		 {
				 b = 2;
		 }
		 void show()
		 {
				  cout <<"b="<<b<<endl;
		 }
};

void main()
{
		   A *pA;
		   B *pB;
		   clrscr();
		   pA =new A();
		   pA->show();
		   pB=new B();
		   pB->show();
		   getch();
}


/*

 #include<iostream.h>
 #include<conio.h>

  class Window // Base class for C++ virtual function example
	 {
	   public:
		  virtual void Create() // virtual function for C++ virtual function example
		  {
			   cout <<"Base class Window";
					}
	 };

	 class CommandButton : public Window
	 {
	   public:
		  void Create()
		  {
			  cout<<"\nDerived class Command Button";
			 }
	 };
	 void main()
	 {
		 Window  *x, *y;
		 clrscr();

		 x = new Window();
		 x->Create();

		 y = new CommandButton();
		 y->Create();
		 getch();
	 }

			  /*
   The output of the above program will be,
				 Base class Window
				 Derived class Command Button   */
