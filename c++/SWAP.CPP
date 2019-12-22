/* swapping*/

#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>

class reversestr
{
	public:
		char str[256];
		int len;
		void getstr();
		{
			cout<<"enter string::to terminate string press key";
			char ch;
			strcpy(str," ");
			int i=0;
			do
			{
				scanf("%c",&ch);
				str[i=ch;i++;
			}
				while(str,'\0');
				len=i-1;
				strcat(str,'\0');
		}
			void reverse()
			{
				char t;
				for(inti=0;i<len/2;i++)
				{
					t=str[len-i-1]=str[i];
					str[i]=t;
				}
					cout<<endl;
					for(i=0;i<len;i++)
					{
						cout<<str[i];
					}
						cout<<endl<<endl;
			};
				void main()
				{
					clrscr();
					reverse str string;
					string getstr();
					string reverse();
					getch();
				}

}