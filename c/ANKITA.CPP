#include<conio.h>
#include<stdio.h>
#include<iostream.h>
void main()
      {

	  int a,b,c;
	  int x,y,z;
	  int n,k,i;

	  cout<<"welcome to sim card managment system";
	  cout<<"select your companey";
	  cout<<"1.vodafone\n2.idea\n3.aircel";
	  cin>>a;
	  switch(a)
	     {
	       case 1:
		     {
		       cout<<"welcome to vodafone";
		       cout<<"select your offers";
		       cout<<"1.sms\n2.call\n3.net packs";
		       cin>>b;
			   switch(b)
			   {
			     case 1:
				 {
				   cout<<"sms offers";
				   cout<<"1.99 rs 999 sms 30 days\n2.38 rs 380 sms 15 days\n3.5 rs 15 sms 1 day";
				      cin>>x;
				     switch(x)
					 {
					 case 1:
					    {

					       cout<<"the pack of aricle is less then idea or vodafone sim  cards";
					       cout<<"sms pack of aricale is 92 rs 999 sms 30 days";
					       break;
					      }
					   case 2:
					      {
						cout<<"the sms pack of idea is less then vodafone or aricle";
						cout<<"sms pack of idea is 35 rs 380 sms 20 days ";
						break;
						}
					   case 3:
					       {
						 cout<<"sms pack of vodafone is best for you for 1 day use";
					       break;
					       }
					}

			     case 2:
				    {
				    cout<<"call offers";
				    cout<<"1.100 rs 1 p/s call rate for 6 monts\n2.55 rs 1.2 p/s call rate for 6 monts\n3.25 rs 0.5 p/s call rate for 6 monts";
				     cin>>y;
					 switch(y)
					    {
					      case 1:
						  {
						    cout<<"idea call rating and pack is less then vodafone and aricle";
						    cout<<"call pack of idea is100 rs 1/2 p/s call rate for 6 monts ";
						    break;
						    }
					       case 2:
						   {
						     cout<<" idea call rating and pack is less then vodafone and aricle";
						     cout<<"call pack of idea 52 rs 1.2 call rate for 6 monts ";
						     break;
						     }
						case 3:
						    {
						      cout<<"aricle pack is best for you";
						      cout<<"0.5 p/s  in 22 rs";
						      break;
						      }
						}

			     case 3:
				    {
				     cout<<"net offers";
				     cout<<"1.100 rs 30 days\n2.55  17 days\n3.14 rs 3 days";

				      cin>>z;
				     switch(z)
					    {
					      case 1:
						  {
						    cout<<"idea net pack is less then vodafone and aricle";
						    cout<<"idea net pack of idea is100 rs 1 monts ";
						    break;
						    }
					       case 2:
						   {
						     cout<<" aricle net pack is best for you";
						     cout<<"net pack of aricle 52 rs 18 days";
						     break;
						     }
						case 3:
						    {
						      cout<<"vodafone pack is best for you";
						      cout<<"14 rs 3 days";
						      break;
						      }
						 }
					     }
	     case 2:
		     {
			 cout<<"welcome to idea";
			 cout<<"select your offers";
			 cout<<"1.sms\n2.call\n3.net packs";

                          cin>>c;
				      switch(c)
					 {
			 case 1:
					 {
					      cout<<"sms offers";
					       cout<<"1.98 rs 999 sms 30 days\n2.38 rs 380 sms 15 days\n3.12 rs 120 sms 1 day";
                                               cin>>n;
					       switch(n)
					       {
						case 1:
						   {

					            cout<<"the pack of aricle is less then idea or vodafone sim  cards";
					            cout<<"sms pack of aricale is 92 rs 999 sms 30 days";
					            break;
					         }
					   case 2:
					          {
						     cout<<"the sms pack of idea is less then vodafone or aricle";
						       cout<<"sms pack of idea is 35 rs 380 sms 20 days ";
						    break;
						  }
					   case 3:
					       {
						 cout<<"sms pack of vodafone is best for you for 1 day use";
					         break;
					       }
					     }
                                          
                           case 2:
					   {
					       cout<<"call offers";
					       cout<<"1.100 rs 1 p/s call rate for 6 monts\n2.52 rs 1.2 p/s call rate for 6 monts\n3.25 rs 0.5 p/s call rate for 6 monts";
                                                    cin>>k;
					         switch(k)
					           {
					      case 1:
						  {
						    cout<<"idea call rating and pack is less then vodafone and aricle";
						    cout<,"call pack of idea is100 rs 1/2 p/s call rate for 6 monts ";
						    break;
						    }
					       case 2:
						   {
						     cout<<" idea call rating and pack is less then vodafone and aricle";
						     cout<<"call pack of idea 52 rs 1.2 call rate for 6 monts ";
						     break;
						     }
						case 3:
						    {
						      cout<<"aricle pack is best for you";
						      cout<<"0.5 p/s  in 22 rs";
 
                                                     break;
						}

                                           }
                                            
                                              




                                 case 3:
					      {
						 cout<<"net offers";
						 cout<<"1.100 rs 30 days\n2.55  17 days\n3.14 rs 3 days";
                                                  cin>>i;
						 switch(i)
					    {
					      case 1:
						  {
						    cout<<"idea net pack is less then vodafone and aricle";
						    cout<,"idea net pack of idea is100 rs 1 monts ";
						    break;
						    }
					       case 2:
						   {
						     cout<<" aricle net pack is best for you";
						     cout<<"net pack of aricle 52 rs 18 days";
						     break;
						     }
						case 3:
						    {
						      cout<<"vodafone pack is best for you";
						      cout<<"14 rs 3 days";
						      break;
						      }

						 }

                                               }
                                         }
                                    




		case 3:
		      {
			  cout<<"welcome to aricle";
			  cout<<"select your offers";
			  cout<<"1.sms\n2.call\n3.net packs";
                                   cin>>d;
				   switch(d)
					 {
				case 1:
					 {
					      cout<<"sms offers";
					       cout<<"1.92 rs 999 sms 30 days\n2.40 rs 380 sms 15 days\n3.18 rs 140 sms 1 day";
                                                 cin>>n;
			                        switch(n)
					       {
						case 1:
						{

					       cout<<"the pack of aricle is less then idea or vodafone sim  cards";
					       cout<<"sms pack of aricale is 92 rs 999 sms 30 days";
					       break;
					      }
					   case 2:
					      {
						cout<<"the sms pack of idea is less then vodafone or aricle";
						cout<<"sms pack of idea is 35 rs 380 sms 20 days ";
						break;
						}
					   case 3:
					       {
						 cout<<"sms pack of vodafone is best for you for 1 day use";
					       break;
					       }
					     }
                                          

                                      case 2:
				          {
					    cout<<"call offers";
					    cout<<"1.125 rs 1 p/s call rate for 6 monts\n2.60 rs 1.2 p/s call rate for 6 monts\n3.22 rs 0.5 p/s call rate for 6 monts";
                                             cin>>k;
					 switch(k)
					    {
					      case 1:
						  {
						    cout<<"idea call rating and pack is less then vodafone and aricle";
						    cout<<"call pack of idea is100 rs 1/2 p/s call rate for 6 monts ";
						    break;
						    }
					       case 2:
						   {
						     cout<<" idea call rating and pack is less then vodafone and aricle";
						     cout<<"call pack of idea 52 rs 1.2 call rate for 6 monts ";
						     break;
						     }
						case 3:
						    {
						      cout<<"aricle pack is best for you";
						      cout<<"0.5 p/s  in 22 rs";

						     break;
						}



                                           }

                                      case 3:
					     {
						 cout<<"net offers";
						 cout<<"1.100 rs 30 days\n2.52  17 days\n3.19 rs 3 days";
                                                 cin>>o;
						 switch(o)
					    {
					      case 1:
						  {
						    cout<<"idea net pack is less then vodafone and aricle";
						    cout<<"idea net pack of idea is100 rs 1 monts ";
						    break;
						    }
					       case 2:
						   {
						     cout<<" aricle net pack is best for you";
						     cout<<"net pack of aricle 52 rs 18 days";
						     break;
						     }
						case 3:
						    {
						      cout<<"vodafone pack is best for you";
						      cout<<"14 rs 3 days";
						      break;
						      }
						 }
                                              }
                                         }
}
				
                                              
					





