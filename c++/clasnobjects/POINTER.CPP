#include<iostream.h>
#include<conio.h>
int main()
{
clrscr();
int *ip[3];
int f=65,s=67,t=69;
ip[0]=&f;
ip[1]=&s;
ip[2]=&t;
for(int i=0;i<3;i++)
cout<<"the pointer ip ["<<i<<"] points to "<<*ip[i]<<endl;
cout<<"base address of arrray ip of pointers is "<<ip<<endl;
for(i=0;i<3;i++)
cout<<"the address stored in ip ["<<i<<"] is "<<ip[i]<<endl;
getch();
return 0;
}

