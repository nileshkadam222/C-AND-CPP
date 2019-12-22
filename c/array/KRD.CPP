//30.05.13

//(1)Basic program:

/*
#include<iostream.h>
#include<conio.h>
void main()
{
  int a,b,c=0;
  cout<<"enter 1st no:"<<endl;
  cin>>a;
  cout<<"enter 2nd no:"<<endl;
  cin>>b;
  c=a+b;
  cout<<"The sum is  "<<c;
  getch();
}
*/

//(2)to calculate simple interest:

/*
#include<iostream.h>
#include<conio.h>
void main()
{
  int p,r,t,i=0;
  clrscr();
  cout<<"Enter the principle amount, rate of interest and the time period: "<<endl;
  cin>>p>>r>>t;
  i=(p*r*t)/100;
  cout<<"Simple interest of the data entered is: "<<i;
  getch();
}
*/

//(3)swapping using temp:

/*
#include<conio.h>
#include<iostream.h>
void main()
{
  int a,b,temp;
  clrscr();
  cout<<"Enter the two nos: "<<endl;
  cin>>a>>b;
  cout<<"The nos Before swapping are "<<endl<<"a= "<<a<<" b= "<<b<<endl;
  temp=a;
  a=b;
  b=temp;
  cout<<"The nos After swapping are "<<endl<<"a= "<<a<<" b= "<<b;
  getch();
}
*/

//(4)to chk if d no is positive , negative or zero:

/*
#include<iostream.h>
#include<conio.h>
void main()
{
  int a;
  clrscr();
  cout<<"Enter a no: ";
  cin>>a;
  if(a>0)
  {
	cout<<"The no is positive";
  }
  else if(a<0)
  {
	cout<<"The no is negative";
  }
  else if(a==0)
  {
	cout<<"The no is Zero";
  }
  getch();
}
*/

//(5)Even or odd:

/*
#include<iostream.h>
#include<conio.h>
void main()
{
  int a;
  clrscr();
  cout<<"Enter a no: ";
  cin>>a;
  if(a%2==0)
  {
	cout<<"The entered no is even";
  }
  else
  {
	cout<<"The entered no is odd";
  }
  getch();
}
*/

//(6)Greater of 2:

/*
#include<iostream.h>
#include<conio.h>
void main()
{
  int a,b;
  clrscr();
  cout<<"Enter 2 nos: "<<endl;
  cin>>a>>b;
  if(a>b)
  {
	cout<<"a is greater";
  }
  else
  {
	cout<<"b is greater";
  }
  getch();
}
*/

								  //For loop//

//(1)take the upper limit from user nd print ol d nos:

/*
#include<iostream.h>
#include<conio.h>
void main()
{
  int n,i;
  clrscr();
  cout<<"Enter the upper limit: "<<endl;
  cin>>n;
  for(i=0;i<=n;i++)
  {
	cout<<i<<endl;
  }
  cout<<"The reverse order is: "<<endl;
  for(i=n;i>=0;i--)
  {
	cout<<i<<endl;
  }
  getch();
}
*/

//(2)Factorial:

/*
#include<iostream.h>
#include<conio.h>
void main()
{
  int i,n,f=1;
  clrscr();
  cout<<"Enter a no: "<<endl;
  cin>>n;
  for(i=1;i<=n;i++)
  {
	f=f*i;
  }
  cout<<"The factorial of the given no is: "<<f;
  getch();
}
*/

//(3)Table:

/*
#include<iostream.h>
#include<conio.h>
void main()
{
  int n,i,ans=0;
  clrscr();
  cout<<"Enter a no: "<<endl;
  cin>>n;
  cout<<"The table of given no is: "<<endl;
  for(i=1;i<=10;i++)
  {
	ans=n*i;
	cout<<n<<" * "<<i<<" = "<<ans<<endl;
  }
  getch();
}
*/

							//While nd Do while//

//(1)table using while :

/*
#include<iostream.h>
#include<conio.h>
void main()
{
  int n,i,ans=0;
  clrscr();
  cout<<"Enter a no: "<<endl;
  cin>>n;
  i=1;
  cout<<"The table of entered no is: "<<endl;
  while(i<=10)
  {
	ans=n*i;
	cout<<n<<" * "<<i<<" = "<<ans<<endl;
	i++;
  }
  getch();
}
*/

