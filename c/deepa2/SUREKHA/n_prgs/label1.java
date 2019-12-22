import  java.awt.*;
import java.applet.*;

//<applet code="label1"     height=200   width=400> 
//</applet>



public class label1   extends Applet
{
     public void init()
     {
          Label  l1=new Label("poonam");
          Label  l2=new Label("king");
          Label  l3=new Label("queen");
          TextField   t1 = new TextField();
          Button b1 = new Button("yes");
          add(l1);
          add(l2);
         add(t1);
         add(b1);
     }
}

          