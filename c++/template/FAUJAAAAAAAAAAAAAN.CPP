//C++
/*
//Wap to display number sum of it:
#include<iostream.h>
#include<conio.h>
void main()
{
 int a, b, c=0;
 clrscr();
 cout<<"Enter number for a ";
 cin>>a;
 cout<<"Enter number for b ";
 cin>>b;
 c=a+b;
 cout<<"The Sum is "<<c;
 getch();
}




//Wap to display number for 10 times:
#include<iostream.h>
#include<conio.h>
void main()
{
 int i;
 clrscr();
 for(i=1;i<=10;i++)
  {
   cout<<"\n"<<i;
  }
  getch();
}



//Wap to Display number using while loop:
#include<iostream.h>
#include<conio.h>
void main()
{
 int i=1;
 clrscr();
 while(i<=10)
 {
  cout<<"\n"<<i;
  i++;
 }
 getch();
}



//wap to display whether EVEN or ODD:
#include<iostream.h>
#include<conio.h>
void main()
{
 int i;
 clrscr();
 cout<<"Enter a number: ";
 cin>>i;
 if(i%2==0)
  {
   cout<<"\n"<<i<<" is an Even no ";
  }
 else
  {
   cout<<"\n"<<i<<" is an Odd no ";
  }
  getch();
}



//Wap to display Array:
#include<iostream.h>
#include<conio.h>
void main()
{
 int a[5], i;
 clrscr();
 cout<<"Enter an Array Element ";
 for(i=1;i<=5;i++)
 {
  cin>>a[i];
 }
 for(i=1;i<=5;i++)
 {
  cout<<"\n"<<a[i];
 }
 cout<<"\n";
 getch();
}



//Class and objects:25-4-13
//Public
#include<iostream.h>
#include<conio.h>
class fruits
{
  public:
  void fru()
  {
   cout<<"Mango"<<endl;
   cout<<"Apple"<<endl;
   cout<<"Strawberry"<<endl;
  }
};

void main()
{
 fruits f;
 clrscr();
 f.fru();
 getch();
}

//Public 2:
#include<iostream.h>
#include<conio.h>
class items
{
 public:
 void fruits()
 {
  cout<<"Mango"<<endl;
  cout<<"Apple"<<endl;
  cout<<"Strawberry"<<endl;
 }
 void vegetables()
 {
  cout<<"Onion"<<endl;
  cout<<"Tomato"<<endl;
  cout<<"Spinach"<<endl;
 }
};

void main()
{
 items i;
 clrscr();
 cout<<"Fruits"<<endl<<endl;
 i.fruits();
 cout<<endl;
 cout<<"Veggies"<<endl<<endl;
 i.vegetables();
 getch();
}


//Public 3:
#include<iostream.h>
#include<conio.h>
class items
{
 public:
 void fruits()
 {
  cout<<"Mango"<<endl;
  cout<<"Apple"<<endl;
  cout<<"Strawberry"<<endl;
 }
 void vegetables()
 {
  cout<<"Onion"<<endl;
  cout<<"Tomato"<<endl;
  cout<<"Spinach"<<endl;
 }
};

void main()
{
 items i1;
 items i2;
 clrscr();
 cout<<"Fruits"<<endl;
 i1.fruits();
 cout<<endl;
 cout<<"Veg"<<endl;
 i2.vegetables();
 getch();
}
*/


/*


//Private and public
#include<iostream.h>
#include<conio.h>
class items
{
 private:
 void fruits()
 {
  cout<<"Fruits"<<endl<<endl;
  cout<<"Mango"<<endl;
  cout<<"Apple"<<endl;
  cout<<"Orange"<<endl;
 }
 public:
 void vegetables()
 {
  fruits();
  cout<<"Veg"<<endl<<endl;
  cout<<"Tomato"<<endl;
  cout<<"Onion"<<endl;
  cout<<"Spinach"<<endl;
 }
};

void main()
{
 items i;
 clrscr();
 //cout<<"fruits"<<endl;
 //i.fruits();
 cout<<endl;
 //cout<<"Veg"<<endl;
 i.vegetables();
 getch();
}
  */
  /*
//class:26-4-13
#include<iostream.h>
#include<conio.h>
class arth
{
 //  private:
 //  int a, b;

   public:
   int a, b;
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
   int div(int a, int b)
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


*/
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
		cout<<"Entre a number"<<endl;
		cin>>a;
		cout<<"Enter another numbner"<<endl;
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
	   calc();
	   cout<<"The sum is "<<c<<endl;
	 }
};

