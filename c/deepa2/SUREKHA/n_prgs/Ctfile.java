import java.io.*;
import java.io.FileWriter;
import java.io.BufferedWriter;
import java.io.IOException;

public class Ctfile{
  public static void main(String args[ ]){
   File tempFile = null;
    try{
      tempFile = File.createTempFile("MyFile.txt", ".tmp");
     System.out.println("Created temporary file with name");
    System.out.println(tempFile.getAbsolutePath());
   }
    catch(IOException ex){
    System.err.println("Cannot create temp file:"+ ex.getMessage());
    }
     finally{
    if(tempFile != null){
    }}}
}