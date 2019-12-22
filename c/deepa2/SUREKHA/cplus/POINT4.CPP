#include<iostream.h>
#include<conio.h>
#include<string.h>
class person
{
   char name[20];
   float age;
   public:
	  person(char *s,float a)
	  {
		 strcpy(name,s);
		 age=a;
	  }
	  person &person :: greater(person &x)
	  {
		 if(x.age >=age)
			  return x;
		 else
		   return *this;
	 }
	 void display()
	 {
		 cout << "name: " << name << "\n";
		 cout << "age:" << age<<"\n";
		 getch();
	}
};
void main()
{
   person p1("john",37.50);
   person p2("ahmed",29.0);
   person p3("hebber",40.25);
   person p('\0',0);
   p=p1.greater(p3);
   cout  << "elder person is: \n";
   p.display();
   p=p1.greater(p2);
   cout << "elder person is: \n";
   p.display();
}
