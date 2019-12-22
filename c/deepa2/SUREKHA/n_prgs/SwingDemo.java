import javax.swing.*;
import java.awt.*;
class SwingDemo extends JFrame{
	SwingDemo(){
		Container c=getContentPane();
		Button b1=new Button();
		c.add(b1);
		}
		public static void main(String args[])
		{
			SwingDemo d1=new SwingDemo();
			d1.setSize(300,300);
			d1.setVisible(true);
			}
	}