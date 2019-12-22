import java.io.*;

public class Sfilecopy{

  public static void main(String args[ ]){
   if(args.length !=2 ){
   System.err.println("Usage:java file copier infile outfile");
   }
    try{
          copy(new File(args[0]), new File(args[1]));
          }
          catch(IOException e){
                System.err.println(e);
             }
}
public static void copy(File inFile,File outFile)throws IOException{
    if(inFile.getCanonicalPath().equals(outFile.getCanonicalPath())){
    return;
   }
FileInputStream fin = new FileInputStream(inFile);
FileOutputStream fout = new FileOutputStream(outFile);
streamCopier.copy(fin, fout);
fin.close();  fout.close();
}
}