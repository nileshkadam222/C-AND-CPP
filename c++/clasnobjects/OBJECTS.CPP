 /*
#include<iostream.h>
#include<conio.h>
class arth
{
   private:
   int a, b;

   public:
 //  int a, b;
   int add(int a, int b)
   {
	  return(a+b);
   }
   int sub(int a, int b)
   {
	  return(a-b);
   }
   int mul(int a, int b)
   {
	  return(a*b);
   }
   float div(float a, float b)
   {
	  return(a/b);
   }
};

void main()
{
   arth o;
   int x,y;
   clrscr();
   cout<<"Enter number1"<<endl;
   cin>>x;
   cout<<"Enter number2"<<endl;
   cin>>y;
   cout<<"The addition of "<<x<<" and "<<y<<" is "<<o.add(x,y)<<endl;
   cout<<"The substracton is "<<o.sub(x,y)<<endl;
   cout<<"The product is "<<o.mul(x,y)<<endl;
   cout<<"The division is "<<o.div(x,y)<<endl;
   getch();
}
/*



  #include<iostream.h>
  #include<conio.h>
  class arth
  {
	 private:
	 int a, b,c;

	 public:

	 void getdata()
	 {
		cout<<"Enter a number"<<endl;
		cin>>a;
		cout<<"Enter another number"<<endl;
		cin>>b;
	 }
	 int calc()
	 {
		c=0;
		c=a+b;
		return(c);
	 }

	 void showdata()
	 {
	  // calc();
	   cout<<"The sum is "<<c<<endl;
	 }
};

void main()
{
   arth r;
   clrscr();
   r.getdata();
   r.calc();
   r.showdata();
   getch();
}




#include<iostream.h>
#include<conio.h>
class assignment
{
   int number , cost;

   public:


   void assign(int a, int b)
   {
	  number=a;
	  cost=b;
   }

   void showdata()
   {
	  cout<<"The product number is "<<number<<endl;
	  cout<<"The product cost is "<<cost<<endl;
   }
};

void main()
{
   assignment n;
   int x, y;
   clrscr();
   cout<<"Enter the product number"<<endl;
   cin>>x;
   cout<<"Enter the product cost"<<endl;
   cin>>y;
   n.assign(x,y);
   n.showdata();
   getch();
}



#include<iostream.h>
#include<conio.h>
class cube
{
   private:
   int a,x;

   public:

   void getdata()
   {
	 cout<<"Enter a value"<<endl;
	 cin>>a;
   }
   void assign()
   {
	 x=a;
   }
   void showdata()
   {
	 cout<<"The cube is "<<a*a*a<<endl;
   }
};

void main()
{
  cube c;
  clrscr();
  c.getdata();
  c.assign();
  c.showdata();
  getch();
}




#include<iostream.h>
#include<conio.h>
class veg
{
  public:
  void veggies();
};


void veg:: veggies()
{
   cout<<"Spinach"<<endl;
   cout<<"Onion"<<endl;
   cout<<"Cabbage"<<endl;
}

void main()
{
  veg v;
  clrscr();
  cout<<"VEGETABLES:"<<endl<<endl<<endl;
  v.veggies();
  getch();
}



#include<iostream.h>
#include<conio.h>
class calc
{
   private:
   int a, b;

   public:
   void getdata();
   void putdata();
};

void calc:: getdata()
{
   cout<<"Enter number1"<<endl;
   cin>>a;
   cout<<"Enter number2"<<endl;
   cin>>b;
}

void calc:: putdata()
{
   cout<<"The value of a is "<<a<<endl;
   cout<<"The value of b is "<<b<<endl;
}

void main()
{
  calc c;
  clrscr();
  c.getdata();
  c.putdata();
  getch();
}
  */




#include<iostream.h>
#include<conio.h>
class cal
{
   private:
   int x,y;

   public:
   void assign(int x1, int y1);
   void display();
};

void cal:: assign(int x1,int y1)
{
	x=x1;
	y=y1;
}

void cal:: display()
{
  cout<<"a="<<x;
  cout<<"b="<<y;
}

void main()
{
   cal c;
   int a,b;
   clrscr();
   a=10;
   b=15;
   c.assign(a,b);
   c.display();
   getch();
}




