#include<iostream.h>
#include<conio.h>
#include<string.h>
class city
{
   protected:
	 char *name;
	 int len;
   public:
	 city()
	 {
		len=0;
		name=new char[len+1];
	 }
	 void getname()
	 {
		char *s;
		cout<<"enter city name:";
		cin>>s;
		len=strlen(s);
		name=new char[len+1];
		strcpy(name,s);
	 }
	 void printname(void)
	 {
		cout<<"name:"<<name<<"\n";
		getch();
	 }
};
void main()
{
	 city  *cptr[10];
	 int n=1;
	 int option;
	 clrscr();
	 do
	 {
		cptr[n]=new city;
		cptr[n]->getname();
		n++;
		cout<<"do you want to enter one more name?\n";
		cout<<"(enter 1 for yes 0 for no):";
		cin>>option;
		}while(option);
	 cout<<"\n\n";
	 for(int i=1;i<=n;i++)
	 {
		cptr[i]->printname();
		getch();
	 }
}