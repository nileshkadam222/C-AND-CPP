import  javax.swing.*;
import java.awt.event.*;

public class event6  extends JFrame
{
     JLabel lb1;
     JLabel lb2;
     int timepassed;
     JButton buttonstart;
     JButton buttonstop;
     Timer timer;
     JPanel panel;
     public event6()
     {
           super("timer");
           panel=new JPanel();
           lb1=new JLabel("time passed");
           lb2=new JLabel("     ");
           buttonstart=new JButton("start");  
           buttonstart.addActionListener(new startListener());
           buttonstop=new JButton("stop");
           buttonstop.addActionListener(new stopListener());
           timer= new Timer(1,new TimerListener());
           getContentPane().add(panel);
          panel.add(lb1);
          panel.add(lb2);
          panel.add(buttonstart);
          panel.add(buttonstop);
          setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
          setVisible(true);
           setSize(200,200);
     }

    public static void main(String args[])
    {
       new event6();
   }
 
   class startListener implements   ActionListener
   {
          public void actionPerformed(ActionEvent  e)
          {
                  timer.start();
          }
 }

class stopListener    implements ActionListener
{
        public void actionPerformed(ActionEvent  e)
        {
                     timer.stop();
                     timepassed=0;
        }
}
  
class TimerListener implements ActionListener
{
         public void actionPerformed(ActionEvent e)
          {
                   timepassed++;
                   lb2.setText(String.valueOf(timepassed));
           }
}
} 
                    

