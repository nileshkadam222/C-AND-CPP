#include<iostream.h>
#include<conio.h>
void main()
{
   int a,b,c;
   float  d;
   clrscr();
   cout<<"Enter the value of a:";
   cin>>a;
   cout<<"Enter the value of b:";
   cin>>b;
   cout<<"Enter the value of c:";
   cin>>c;

   try
   {
			  if((a-b)!=0)
			  {
				 d=c/(a-b);
				 cout<<"Result is:"<<d;
			  }
			  else
			  {
				 throw(a-b);
			  }
   }

   catch(int i)
   {
			  cout<<"Answer is infinite because a-b is:"<<i;
   }

   getch();
}
/*
===============================================
#include <iostream.h>

int main()
{
	int StudentAge;

	try {
		cout << "Student Age: ";
		cin >> StudentAge;

		if(StudentAge < 0)
			throw "Positive Number Required";

		cout << "\nStudent Age: " << StudentAge << "\n\n";
	}
	catch(const char* Message)
	{
		cout << "Error: " << Message;
	}

	cout << "\n";
	return 0;
}
=================================================
#include <iostream.h>

int main()
{
	double Operand1, Operand2, Result;
	char Operator;

	cout << "This program allows you to perform an operation on two numbers\n";
	cout << "To proceed, enter a number, an operator, and a number:\n";
	cin >> Operand1 >> Operator >> Operand2;

	switch(Operator)
	{
	case '+':
		Result = Operand1 + Operand2;
		break;

	case '-':
		Result = Operand1 - Operand2;
		break;

	case '*':
		Result = Operand1 * Operand2;
		break;

	case '/':
		Result = Operand1 / Operand2;
		break;

	default:
		cout << "Bad Operation";
	}

	cout << "\n" << Operand1 << " " << Operator << " "
		 << Operand2 << " = " << Result;

	cout << "\n\n";
	return 0;
}
==================================================
					*/