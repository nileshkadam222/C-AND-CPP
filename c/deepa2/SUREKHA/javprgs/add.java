import java.io.*;
class average1
{
public static void main(String ar[])throws Exception
{
  int m,n,sum,avg; 
  BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
  System.out.println("enter no:");
  n=Integer.parseInt(br.readLine());
 System.out.println("enter no:");
 m=Integer.parseInt(br.readLine());
 sum=m+n;
 avg=sum/2;
 System.out.println("SUM  is:"+sum);
 System.out.println("Average  is:"+avg);
}
}