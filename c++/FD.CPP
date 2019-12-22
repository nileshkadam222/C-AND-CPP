		    #include"iostream.h"
		   # include"conio.h"
		   class fd
		   {
		   long int p_amount;
		   int year;
		   float rate,r_val;
		   public:
		   fd() {}
		   fd(long int p,int y,float r=0.12);
		   fd(long int p,int y,int r);
		   void display (void);

		   };
		   fd::fd(long int p,int y,float r)
		   {
		   p_amount=p;
		   year=y;
		   rate=r;
		   r_val=p_amount;
		  for(int i=1;i<=y;i++)
		  r_val=r_val*(1.0+r);
		 }
		 fd::fd(long int p,int y,int r)

	     {
	     p_amount=p;
	     year=y;
	     rate=r;
	     r_val=p_amount;
	     for(int i=1;i<=y;i++)
	     r_val=r_val*(1.0+float(r)/100);
	     }
	     void fd::display(void)
	     {
	     cout<<"\n"<<"p amount="<<p_amount<<"\n";
	     cout<<"r_val="<<r_val<<"\n";
	     }

	     main()
	     {
	     fd fd1,fd2,fd3;
	     long int p;
	     int y;
	     float R;
	     int r;
		  cout<<" enter amount period int rate";
		  cin>>p>>y>>R;
		  fd1=fd(p,y,R);
		  cout<<"enter amount period int rate ";
		  cin>>p>>y>>r;
		  fd2=fd(p,y,r);
		   cout<<"enter amount period";
		   cin>>p>>y;
		   fd3=fd(p,y);
		   cout<<"\n deposit1";
		   fd1.display();
		   cout<<"\n deposit2";
		   fd2.display();
		   cout<<"\n deposit3";
		   fd3.display();
		   getch();
		   return 0;
		  }