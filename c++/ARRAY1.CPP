#include"iostream.h"
#include"conio.h"
class vehi
{
int vcode;
char vname[30];

public:
void getdata(void);
void putdata(void);
};
void vehi::getdata(void)
{
cout<<"enter vcode";
cin>>vcode;
cout<<"enter vname";
cin>>vname;
}
void vehi::putdata(void)
{
cout<<"code"<<vcode<<"\n";
cout<<"name"<<vname<<"\n";
}
const int size=3;
int main()
{
vehi  v1[size];
for(int i=0;i<size;i++)
{
cout<<"\ndetails of vehi"<<i+1<<"\n";
v1[i].getdata();
}
cout<<"\n";
for(i=0;i<size;i++)
{
cout<<"\n vehi"<<i+1<<"\n";
v1[i].putdata();
}
getch();
return 0;
}