import java.io.*;

public class Deletefile{
public static void main(String args[ ]){
     switch(args.length){
      case 0 : System.out.println("File has not mentioned.");
                      System.exit(0);
     case 1 : delete file(args[0]);
                     System.exit(0);
     default: System.out.println("Multiple files are not allowed.");
                    System.exit(0);
           }
 }
     private static void delete file(String file){
      File f1 = new File(file);
     boolean success = f1.delete();
     if(!success){
       System.out.println("Deletion failed");
        System.exit(0);
      }else{
          System.out.println("File deleted");
           }
   
 }
