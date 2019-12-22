/*Program to register the entrance of people (male or female)
   using static class data.*/

#include<iostream.h>
#include<conio.h>
#include<process.h>

class people
 {
   private :
    static int count; //static data member
    int males,females;
   public :
    people()
     {
      males=0;
      females=0;
     }
    void male_increment()
     {
      count++;
      males++;
     }
     void female_increment()
     {
      count++;
      females++;
     }
    void male_decrement()
     {
      if(count==0)
	cout<<"\n\nNo Person in The Room....";
      else
       if(males!=0)
	 {
	  count--;
	  males--;
	 }
       else
	 cout<<"\n\nNo Males in Room...";
       }

  void female_decrement()
     {
      if(count==0)
	cout<<"\n\nNo Person in The Room....";
      else
       if(females!=0)
	 {
	  count--;
	  females--;
	 }
       else
	 cout<<"\n\nNo Females in Room...";
       }


  void display(people f)
   {
    cout<<"\n\nThe number of  MALES     :  "<<males;
    cout<<"\n\nThe number of  FEMALES   :  "<<females;
    cout<<"\n\nTotal number of PEOPLE   :  "<<count;
   }
  };

 int people :: count = 0; //static data member has to be initialized or defined outside the class

 void main()
   {
    clrscr();
    people m,f;//both objects will share same count varible as variable count is  a static variable
    char action,m_f;

    do
     {
      cout<<"\nRegister your action  e-(Enter), x-(Exit), q-(Quit)  :";
      action=getche();
      if(action=='q')
       exit(0);
      cout<<"\nMALE (m)  or FEMALE(f) ";
      m_f=getche();

      switch(m_f)
       {
	case 'm' :
	  if(action =='e')
	    m.male_increment();
	  else
	    if(action=='x')
	      m.male_decrement();
	   break;

	case 'f' :
	  if(action =='e')
	    f.female_increment();
	  else
	    if(action=='x')
	      f.female_decrement();
	   break;
	default :
	 cout<<"\n\n\tWrong Key Pressed";
	}
       f.display(m);  //
     }
     while(1);

       getch();
    }









