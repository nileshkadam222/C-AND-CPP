import java.io.*;

public class Deltempfile{
     public static void main(String args[ ])
    {
      try{
            System.out.println("Delete temp file example!");

BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
System.out.println("Pls enter file name");
  String  str = br.readLine();
  File file = new File("v.txt");
    if(file.exists()){
     file.deleteOnExit();
     System.out.println("file is deleted.");
     }else{
        System.out.println("File does not exits");
        }
}catch(IOException e){
    e.printStackTrace();
    }
  }
}