import java.awt.*;
  import java.applet.*;
 public class ComLineTest extends Applet {
    TextField text1,text2;
    public void init() {
   text1=new TextField(20);
  text2=new TextField(20);
  add(text1);
 add(text2);
   text1.setText("0");
  text2.setText("0");
    }
  public void paint(Graphics g) {
    int x=0,y=0,z=0;
    String s1,s2,s3;
     g.drawString("input number in each box",10,50);
         try {
    s1=text1.getText();
 x=Integer.parseInt(s1);
 s2=text2.getText();
    y=Integer.parseInt(s2);
}
catch(Exception ex) {}
    z=x+y;
   s3=String.valueOf(z);
   g.drawString("the sum is:",75,75);
  g.drawString(s3,100,75);
       }
   public boolean action(Event event,Object obj)
    {
 repaint(); 
  return true;
   }
 }