void main()
{
   arth r;
   clrscr();
   r.getdata();
  // r.calc();
   r.showdata();
   getch();
}
*/
/*

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
 */
/*

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
*/

/*
//Class: Declare function in class and body out side the class
#include<iostream.h>
#include<conio.h>
class vegetables
{
 public:
 void veggies();
};
void vegetables:: veggies()
{
 cout<<"Spinach"<<endl;
 cout<<"Onion"<<endl;
 cout<<"Tomato"<<endl;
}

void main()
{
 vegetables v;
 clrscr();
 cout<<"Vegetables"<<endl<<endl<<endl;
 v.veggies();
 getch();
} */

/*
//Wap to display class using 2 variables
//declare inside the class and define function body outside the class
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
 cout<<"Enter number 1: "<<endl;
 cin>>a;
 cout<<"Enter number 2: "<<endl;
 cin>>b;
}
void putdata()
{
 cout<<"The Value of a is: "<<a<<endl;
 cout<<"The Value of b is: "<<b<<endl;
}
void main()

*/


/*
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

/*
#include<iostream.h>
#include<stdio.h>
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
  cout<<" a= "<<x;
  cout<<"\n b= "<<y;
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



#include<iostream.h>
#include<conio.h>
class circle
{
 private:
 float a, pi;
 public:
 void area (float rad);
 void show();
 };

 void circle:: area (float rad)
 {
  pi=3.14;
  a=rad*rad*pi;
 }

 void circle::show()
 {
  cout<<"The area is "<<a;
 }

 void main()
{
 circle c;
 int r;
 clrscr();
 cout<<"Enter a radius"<<endl;
 cin>>r;
 c.area(r);
 c.show();
 getch();
}



#include<iostream.h>
#include<conio.h>
class circle
{
 private:
 float x,a,pi;
 public:
 void assign (float x1);
 void calc();
 void disp();
 };

 void circle:: assign (float x1)
{
 x=x1;
}
void circle:: calc()
{
 pi=3.14;
 a=x*x*pi;
}
void circle::disp()
{
 cout<<"The area is "<<a;
}

void main()
{
 circle c;
 int r;
 clrscr();
 cout<<"Enter the radius "<<endl;
 cin>>r;
 c.assign(r);
 c.calc();
 c.disp();
 getch();
}



#include<iostream.h>
#include<stdio.h>
#include<conio.h>

class test
{
 private:
 int a;
 public:
 void ivalue()
 {
  cout<<"Enter an integer :";
  cin>>a;
 }
 void ovalue()
 {
  cout<<"Variable entered is :";
  cout<<a<<"\n";
 }
};

void main()
{
 test t;
 clrscr();
 t.ivalue();
 t.ovalue();
 getch();
}


//Objects as Function arguement:

#include<iostream.h>
#include<stdio.h>
#include<conio.h>

class time
{
 int hr;
 int min;
 int sec;

 public:
 void gettime()
 {
  cout<<"Enter Hour :";
  cin>>hr;
  cout<<"Enter Minutes :";
  cin>>min;
  cout<<"Enter seconds :";
  cin>>min;
 }

 void add(time t1, time t2)
 {
  time t3;
  t3.hr= t1.hr+t2.hr;
  t3.min= t1.min+t2.min;
  t3.sec= t1.sec+t2.sec


//Destructor

#include<iostream.h>
#include<conio.h>

class Crectangle
{
 int *width, *height;
 public:
 Crectangle(int, int);//contructor
 ~Crectangle();//Destructor
 int area()
 {
  return((*width)*(*height));
 }
 };
 Crectangle:: Crectangle(int a, int b)
 {
  width= new int;
  height= new int;
  *width=a;
  *height=b;
 }
 Crectangle:: ~Crectangle()
 {
  delete width;
  delete height;
 }

 void main()
 {
  Crectangle rect(3,4), rectb(5,6);
  clrscr();
  cout<<"rect area :"<<rect.area()<<endl;
  cout<<"rectb area :"<<rectb.area()<<endl;
  getch();
 }

 */


 /*
#include<iostream.h>
#include<conio.h>
class cube
{
   public:
   int a;
   void getdata()
   {
	  cout<<"Enter value"<<endl;
	  cin>>a;
   }
};
class cube1:public cube
{
   int ans;
   public:
   void calc()
   {
	  ans=a*a*a;
   }
   void show()
   {
	  cout<<"Cube is "<<ans;
   }
};

void main()
{
   cube1 c;
   clrscr();
   c.getdata();
   c.calc();
   c.show();
   getch();
}



#include<iostream.h>
#include<conio.h>
class cube
{
   public:
   int a;
   void getdata();

};
 void getdata()
   {
	  cout<<"Enter value"<<endl;
	  cin>>a;
   }
class cube1:public cube
{
   int ans;
   public:
   void calc();
   void show();

};

void calc()
   {
	  ans=a*a*a;
   }
void show()
   {
	  cout<<"Cube is "<<ans;
   }

void main()
{
   cube1 c;
   clrscr();
   c.getdata();
   c.calc();
   c.show();
   getch();
}


  #include<iostream.h>
  #include<conio.h>
  #include<string.h>
  class record
  {
	 private:
	 void disp()
	 {
		 cout<<"Student's Detials"<<endl;
	 }

	 public:
	 int s_no;
	 char sname[30], ssub[30];
	 void getdata()
	 {
		disp();
		cout<<"Enter the students details"<<endl;
		cin>>s_no>>sname>>ssub;
	 }
  };

  class recordshow:public record
  {
	 private:
	 int s_no1;
	 char sname1[30], ssub1[30];
	 public:
	 void assign()
	 {
		s_no1=s_no;
	   //	sname1[30]=sname[30];
		//ssub1[30]=ssub[30];
		strcpy(sname1,sname);
		strcpy(ssub1,ssub);
	 }
	 void display()
	 {
		cout<<"Student number is :-)"<<s_no1<<endl;
		cout<<"Student name is :-)"<<sname1<<endl;
		cout<<"Student sub is :-)"<<ssub1<<endl;
	 }
};

void main()
{
 // record r;
  recordshow rs;
  clrscr();
  rs.getdata();
  rs.assign();
  clrscr();
  rs.display();
  getch();
 }





#include<iostream.h>
#include<conio.h>
  class A
  {
	 public:
	  int a;
	  void get()
	  {
		cout<<"\n Enter value of a   :";
		cin>>a;
	  }
	  void set()
	  {
	   cout<<"\n A     :"<<a<<"\n\n";
	  }
  };
  class B
  {
	public:
	int b;
	void getdata()
	{
	  cout<<"\nEnter value of b   :";
	  cin>>b;
	}
	void setdata()
	{
	  cout<<"\nvalue of B  :"<<b<<"\n\n";
	}
  };
  class C:public B,public A
  {
	 public:
	 int c;
	 void disp()
	 {
	   c=a+b;
	   cout<<"\naddition is    :"<<c<<"\n\n";
	 }
  };
  void main()
  {
	C z;
	clrscr();
	z.get();
	z.set();
	z.getdata();
	z.setdata();
	z.disp();
   //	clrscr();
	getch();
  }




  #include<iostream.h>
  #include<conio.h>
  class base
  {
	 public:
	 int a,b;
	 void getdata()
	 {
		cout<<"Enter number1"<<endl;
		cin>>a;
		cout<<"Enter number2"<<endl;
		cin>>b;
	 }
  };
  class der1:public base
  {
	 public:
	 void add()
	 {
		getdata();
		int c=0;
		c=a+b;
		cout<<"The addition is "<<c<<endl;
	 }
  };
  class der2:public base
  {
	 public:
	 void sub()
	 {  getdata();
		int c=0;
		c=a-b;

		cout<<"The substraction is "<<c<<endl;
	 }
  };
  class der3:public base
  {
	 public:
	 void mul()
	 {
	   getdata();
	   int c=0;
		c=a*b;
		cout<<"The product is "<<c<<endl;
	 }
  };
  class der4:public base
  {
	 public:
	 void div()
	 {
	   getdata();
		int c=0;
		c=a/b;
		cout<<"The division is "<<c<<endl;
	 }
  };

  void main()
  {
	// base b;
	 der1 d1;
	 der2 d2;
	 der3 d3;
	 der4 d4;
	 clrscr();
   //	 b.getdata();
	 d1.add();
	 d2.sub();
	 d3.mul();
	 d4.div();
	 getch();
  }

*/

  #include<iostream.h>
  #include<conio.h>
  class base
  {
	 public:
	 int a,b;
	 void getdata()
	 {
		cout<<"Enter number1"<<endl;
		cin>>a;
		cout<<"Enter number2"<<endl;
		cin>>b;
	 }
  };
  class der1:private base
  {
	 public:
	 void add()
	 {
		getdata();
		int c=0;
		c=a+b;
		cout<<"The addition is "<<c<<endl;
	 }
  };
  class der2:private base
  {
	 public:
	 void sub()
	 {  getdata();

		int c=0;
		c=a-b;

		cout<<"The substraction is "<<c<<endl;
	 }
  };
  class der3:private base
  {
	 public:
	 void mul()
	 {
	   getdata();
	   int c=0;
		c=a*b;
		cout<<"The product is "<<c<<endl;
	 }
  };
  class der4:private base,private der1,private der2,private der3
  {
	 public:
	 void div()
	 {

	   add();
	   sub();
	   mul();

	 }
  };

  void main()
  {
  // base b;
  // der1 d1;
  // der2 d2;
  // der3 d3;
	 der4 d4;
	 clrscr();
  // b.getdata();
  // d4.add();
  // d4.sub();
  // d4.mul();
	 d4.div();
	 getch();
  }








