// inheritance:
//multi level
class A
{
public void show()
{
System.out.println("A class");
}
}
class B extends A
{
public void disp()
{
System.out.println("B class");
}
}
class C extends B
{
public void prt()
System.out.println("C class");
}
public static void main(String ar[])
{
C t=new C();
t.show();
t.disp();
t.prt();
}
}
