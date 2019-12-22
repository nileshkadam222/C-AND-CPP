import java.util.*;
class CalendarDemo
{
   public static void main(String args[])
             {
	Calendar   calendar = Calendar.getInstance();
  	System.out.print(calendar.get(Calendar.YEAR ));
 	System.out.print(":"+(calendar.get(Calendar.HOUR)));
 	System.out.print(":"+(calendar.get(Calendar.HOUR_OF_DAY)));
	System.out.print(":"+(calendar.get(Calendar.MINUTE)));
               }
}