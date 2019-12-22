
class Calcsq{
   public static void main(String args[])
  {
    int i;
    double a[ ] = new double [100];
  
    for( i = 0; i<100; i++)
    {
      a[i] = Math.sqrt(i);
    
    System.out.println(a[i]);
  }
}
}