#include<iostream.h>
#include<conio.h>
class student
{
	public:
	char name[20];
	int seat;
	void getd()
	{
	   cout<<"\n Enter student name       :";
	   cin>>name;
	   cout<<"\n Enter seat no            :";
	   cin>>seat;
	}
	void showd()
	{
	  cout<<"\nname        :"<<name;
	  cout<<"\n seat no    :"<<seat;
	}
};
class sem1:public student
{
   public:
   int m1,m2,m3,t1,p1;
   void gets1()
   {
	  cout<<"\n MATHS     :";
	  cin>>m1;
	  cout<<"\n JAVA      :";
	  cin>>m2;
	  cout<<"\n .NET      :";
	  cin>>m3;
   }
   void shows1()
   {
	 cout<<"\n MATH       :"<<m1;
	 cout<<"\n JAVA       :"<<m2;
	 cout<<"\n .NET       :"<<m3;
   }
   void tot1()
   {
	int t1=0;
	t1=m1+m2+m3;
	cout<<"\n TOTAL IN SEM1       :"<<t1;
   }
	void per1()
   {
	int p1=0;
	p1=t1/3;
	cout<<"\n PERCENTAGE IN SEM1       :"<<p1;
   }
};
class sem2:public sem1
{
  public:
  int x1,x2,x3,t2,p2;
  void gets2()
  {
	cout<<"\n POP        :";
	cin>>x1;
	cout<<"\n OOPS       :";
	cin>>x2;
	cout<<"\n ASP.NET    :";
	cin>>x3;
  }
  void shows2()
  {
	cout<<"\n POP          :"<<x1;
	cout<<"\n OOPS         :"<<x2;
	cout<<"\n ASP.NET      :"<<x3;
  }
   void tot2()
   {
	int t2=0;
	t2=x1+x2+x3;
	cout<<"\n TOTAL IN SEM1       :"<<t2;
   }
	void per2()
   {
	int p2=0;
	p2=t2/3;
	cout<<"\n PERCENTAGE IN SEM2       :"<<p2;
   }
};
class sport
 {
	public:
	char sp[20];
	void getsp()
	{
	  cout<<"\n SPORTS NAME        :";
	  cin>>sp;
	}
	void showsp()
	{
	  cout<<"\n SPORTS          :"<<sp;
	}
};

 class sem3:public sport
 {
   public:
   int y1,y2,y3,t3,p3;
   void gets3()
   {
	cout<<"\n CS        :";
	cin>>y1;
	cout<<"\n CN        :";
	cin>>y2;
	cout<<"\n CAM       :";
	cin>>y3;
   }
   void shows3()
   {
	cout<<"\n CS          :"<<y1;
	cout<<"\n CN          :"<<y2;
	cout<<"\n CAM         :"<<y3;
   }
	void tot3()
   {
	int t3=0;
	t3=y1+y2+y3;
	cout<<"\n TOTAL IN SEM1       :"<<t3;
   }
	void per3()
   {
	int p3=0;
	p3=t3/3;
	cout<<"\n PERCENTAGE IN SEM3       :"<<p3;
   }

 };

  class result:public sem2,public sem3

  {
	public:
	int t1,t2,t3;
	float p1,p2,p3;
	void getr()
	{
	  getd();
	  gets1();
	  gets2();
	  gets3();
	  getr();
	  showd();
	  shows1();
	  shows2();
	  shows3();
	  showsp();
	  tot1();
	  tot2();
	  tot3();
	  per1();
	  per2();
	  per3();
		 /* cout<<"\n    TOTAL IN ALL SEMESTER    :";
	  cout<<t1;
	  cout<<t2;
	  cout<<t3;
	  cout<<"\n    PERCENTAGE IN ALL SEMESTER    :";
	  cout<<p1<<"\n"<<p2<<"\n"<<p3<<"\n";              */
	  /*
	}
 };
  void main()
  {
	result r;
	clrscr();
	r.getr();
	getch();
  }




//Inheritance-- for cube
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
class cube
{
 public:
 int a;
 void getdata()
 {
 cout<<"Enter a value"<<endl;
 cin>>a;
 }
};
class cube1:public cube
{
 int ans;
 public:
 void calc()
 {
   ans=a*a*a;
 }

 void show()
 {
  cout<<"The cube is   :"<<ans<<endl;
 }
};

void main()
{
 cube1 c;
 clrscr();
 c.getdata();
 c.calc();
 c.show();
 getch();
}



//Inheritance-- for student record

#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>
class record
{
 private:
 void disp()
 {
  cout<<"Student Details  :"<<endl;
 }

 public:
 int s_no;
 char sname[30], ssub[30];
 void getdata()
 {
  disp();
  cout<<"Enter the Student details  :"<<endl;
  cin>>s_no>>sname>>ssub;
 }
};

class recordshow: public record
{
 private:
 int s_no1;
 char sname1[30], ssub1[30];
 public:
 void assign()
 {
  s_no1=s_no;
  //sname1=sname;
  //ssub1=ssub;
  strcpy(sname1,sname);
  strcpy(ssub1,ssub);
 }

 void display()
 {
  cout<<"Student No is        : "<<s_no1<<endl;
  cout<<"Student Name is      : "<<sname1<<endl;
  cout<<"Student Subject is   : "<<ssub1<<endl;
 }

};

void main()
{
 //record r;
 recordshow rs;
 clrscr();
 rs.getdata();
 rs.assign();
 rs.display();
 getch();
}




//Ingeritance: Inherit A and B clac in C

#include<iostream.h>
#include<stdio.h>
#include<conio.h>

class A
{
 public:
 int a;
 void getdata()
 {
  cout<<"Enter value for A  : "<<endl;
  cin>>a;
 }

  friend void disp(A d);
  void disp(A d)
  {
  cout<<"\n A  :"<<d.a<<"\n \n";
 }
};
/* void disp(A d)
{
  cout<<"\n A  :"<<d.a<<"\n \n";
 }

class B
{
 public:
 int b;
 void getdata1()
 {
  cout<<"Enter value for B  : "<<endl;
  cin>>b;
 }

  friend void disp1(B e);
  void disp1(B e)
 {
  cout<<"\n  B  :"<<b<<"\n \n";
 }
};

 void disp1(B e)
{
  cout<<"\n  B  :"<<e.b<<"\n \n";
 }

class C: public A, public B
{
 public:
 int c;

 void display()
 {

  c=a+b;
  cout<<"\n Addition is       : "<<c<<"\n \n";
  c=a-b;
  cout<<"\n Substraction is   : "<<c<<"\n \n";
  c=a/b;
  cout<<"\n Division is       : "<<c<<"\n \n";
  c=a*b;
  cout<<"\n Product is        : "<<c<<"\n \n";
 }
};

void main()
{
 A d1;
 B e1;
 C z;
 clrscr();
 z.getdata();
// z.disp();
 z.getdata1();
// z.disp1();
// cout<<"\n  A  : "<<A(z)<<endl;
 //cout<<"\n  B  : "<<B(z)<<endl;
 d1.disp();
 e1.disp1();
 cout<<endl;
 z.display();
 getch();
}
  */