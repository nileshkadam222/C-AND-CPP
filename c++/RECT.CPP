#include<iostream.h>
#include<conio.h>
class crectangle
{
	int x,y;
	public:
		void set_values(int,int);
		int area(void)
		{ return(x*y);
		}
};
	void crectangle::set_values(int a,int b)
	{
		x=a;
		y=b;
	}
		//main prog.

		int main()
		{
		clrscr();

		  cout<<"the area is "<<endl;
		  crectangle rect,rectb;
		  rect.set_values(3,4);
		  rectb.set_values(5,6);
		  cout<<"rect area:"<<rect.area()<<endl;
		  cout<<"rect area:"<<rectb.area()<<endl;
		  getch();
		  return 0;
}






