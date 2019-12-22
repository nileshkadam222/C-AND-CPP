#include"iostream.h"
#include"conio.h"
class comp
{
float x,y;
public:
comp() {}
comp(float a) {x=y=a;}
 comp(float real, float imag )
 {x=real;y=imag;}
 friend comp sum(comp,comp);
 friend void show(comp);
 };
 comp sum(comp c1,comp c2)
 {
 comp c3;
 c3.x=c1.x+c2.x;
 c3.y=c1.y+c2.y;
 return(c3);
 }
 void show(comp c)
 {
 cout<<c.x<<"+j"<<c.y<<"\n";
 }
 main()
 {
 comp p,q,r;
 p=comp(2.5,3.9);
 q=comp(1.6,2.5);
 r=sum(p,q);
 cout<<"\n";
 cout<<"p=";show(p);
 cout<<"q=";show(q);
 cout<<"r=";show(r);
 getch();
 return 0;
 }

