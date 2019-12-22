import java.awt.*;
import java.awt.event.*;

class SampleFrame extends Frame{
	SampleFrame(String title){
	super(title);
	MyWindowAdapter adapter = new MyWindowAdapter(this);
	addWindowListener(adapter);
                   }
    }
class MyWindowAdapter extends WindowAdapter{
	SampleFrame sampleFrame;
	public MyWindowAdapter(SampleFrame sampleFrame){
	this.sampleFrame = sampleFrame;
                   }
	public void windowClosing(WindowEvent we){
	sampleFrame.setVisible(false);
                 }
}
class  FileDialogDemo{
	public static void main(String args[]){
	Frame f = new SampleFrame("File DialogDemo");
	f.setVisible(true);
	f.setSize(100, 100);
	FileDialog fd = new FileDialog(f,"File Dialog");
	fd.setVisible(true);
                  }
}