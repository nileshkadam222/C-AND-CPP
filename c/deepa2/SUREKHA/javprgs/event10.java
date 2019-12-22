//key event handler
import java.awt.*;
import java.awt.event.*;
import java.applet.*;
/*
<applet code="event10.java" width=300 height=400></applet>*/


  public class event10 extends Applet implements KeyListener
    {
       String msg=" ";
        int X=10,Y=20;
   public void init()
     {
       addKeyListener(this);
       //requestFocus();
      }
    public void keyPressed(KeyEvent ke)
       {
         showStatus("key Down");
       }
    public void keyReleased(KeyEvent ke)
     {
        showStatus("key Up");
      }

     public void keyTyped(KeyEvent ke)
      {
        msg +=ke.getKeyChar();
        repaint();
       }

  //Display Keystrokes.
      

    public void paint(Graphics g)
     { 
       g.drawString(msg,X,Y);  
     }
 }