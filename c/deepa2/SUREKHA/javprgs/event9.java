import javax.swing.*;
import java.awt.*;
import java.awt.event.*;
public class event9 extends JFrame implements MouseMotionListener,ActionListener
{
   String str=" ";
   int mX=0, mY=0;
  JLabel l;
  JButton b;

  public event9(String strName)
     {
       super(strName);
       getContentPane().setLayout(new FlowLayout());
       Panel p=new Panel();
       p.setLayout(new FlowLayout());
       l=new JLabel(str + mX + mY);
       getContentPane().add(l);
       b=new JButton("Quit");
       p.add(b);
       getContentPane().add(p);
       addMouseMotionListener(this);
        b.addActionListener(this);
      }

    public void mouseMoved(MouseEvent me)
      {
         mX=me.getX();
         mY=me.getY();
         str="Mouse clicked at;";
         l.setText(str + mY + " , " + mX);
       }

     public void mouseDragged(MouseEvent me)
       {
         mX=me.getX();
         mY=me.getY();
         str="Mouse Dragged at;";
         l.setText(str+mX+","+mY);
       }

       public void actionPerformed(ActionEvent ae)
         {
           String s=ae.getActionCommand();
           if("Quit".equals(s));
             {
                System.exit(0);
              }

          }
        public static void main(String args[])
           {
             event9    ME=new event9("MouseMotionEvents");
              ME.setSize(300,300);
               ME.setVisible(true);
           }
        }
