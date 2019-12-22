class Dividezero{
   public static void main(String args[])   
   {
     a();
    }
    static void a(){
     b();
    }
    static void b(){
     int i=10;
     int j =0;
     System.out.println(i/j);
    }
}