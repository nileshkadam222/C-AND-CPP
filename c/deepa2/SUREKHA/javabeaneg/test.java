class test 
{
public static void main(String arg[])
{
int a[]={5,103};
try{
System.out.println(a[0]);
}
catch(ArrayIndexOutOfBounds Exceptione)
{
System.out.println("array index error");
}
catch(Airthmetic Exception ie)
{
System.out.println("io exception");
}
finally
{
System.out.println("end program");
}
}
}