//(2)factorial using do while:

/*
#include<iostream.h>
#include<conio.h>
void main()
{
  int i,n,f=1;
  clrscr();
  cout<<"Enter a no: "<<endl;
  cin>>n;
  i=1;
  do
  {
	f=f*i;
	i++;
  }while(i<=n);
  cout<<"The factorial of d no is: "<<f;
  getch();
}
*/

//31.05.13

//switch statement:

/*
#include<iostream.h>
#include<conio.h>
void main()
{
  int n;
  clrscr();
  cout<<"give an input please: "<<endl;
  cin>>n;
  switch(n)
  {
	case 1:
		cout<<"Monday"<<endl;
		break;
	case 2:
		cout<<"Tuesday"<<endl;
		break;
	case 3:
		cout<<"Wednesday"<<endl;
		break;
	case 4:
		cout<<"Thursday"<<endl;
		break;
	case 5:
		cout<<"Friday"<<endl;
		break;
	case 6:
		cout<<"Saturday"<<endl;
		break;
	case 7:
		cout<<"Sunday"<<endl;
		break;
   default:
   cout<<"Invalid Input"<<endl;
	}
	getch();
}
*/

//1D Arrays:

/*
#include<iostream.h>
#include<conio.h>
void main()
{
  int i,a[5];
  clrscr();
  cout<<"Enter Array Elements: "<<endl;
  for(i=0;i<=5;i++)
  {
	cin>>a[i];
  }
  clrscr();
  cout<<"The Array Elements Are: "<<endl;
  for(i=0;i<=5;i++)
  {
	cout<<a[i]<<endl;
  }
  getch();
}
*/

//2D Arrays:

/*
#include<iostream.h>
#include<conio.h>
void main()
{
  int a[2][2], b[2][2],c[2][2],i,j;
  clrscr();
  cout<<"Enter the array elements for first matrix "<<endl;
   for(i=0;i<2;i++)
   {
	 for(j=0;j<2;j++)
	 {
	   cin>>a[i][j];
	 }
   }
	cout<<"Enter the array elements for second matrix"<<endl;
   for(i=0;i<2;i++)
   {
	 for(j=0;j<2;j++)
	 {
	   cin>>b[i][j];
	 }
   }
   cout<<"The first matrix is of the form"<<endl;
   for(i=0;i<2;i++)
   {
	 for(j=0;j<2;j++)
	 {
	   cout<<"\t"<<a[i][j];
	 }
	 cout<<endl;
   }

   cout<<"The second matrix is of the form"<<endl;
   for(i=0;i<2;i++)
   {
	 for(j=0;j<2;j++)
	 {
	   cout<<"\t"<<b[i][j];
	 }
	 cout<<endl;
   }
	for(i=0;i<2;i++)
   {
	 for(j=0;j<2;j++)
	 {
	   c[i][j]=a[i][j]+b[i][j];
	 }
	 cout<<endl;
   }
   cout<<"The addition matrix is"<<endl;
   for(i=0;i<2;i++)
   {
	 for(j=0;j<2;j++)
	 {
	   cout<<"\t"<<c[i][j];
	 }
	 cout<<endl;
   }
   getch();
}
*/

								//Functions//

//(1)Subtraction nd Division:

/*
#include<iostream.h>
#include<conio.h>
float sub(float x , float y);
float div(float x , float y);
float sub(float x , float y)
{
  float z;
  z=x-y;
  return(z);
}
float div(float x , float y)
{
  float z;
  z=x/y;
  return(z);
}
void main()
{
  int a,b;
  clrscr();
  cout<<"Enter two nos: "<<endl;
  cin>>a>>b;
  cout<<"The Subtraction of the entered nos is: "<<sub(a,b)<<endl;
  cout<<"The Division of the entered nos is: "<<div(a,b);
  getch();
}
*/

//(2)Circumference of circle:

/*
#include<iostream.h>
#include<conio.h>
float circum(float x);
float circum(float x)
{
  float z;
  z=2*x*3.14;
  return(z);
}
void main()
{
  float r;
  clrscr();
  cout<<"Enter the radius of the circle: "<<endl;
  cin>>r;
  cout<<"The Circumference of the circle is: "<<circum(r);
  getch();
}
*/

//(3)Armstrong no:

/*
#include<iostream.h>
#include<conio.h>
void main()
{
  int n,r=0,t=0,s=0;
  clrscr();
  cout<<"Enter a no: "<<endl;
  cin>>n;
  t=n;
  while(n!=0)
  {
	r=n%10;
	s=s+(r*r*r);
	n=n/10;
  }
  if(s==t)
  {
	cout<<"It is an Armstrong no"<<endl;
  }
  else
  {
	cout<<"It is NOT an Armstrong no"<<endl;
  }
  getch();
}
*/

//(4)Palindrome:

/*
#include<iostream.h>
#include<conio.h>
void main()
{
  long n,r=0,t=0,s=0;
  clrscr();
  cout<<"Enter a no: "<<endl;
  cin>>n;
  t=n;
  while(n!=0)
  {
	r=n%10;
	s=(s*10)+r;
	n=n/10;
  }
  if(s==t)
  {
	cout<<"It is a Palindrome"<<endl;
  }
  else
  {
	cout<<"It is NOT a Palindrome"<<endl;
  }
  getch();
}
*/

//(5)Fibonacci:

/*
#include<iostream.h>
#include<conio.h>
void main()
{
  int n,i,nx,f=0,s=1;
  clrscr();
  cout<<"Enter the upper limit: "<<endl;
  cin>>n;
  for(i=0;i<=n;i++)
  {
	nx=f+s;
	f=s;
	s=nx;
	cout<<nx<<endl;
  }
  getch();
}
*/

//01.06.13

							 //Classes and Objects//

//(1)public:

/*
#include<iostream.h>
#include<conio.h>
class optns
{
  public:
  int a,b;
  int sum(int a, int b)
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
  float div(int a, int b)
  {
	return(a/b);
  }
};
void main()
{
  optns obj;
  int p,q;
  clrscr();
  cout<<"Enter two nos: "<<endl;
  cin>>p>>q;
  cout<<"The Addition of "<<p<<" and "<<q<<" is "<<obj.sum(p,q)<<endl;
  cout<<"The Multiplication of "<<p<<" and "<<q<<" is "<<obj.mul(p,q)<<endl;
  cout<<"The Subtraction of "<<p<<" and "<<q<<" is "<<obj.sub(p,q)<<endl;
  cout<<"The Division of "<<p<<" and "<<q<<" is "<<obj.div(p,q)<<endl;
  getch();
}
*/

//(2)Private:

/*
#include<iostream.h>
#include<conio.h>
class prit
{
  private:
  int a,b,c;

  public:

  void getdata()
  {
	cout<<"Enter two nos: "<<endl;
	cin>>a>>b;
  }
  int calculation()
  {
	c=0;
	c=a+b;
	return(c);
  }
  void showdata()
  {
	cout<<"The sum of "<<a<<" and "<<b<<" is "<<c<<endl;
  }
};
void main()
{
   prit d;
   clrscr();
   d.getdata();
   d.calculation();
   d.showdata();
   getch();
}
*/

//(3)To calculate cube of data:

/*
#include<iostream.h>
#include<conio.h>
class cube
{
  private:

  int a,b;

  public:

  void getdata()
  {
	cout<<"Enter a no: "<<endl;
	cin>>a;
  }
  int calc()
  {
	b=0;
	b=(a*a*a);
	return(b);
  }
  void showdata()
  {
	cout<<"The Cube of "<<a<<" is "<<b<<endl;
  }
};
void main()
{
  cube c;
  clrscr();
  c.getdata();
  c.calc();
  c.showdata();
  getch();
}
*/

//(4) Using multiple objects:

