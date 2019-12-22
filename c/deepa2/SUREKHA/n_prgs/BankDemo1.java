class Acct
{
 private int bal = 0;
 synchronized void deposit(int amt)
 {
  bal += amt;
  }
int getBal()
{
 return bal;
}
}
class Cust extends Thread
{
  Acct acct;
  Cust( Acct acct)
  {
    this.acct = acct;
  }
  public void run()
  {
    try
    {
     for(int i=0;i<100;i++)
     {
       acct.deposit(10);
     }
}
catch(Exception e)
{
  e.printStackTrace();
}
}
}
class BankDemo1
{
  private final static int NUMCUST = 10;
  public static void main(String args[])
  {
    Acct acct = new Acct();
    Cust cust[] = new Cust[NUMCUST];
   for(int i=0;i<NUMCUST;i++)
   {
     cust[i] = new Cust(acct);
     cust[i].start();
   }
  for(int i=0;i<NUMCUST;i++)
  {
    try
    {
      cust[i].join();
    }
   catch(InterruptedException e)
   {
     e.printStackTrace();
   }
}
System.out.println(acct.getBal());
}
}

