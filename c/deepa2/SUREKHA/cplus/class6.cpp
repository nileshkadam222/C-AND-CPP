#include<iostream.h>
#include<conio.h>
class set
{
int m,n;
public:
void input(void);
void display(void);
int largest(void);
};
int set::largest(void)
{
if(m>=n)
return(m);
else
return(n);
}
void set::input(void)
{
cout<<"input values of m and n:"<<"\n";
cin>>m>>n;
}
void set::display(void)
{
cout<<"largest values="
	<<largest() <<"\n";//calling member funtion
}
void main()
{
set a;
clrscr();
a.input();
a.display();
getch();
}