/*
#include<iostream.h>
#include<conio.h>
 class box
 {
	private:

	double length;
	double breadth;
	double height;
	double volume1;
	double volume2;

	public:

	void getdata1()
	{
	  cout<<"Enter the dimensions of 1st box: "<<endl;
	  cin>>length>>breadth>>height;
	}

	void getdata2()
	{
	  cout<<"Enter the dimensions of 2nd box: "<<endl;
	  cin>>length>>breadth>>height;
	}
	int calc1()
	{

	  volume1=length*breadth*height;
	  return(volume1);
	}

	int calc2()
	{

	  volume2=length*breadth*height;
	  return(volume2);
	}

	void showdata1()
	{
	  cout<<"The volume of 1st box is: "<<volume1<<endl;
	}

	void showdata2()
	{
	  cout<<"The volume of 2nd box is: "<<volume2<<endl;
	}
 };
 void main()
 {
   box box1;
   box box2;
   clrscr();
   box1.getdata1();
   box1.calc1();
   box1.showdata1();
   getch();
   clrscr();
   box2.getdata2();
   box2.calc2();
   box2.showdata2();
   getch();
}
*/


							  //Inheritance//

//(1)Single inheritance eg.1:

/*
#include<iostream.h>
#include<conio.h>
  class base
  {
	public:
	int a;
	void getdata()
	{
	   cout<<"Enter value"<<endl;
	   cin>>a;
	}
  };

  class der:private base
  {
	public:
	 void calc()
	 {
	  getdata();
		cout<<"Cube is "<<a*a*a<<endl;
	 }
  };

  void main()
  {
	 der d;

	 clrscr();
	 d.calc();
	 getch();
}
*/

//(2)Single inheritance eg.2:

/*
#include<iostream.h>
#include<conio.h>
  class base
  {
	 public:
	 float r;
	 void accept()
	 {
		cout<<"Enter radius"<<endl;
		cin>>r;
	 }
  };

  class der:public base
  {
	 float area,pi;
	 public:

	 void calc();
	 void show();
  };

  void der::calc()
  {
	// accept();
	 area=0,pi=3.14;
	 area=r*r*pi;
  }
  void der::show()
  {
	 cout<<"Area of circle is "<<area<<endl;
  }

  void main()
  {
	 der d;
	 clrscr();
	 d.accept();
	 d.calc();
	 d.show();
	 getch();
}
*/

//(3)Multiple inheritance eg.1:

/*
#include<iostream.h>
#include<conio.h>
class base1
{
   public:

   int a,b;
   void add()
   {
	  a=10, b=15;
	  cout<<"Addition is "<<a+b<<endl;
   }
};

class base2
{
   public:

   int c,d;
   void sub()
   {
	  c=20, d=5;
	  cout<<"Substraction is "<<c-d<<endl;
   }
};
class base3
{
   public:

   int x,y;
   void pro()
   {
	  x=5,y=2;
	  cout<<"Product is "<<x*y<<endl;
   }
};


class der:public base1, public base2, public base3
{
	public:
	void show()
	{
	   add();
	   sub();
	   pro();
	}
};

void main()
{
   der d;
   clrscr();
   d.show();
   getch();
}

*/

//(4)Multiple inheritance eg.2:

/*
#include<iostream.h>
#include<conio.h>
class circle
{
   public:
	int r;
   void getdata1()
   {

	  cout<<"Enter radius"<<endl;
	  cin>>r;
   }
};

class square
{
   public:
	int s;
   void getdata2()
   {

	  cout<<"Enter side"<<endl;
	  cin>>s;
   }
};

class rect
{
   public:
	int l,b;
   void getdata3()
   {

	  cout<<"Enter length"<<endl;
	  cin>>l;
	  cout<<"Enter breath"<<endl;
	  cin>>b;
   }
};

class calc:public circle, public square, public rect
{
  float pi;
  public:
  void cal1()
  {
	  pi=3.14;
	  cout<<"Area of circle is "<<r*r*pi<<endl;
	  cout<<"Area of square is "<<s*s<<endl;
	  cout<<"Area of rectangle is "<<l*b<<endl;
  }
};

void main()
{
  calc c;
  clrscr();
  c.getdata1();
  c.getdata2();
  c.getdata3();
  c.cal1();
  getch();
}
*/


