MyDate.CalendarBean;
package MyDate;
import java.util.Calendar;
import java.util.Date;
public class CalendarBean
{
	private Calendar calendar;
	private Date time;
	private int hour,minute,second;
	public CalendarBean()
	{
		calendar=Calendar.getInstance();
		calendar.setTime(new Date());
	}
	public Date getTime()
	{
		return calendar.getTime();
	}
	public int getHour()
	{
		return calendar.get(Calendar.HOUR_OF_DAY);
	}
	public int getMinute()
	{
		return calendar.get(Calendar.MINUTE);
	}
	public int getSecond()
	{
		return calendar.get(Calendar.SECOND);
	}
