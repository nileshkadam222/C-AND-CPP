import java.awt.*;
import java.awt.event.*;
import javax.swing.*;

class event1 extends JFrame 
{ 
     JButton b1;
     public static void main(String ar[])
     {
           event1  e = new event1();
      }

     public event1()
    {
        super("window title");
        b1=new JButton("click here");
        getContentPane().add("Center",b1);
        ButtonListener  blisten = new ButtonListener();
        b1.addActionListener(blisten);
        setSize(200,200);
        setVisible(true);
   }


   class ButtonListener  implements ActionListener
   {
         public void actionPerformed(ActionEvent evt)
         {
                  JButton  source = (JButton)evt.getSource();
                  source.setText("Button clicked");
        }

}
}  



 


       