#include<iostream.h>
#include<conio.h>}
class addition
{
int a;
int b;
int c;
public:
int sum(int a,int b);
};
int addition::sum(int a,int b)
{
c=a+b;
return c;

}
void main()
{
addition ad;
int s;
clrscr();
s=ad.sum(10,6);
cout<<"sum is:"<<s;
getch();
}
