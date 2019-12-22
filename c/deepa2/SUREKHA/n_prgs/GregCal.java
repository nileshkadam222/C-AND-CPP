import java.util.*;

class GregCal
{
    public static void main(String args[])
    {
         GregorianCalendar gcalendar = new GregorianCalendar();
         System.out.println();	
         System.out.print(gcalendar.get(Calendar.MONTH) + " " );
         System.out.print(gcalendar.get(Calendar.YEAR));
      }			
}