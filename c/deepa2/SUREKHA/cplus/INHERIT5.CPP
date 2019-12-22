#include<iostream.h>
#include<conio.h>
class student
{
   protected:
	  int roll_no;
   public:
	   void get_number(int a)
	   {
		   roll_no=a;
	   }
	   void put_number()
	   {
		  cout << "rollno:" << roll_no << "\n";
	   }
};
class test : public student
{
	protected:
	   float part1,part2;
	public:
	 void get_marks(float x,float y)
	 {
		part1=x;
		part2=y;
	 }
	 void put_marks()
	 {
		cout << "marks obtained: " << "\n";
		cout << "part1" << part1;
		cout << "part2:" << part2;
		getch();
	 }
  };
  class sports
  {
	 protected:
		  float score;
		  public:
			  void get_score(float s)
			  {
				 score=s;
			  }
			  void put_score()
			  {
				  cout << "sports wt : " << score;
			   }
	};
	class result : public test,public sports
	{
		float total;
		public:
		   void display();
	 };
	 void result :: display()
	 {
		 total=part1 +part2+score;
		 put_number();
		 put_marks();
		 put_score();
		 cout << "total score: " << total << "\n";
		 getch();
	  }
	  void main()
	  {
		  result stu1;
		  clrscr();
		  stu1.get_number(1234);
		  stu1.get_marks(12.7,89.5);
		  stu1.get_score(6.0);
		  stu1.display();
		  getch();
	   }

