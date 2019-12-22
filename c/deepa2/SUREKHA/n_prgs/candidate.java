class applicant
{
String applicantID;
String applicantname;
String applicantaddress ="12, parkstreet";
String applicantposition ="manager";

public void displaydetails()
{
System.out.println("applicant id= "+ applicantID);
System.out.println("applicant name= "+ applicantname);
System.out.println("applicant address= "+ applicantaddress);
System.out.println("applicant position= "+ applicantposition);
}
}
class candidate extends applicant
{
String interviewdate;
boolean candidatestatus = false;

public candidate(String ID, String name,String intdate)
{
applicantID=ID;
applicantname=name;
interviewdate=intdate;
}

public void displaydetails1()
{
displaydetails();
System.out.println("date for interview= "+ interviewdate);
System.out.println("status of candidate= "+ candidatestatus);
}
public static void main(String arg[])
{				
candidate c =new candidate(arg[0],arg[1],arg[2]);
c.displaydetails1();
}
}