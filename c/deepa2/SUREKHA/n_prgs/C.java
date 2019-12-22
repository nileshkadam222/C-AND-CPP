import package2.ClassB;

class ClassC extends class B{
   int n = 20;
   void displayC()
  {
     System.out.println("Class C");
     System.out.println("m=" +m);
     System.out.println("n=" + n);
   }
}

class PackageTest3{
   public static void main(String args[])
   {
     Class C objectc = new Class C();
      objectc.displayB();
     objectc.displayC();
    }
}