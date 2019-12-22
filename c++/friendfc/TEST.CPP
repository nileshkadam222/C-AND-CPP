
#include <iostream.h>
#include <conio.h>

class B;
class A
{
	int a;
public:
	A()
	{
		a = 10;
	}
	   friend void B::display(A obj);

};

class B
{
public:
	void display(A obj)
	{
		cout<<"Class A : a = "<<obj.a;
	}

};

void main(){
	A objA;
	B objB;
	objB.display(objA);
//   display(objA);
	getch();
}