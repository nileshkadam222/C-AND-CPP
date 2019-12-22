#include"iostream.h"
#include"conio.h"
class csq;
class crect
{
int w,h;
public:

int area (void)
{
return(w*h);
}

void convert(csq a);
};


class csq
{
private:
int side;
public:
void set_side(int a)
{
side= a;
}
friend class crect;
};
void crect::convert(csq a)
{
w=a.side;
h=a.side;
}
int main()
{
clrscr();
csq sq;
crect rect;
sq.set_side(5);
rect.convert(sq);
cout<<"rect area()="<<rect.area();
getch();
return 0;
}

