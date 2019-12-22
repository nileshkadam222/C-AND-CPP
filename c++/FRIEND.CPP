#include"iostream.h"
#include"conio.h"
class loc
{
int longi,lati;
public:
loc() {}
loc(int lg,int lt)
{
longi=lg;
lati=lt;
}
void show()
{
cout<<longi<<" ";
cout<<lati<<"\n";
}

friend loc operator+(loc op1,int op2);
friend loc operator+(int op1,loc op2);
};
loc operator+(loc op1,int op2)
{
loc temp;
temp.longi=op1.longi+op2;
temp.lati=op1.lati+op2;
return temp;
}
loc operator+( int op1,loc op2)
{
loc temp;
temp.longi=op1+op2.longi;
temp.lati=op1+op2.lati;
return temp;
}
int main()
{
loc ob1(10,20),ob2(5,30),ob3(7,14);
ob1.show();
ob2.show();
 ob3.show();
 ob1=ob2+10;
 ob3=10+ob2;
 ob1.show();
 ob3.show();
 getch();
 return 0;
 }
