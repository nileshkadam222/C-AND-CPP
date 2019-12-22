import java.util.*;

class PushpopDemo{
   public static void main(String args[])
   {
	Stack stack = new Stack();
                    for(int i = 0; i<args.length; i++)
	stack.push(new Integer(args[i]));
	while(!stack.empty())
                    {
                        Object ob = stack.pop();
	    System.out.println(ob);
                    }
       }
}