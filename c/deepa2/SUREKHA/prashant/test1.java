import java.awt.*;
import java.awt.event.*;
import javax.swing.*;
class test extends Frame implements ItemListener,ActionListener
{
JComboBox cb;
Checkbox c=new Checkbox("red");
JRadioButton b=new JRadioButton("green");
Panel p=new Panel();
test1()
{
setSize(300,300);
String s[]={"c++","oracle","java"};
cb=new JComboBox(s);

p.add(c);
p.add(b);
p.add(cb);
add(p);
c.addItemListener(this);
b.addActionListener(this);
cb.addItemListener(this);
}
public void actionPerformed(ActionEvent ae)
{
p.setBackground(Color,green);
}
public void itemStateChanged(ItemEvent e)
{
Syetem.out.println(c.getState());
if(c.getState())
p.setBackground(Color,red);
String s=(String)cb.getSelectedItem();
System.out.println("my item is"+s);
}
public static void main(String ar[])
{
test1 t=new test1();
t.setVisible(true);
}
}