import java.applet.*;
import java.awt.*;
import java.awt.event.*;
//<applet code="event3.class" height=300 width=300></applet>
public class event3 extends Applet implements ActionListener
{
Button b1,b2;
String s1;
TextField  t1;
public void init()
{
b1=new Button("Aqua");
b2=new Button("Green");
t1=new TextField(10);

Label l1=new Label("Hello world",Label.CENTER);
add(l1);
add(b1);
add(b2);
add(t1);
b1.addActionListener(this);
b2.addActionListener(this);
}
public void actionPerformed(ActionEvent ae)
{

Object o=ae.getSource();
if(o==b1)
{
s1=t1.getText();
setBackground(Color.cyan);
b1.setLabel(s1);
}
else if(o==b2)
setBackground(Color.green);

}

}