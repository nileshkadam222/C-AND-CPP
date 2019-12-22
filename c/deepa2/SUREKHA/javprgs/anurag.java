import java.awt.*;
import java.awt.event.*;
class anurag extends Frame implements MouseListener
{
anurag()
{
setSize(300,300);
addMouseListener(this);
}
public void mouseClicked(MouseEvent e)
{
System.out.println("mouse clicked");
}
public void mousePressed(MouseEvent e)
{
System.out.println("mouse pressed");
}
public void mouseReleased(MouseEvent e)
{
System.out.println("mouse released");
}
public void mouseEntered(MouseEvent e)
{
System.out.println("mouse entered");
}
public void mouseExited(MouseEvent e)
{
System.out.println("mouse exited");
}
public static void main(String ar[])
{
anurag q=new anurag();
q.setVisible(true);
}
}