import java.awt.*;
import java.awt.event.*;
import java.applet.*;
/*
  <applet code="event0" width=250  height=250>
</applet>
*/

public class event0 extends Applet implements ActionListener
{
   Button b;
   public void init()
   {
       b=new Button("click here");
       add("centre",b);
       b.addActionListener(this);
   }
   public void actionPerformed(ActionEvent ae)
   {
      Button source=(Button)ae.getSource();
      source.setLabel("button clicked");
   }
}