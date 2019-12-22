#include<iostream.h>
#include<conio.h>
class detailed_info
{
public:
		char name[10];
		long int rollno;
		char faculty [10];
public:
		void getdata();
		void display();
};
class subj_info : public detailed_info
{
private:
		char sub1[10];
		char sub2[10];
		char sub3[10];
		int m1 ;
		int m2;
		int m3;
		int grand_total;
public:
		void getdata();
		void display();
};

void detailed_info::getdata()
{
		cout<<"enter the name:";
		cin>>name;
		cout<<"enter the rollno:";
		cin>>rollno;
		cout<<"enter the faculty:";
		cin>>faculty;
}
void detailed_info::display()
{
		cout<<name<<"\t";
		cout<<rollno<<"\t";
		cout<<faculty<<"\t";
}
void subj_info :: getdata()
{
		detailed_info::getdata();
		cout<<"\nenter the name of the sub1:";
		cin>>sub1;
		cout<<"\nenter the marks";
		cin>>m1;
		cout<<"\nenter the name of the sub2:";
		cin>>sub2;
		cout<<"\nenter the marks";
		cin>>m2;
		cout<<"\nenter the name of the sub 3:";
		cin>>sub3;
		cout<<"\nenter the marks";
		cin>>m3;

grand_total=m1+m2+m3;

}
void subj_info::display()
{
		detailed_info::display();
		cout<<sub1<<"\n";
		cout<<m1<<"\n";
		cout<<sub2<<"\n";
		cout<<m2<<"\n";
		cout<<sub3<<"\n";
		cout<<m3<<"\n";
		cout<<"\ngrand_total:";
cout<<grand_total;
if(grand_total>100)
{
cout<<"pass";
}
else
{
cout<<"fail";
}
}
void main()
{
clrscr();
cout<<"name\trollno\tfaculty
subj_info s;
s.getdata();
s.display();
getch();
}
