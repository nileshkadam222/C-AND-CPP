/* to write details of bank account*/

#include<iostream.h>
#include<conio.h>
class bank_account
{
	public:
		char *name;
		int an;
		float balance;
		void disp();
		float depo_amt(float amt);
		float withdraw_amt(float amt);
};
	void bank_account::disp()
	{
		cout<<"account no.:="<<an<<endl;
		cout<<"account name:"<<name<<endl;
		cout<<"balance amt:"<<balance<<endl;
	}
		float bank_account::depo_amt(float amt)
		{
			balance=balance+amt;
			return balance;
		}
			float bank_account::withdraw_amt(float amt)
			{
				balance=balance-amt;
				return balance;
			}
			void main()
			{
				clrscr();
				float x,y;
				bank_account trec1;
				trec1.name="deepak";
				trec1.an=10;
				trec1.balance=500;
				trec1.disp();
				x=trec1.depo_amt(3000);
				cout<<"\n depo.amt:"<<endl;
				cout<<"\n updated amt:"<<x<<endl;
				y=trec1.withdraw_amt(1000);
				cout<<"\n withdrawing amt:"<<endl;
				cout<<"\n updated amt:"<<y<<endl;
				getch();
			}

