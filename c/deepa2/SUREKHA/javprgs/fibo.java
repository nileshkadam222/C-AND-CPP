public class fibo
{
   public static void main(String args[])

  {
       int x1=0,x2=1,i,r;
      System.out.println(x1);
      System.out.println(x2);  
        for(i=1;i<=8;i++)
{
          r=x1+x2;
         System.out.println(r);
          x1=x2;
          x2=r;
}
}
}         
