import java.io.*;

class FileInputStreamDemo{
   public static void main(String args[]){
   try{
     FileInputStream fis = new FileInputStream(args[0]);
    int i;
    while((i = fis.read())!= -1) {
   
    System.out.println(i);
    }
    fis.close();
   }
    catch(Exception e){
    System.out.println("Exception:" +e);
     }
   }
}