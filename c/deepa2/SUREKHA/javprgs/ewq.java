// constructor
class ewq
{
int n;
ewq() 
{
n=10;
System.out.println("n="+n);
}
ewq(int r) 
{
System.out.println("parameter="+r);
}
void show()
{
System.out.println("show called");
}
public static void main(String ar[])
{ 
ewq r=new ewq();
ewq t=new ewq(15);
//t.show();
}
}