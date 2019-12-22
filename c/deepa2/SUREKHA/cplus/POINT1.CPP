#include<iostream.h>
#include<conio.h>
void main()
{
	int a=5;
	int *ptr;
	ptr=&a;
	clrscr();
	cout << "a:" << a;
	cout << "\naddress of a:" << &a;
	cout << "\naddress of a/ptr : " << ptr;
	cout << "\nvalue stored at ptr:" << *ptr;

	getch();
}
