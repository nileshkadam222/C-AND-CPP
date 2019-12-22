#include"iostream.h"
#include"conio.h"
class crect
{
int w,h;
public:
void set_values(int,int);
int area(void)
{
return(w*h);
}
friend crect duplicate(crect);
};
void crect::set_values(int a,int b)
{
w=a;
h=b;
}
crect duplicate(crect rectparam)
{
crect rectres;
rectres.w=rectparam.w*2;
rectres.h=rectparam.h*2;
return(rectres);
}
int main()
{
crect rect,rectb;
rect.set_values(5,9);
rectb=duplicate(rect);
cout<<rectb.area()<<"area";
getch();
return 0;
}

