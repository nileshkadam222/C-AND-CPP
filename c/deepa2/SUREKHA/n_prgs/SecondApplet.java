import java.applet.*;
import java.awt.*;
/*
<APPLET> tag:
<APPLET CODE="SecondApplet.class" WIDTH=500 HEIGHT=200>
</APPLET>
*/
public class SecondApplet extends Applet {
static final String message = "Hello World";
private Font font;
public void init() {
font = new Font("Helvetica", Font.BOLD, 48);
}

public void paint(Graphics g) {

g.setColor(Color.pink);
g.fillOval(10, 10, 330, 100);
g.setColor(Color.red);
g.drawOval(10,10, 330, 100);
g.drawOval(9, 9, 332, 102);
g.drawOval(8, 8, 334, 104);
g.drawOval(7, 7, 336, 106);

g.setColor(Color.black);
g.setFont(font);
g.drawString(message, 40, 75);
}
}
