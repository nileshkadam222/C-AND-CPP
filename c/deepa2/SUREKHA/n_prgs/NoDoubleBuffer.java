import java.applet.*;
import java.awt.*;

/*
<applet code = "NoDoubleBuffer" width=300 height=100>
</applet>
*/

public class NoDoubleBuffer extends Applet implements Runnable{
   int x = 0;   
   Thread t;

public void init() {
  
t = new Thread(this);
t.start();
}

public void run() {
try {
       while(true)  {
  repaint();
  Thread.sleep(100);
  }
}
   catch(Exception e) {
   }
}
public void paint(Graphics g)  {

Dimension d = getSize();
g.fillOval(x, d.height/4, 50, 50);

x += 5;
 if(x + 50>d.width)
  x = 0;
  }
} 