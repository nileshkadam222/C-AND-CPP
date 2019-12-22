import java.io.*;
class FisDemo{
public static void main(String args[])throws IOException{
int i=0;
FileInputStream fis=new FileInputStream("data.pdf");
BufferedReader br=new BufferedReader(new InputStreamReader(fis));
int ch;
char ch1;
/*
while((ch=fis.read())!=-1){
ch1=(char)ch;
System.out.print(ch1);
*/
String s=br.readLine();
System.out.println(s);
 }
 }