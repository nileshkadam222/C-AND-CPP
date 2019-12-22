import java.io.*;
class FosDemo{
public static void main(String args[])throws IOException{
int i=0;
int ch;
char ch1[]=new char[3000];
FileInputStream fis=new FileInputStream("data.pdf");
while((ch=fis.read())!=-1){
ch1[i]=(char)ch;
i++;
}
fis.close();
i=0;
FileOutputStream fos=new FileOutputStream("data1.txt");
while(i<ch1.length){
fos.write(ch1[i]);
i++;
}
fos.close();
 }
 }