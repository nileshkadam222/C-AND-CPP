import java.awt.*;
import java.applet.*;
/*
   <applet code="applet8"   width=300 height=50>
   </applet>
*/

public class applet8 extends Applet
{
      public void init()
      {
           setBackground(Color.cyan);
      }
}
public void paint(Graphics g)
{
     g.drawString("this is in the applet window",10,30);
     showStatus("this is shown in the status window");
}
}