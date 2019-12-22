import javax.servlet.*;
import javax.servlet.http.*;
import java.io.*;
import java.util.*;

public class hitcountServlet extends HttpServlet{
     static int count=0;
    public void init(ServletConfig config) throws ServletException
    {
      super.init(config);
    }
    public void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException
   {
     response.setContentType("text/html");
     PrintWriter out = response.getWriter();
     count++;
     out.println("<html>");
     out.println("<head><title>BasicServlet</title></head>");
     out.println("<body>");
     out.println("You are user number" = +String.valueOf(count)+" visiting our web site" + "\n");
     out.println("<body></html>";
   }
    public String getServletInfo()
   {
      return "BasicServlet Information";
   }
}
 

