import java.awt.*;
import java.awt.event.*;
import javax.swing.*;

class event2 extends JFrame implements ActionListener
{

   JLabel lb1;
   JLabel lb2;
   JLabel lb3;      
   JTextField jt1;
   JTextField jt2;
   JTextField jt3;
   JPanel p;
   JButton b1;

   public event2()
  {
       super("addition");
      p=new JPanel();
      getContentPane().add(p);
      lb1=new JLabel("number1:");
      lb2=new JLabel("number2:");   
      lb3=new JLabel("GREATEST:");
     jt1=new  JTextField(5);       
     jt2=new  JTextField(5);
     jt3=new  JTextField(5);
       
    b1= new JButton("WHICH GREATER");
      
   p.add(lb1);
p.add(jt1);
    
p.add(lb2);
p.add(jt2);
p.add(lb3);
p.add(jt3);
p.add(b1);
setSize(100,100);
setVisible(true);
b1.addActionListener(this);
}


     public void actionPerformed(ActionEvent e)
    {
          Object  o =  e.getSource();
         if(o==b1)
         {
             int i=Integer.parseInt(jt1.getText());
             int j=Integer.parseInt(jt2.getText());
             if( i > j)
             {
                       jt3.setText(String.valueOf(i));
             }
             else{
                           jt3.setText(String.valueOf(j));
              }
     }
}
          public  static void main(String args[])
          {
                event2  e= new event2();
          }

                
     }
  
          