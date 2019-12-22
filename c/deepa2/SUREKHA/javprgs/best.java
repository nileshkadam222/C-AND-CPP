import java.applet.*;
import javax.swing.*;
import java.awt.event.*;
import java.awt.*;
public class best extends Applet implements ActionListener
{
JComboBox c=new JComboBox();
JButton b=new JButton("pink");
TextField t1=new TextField(10);
public void init()
{
String a[]={"c++","java","oracle"};
for(int i=0;i<=2;i++)
c.addItem(a[i]);
add(b);
add(c);
add(t1);
c.addActionListener(this);
}
public void actionPerformed(ActionEvent e)
{
JOptionPane.showMessageDialog(null,"success");
t1.setText((String)c.getSelectedItem());
}
}


