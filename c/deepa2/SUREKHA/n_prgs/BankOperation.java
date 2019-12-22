import java.util.Random;

// Making class Transaction


class Transaction
{
    public static final int DEBIT = 0;
    public static final int CREDIT = 1;
    public static String[] types = {"Debit","Credit"};

    public Transaction(Account account, int transactionType, int amount)
    {
	this.account = account;
	this.transactionType = transactionType;
	this.amount = amount;
    }

    public Account getAccount() 
    {
	return account;
    }

    public int getTransactionType()
    {
	return transactionType;
    }

    public int getAmount()
    {
	return amount;
    }
    
    public String toString()
    {
	return types[transactionType] + "A//C:" + ":$" + amount;
    }

    private Account account;
    private int amount;
    private int transactionType;
}

class Bank
{
   synchronized public void doTransaction(Transaction transaction)
   {
	int balance = transaction.getAccount().getBalance();        
       	switch(transaction.getTransactionType())
        {

    	case Transaction.CREDIT:
    		try{
         		Thread.sleep(100);
       	   	   }
                   catch(InterruptedException e)
              	   {
          		System.out.println(e);
        	   }
          	   balance += transaction.getAmount();   
                   break;

       case Transaction.DEBIT:
                try{
                         Thread.sleep(200);
                   }
                   catch(InterruptedException e)
                   {
                          System.out.println(e);
                   }
                   balance -= transaction.getAmount();
                   break;
       default:
                   System.out.println("Invalid Transaction");
                   System.exit(1);
       }
       transaction.getAccount().setBalance(balance);
   }  
}



// Define a customer Account

class Account		
{
    public Account(int accountNumber, int balance)
    {
	this.accountNumber = accountNumber;
	this.balance = balance;
    }
  
    public int getBalance()
    {
	return balance;
    }
 
    public void setBalance(int balance)
    {
	this.balance = balance;
    }

    public int getAccountNumber()
    {
	return accountNumber;
    }

    public String toString()
    {
	return "A//C No." + accountNumber + " : $" + balance;
    }

    private int balance;
    private int accountNumber;
}       

// Define clerk class

class Clerk implements Runnable
{
   public Clerk(Bank theBank)
   {
	this.theBank = theBank;
	inTray = null;
   }

   public void doTransaction(Transaction transaction)
   {
	inTray = transaction;
   }

   public void run()
   {
	while(true)
	{
	    while(inTray == null)
	    {
		try
		{
		    Thread.sleep(150);
		}
		catch(InterruptedException e)
		{
		    System.out.println(e);
		}
	    }
	    theBank.doTransaction(inTray);
	    inTray = null;
	}
    }
    public boolean isBusy()
    {
	return inTray != null;
    }

    private Bank theBank;
    private Transaction inTray;
}		     

class BankOperation
{
    public static void main(String args[])
    {
	int initialBalance = 500;
	int totalCredits = 0;
	int totalDebits = 0;
	int transactionCount = 20;   // Number of debits and credits

        Bank theBank = new Bank();
	Clerk clerk1 = new Clerk(theBank);
	Clerk clerk2 = new Clerk(theBank);
	Account account = new Account(1, initialBalance);
	
	Thread clerk1Thread = new Thread(clerk1);
	Thread clerk2Thread = new Thread(clerk2);

	clerk1Thread.setDaemon(true);
	clerk2Thread.setDaemon(true);
	clerk1Thread.start();
	clerk2Thread.start();

	Random rand = new Random();
	Transaction transaction;
	int amount = 0;
	for(int i = 1;i <= transactionCount;i++)
	{
	    amount = 50 + rand.nextInt(26);
	    transaction = new Transaction(account, Transaction.CREDIT, amount);
	    totalCredits += amount;
	    
	    while(clerk1.isBusy())
	    {
		try
		{
		    Thread.sleep(25);
		}	
		catch(InterruptedException e)
		{
		    System.out.println(e);
		}
	   }
	   clerk1.doTransaction(transaction);
	
	   amount = 30 + rand.nextInt(31);
	   transaction = new Transaction(account, Transaction.DEBIT, amount);
	   totalDebits += amount;
	   while(clerk2.isBusy())
	   {
	       try
	       {
		   Thread.sleep(25);
	       }
	       catch(InterruptedException e)
	       {
		   System.out.println(e);
	       }
	   }
	   clerk2.doTransaction(transaction);
    }
    while(clerk1.isBusy() || clerk2.isBusy())
    {
	try
	{
	    Thread.sleep(25);
	}
	catch(InterruptedException e)
	{
	    System.out.println(e);
	}
    }
    System.out.println("Original Balance : $" + initialBalance + "\n" + "Total Credits :$" + totalCredits + "\n"
+ "Total Debits  :$" + totalDebits + "\n"  
+ "Final balance :$" + account.getBalance() + "\n" + 
"Should be :$" + (initialBalance + totalCredits - totalDebits));
}					
}			
				