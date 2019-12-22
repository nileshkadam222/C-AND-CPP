import java.io.*;


  public class A{
    public static void main(String args[]) throws IOException{
      BufferedReader br= new BufferedReader(new InputStreamReader(System.in));
      System.out.println("Enter the char:");
      String str = br.readLine();
      for ( int i = 0; i < str.length(); ++i ){
        char c = str.charAt(i);
        int j = (int) c;
        System.out.println("ASCII OF "+c +" = " + j );
        }
    }
  } 