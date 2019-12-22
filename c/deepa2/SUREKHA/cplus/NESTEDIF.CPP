/*wap to` find the given no is odd/even.
#include<iostream.h>
#include<conio.h>
void main()
{
int n;
clrscr();
cout<<"enter no:";
cin>>n;
if(n%2==0)
cout<<"no is even";
else
cout<<"no is odd";
getch();
}



//wap to find the given char is vowel or not.
#include<iostream.h>
#include<conio.h>
void main()
{
char ch;
clrscr();
cout<<"enter char:";
cin>>ch;
if(ch=='a' || ch=='e' ||ch=='i' || ch=='o' ||ch=='u')
cout<<"it is vowel";
else
cout<<"not vowel";
getch();
}
*/
//nested if..else:
#include<iostream.h>
#include<conio.h>
void main()
{
char ch;
clrscr();
cout<<"Enter any letter:";
cin>>ch;
if(ch=='a' || ch=='e' || ch=='o' || ch=='i' || ch=='u')
cout<<"Letter is vowel";
else
cout<<"Letter is not a vowel";
getch();
}