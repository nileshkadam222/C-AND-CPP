import java.awt.*;
import java.awt.event.*;
import java.applet.*;

/*<applet code=ScrollbarDemo2 width=300 height=100>
</applet>
*/

public class ScrollbarDemo2 extends Applet{
   MyScrollbar myScrollbar;
  public void init(){
   myScrollbar = new MyScrollbar(Scrollbar.HORIZONTAL, 0,1,0,100);
   add(myScrollbar);
  }
class MyScrollbar extends Scrollbar{
    public MyScrollbar(int style, int initial, int thumb, int min, int max){
   super(style, initial, thumb, min, max);
   enableEvents(AWTEvent.ADJUSTMENT_EVENT_MASK);
  }
   protected void porcessAdjustmentEvent(AdjustmentEvent ae){
   showStatus("Adjustment event:" + ae.getValue());
   setValue(getValue());
   super.processAdjustmentEvent(ae);
  }
}
}