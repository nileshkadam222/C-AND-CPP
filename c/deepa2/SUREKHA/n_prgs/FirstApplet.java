import java.applet.Applet;
import java.awt.Graphics;

/*<applet code = "FirstApplet" width=200 height=200>
</applet>
*/

public class FirstApplet extends Applet
{
public void paint(Graphics g)
{
g.drawString("Welcome to My Applet!", 20,100);
 }
}