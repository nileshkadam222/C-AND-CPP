package appletServletExample;

import java.io.*;
import java.util.*;

import javax.servlet.*;
import javax.servlet.http.*;

/**
 * Applet-Servlet communication example.<P>
 *
 * The Servlet.  Basically, this reads in whatever's sent to it then sends
 * back an appropriate message.
 *
 * @author	James Farmer
 * @version	03-Aug-2000
 **/

public class EgServlet extends HttpServlet {


/**
 * Method to handle GET queries.
 **/

  public void doGet(HttpServletRequest req, HttpServletResponse resp) throws IOException {
    resp.setContentType("text/plain");
    PrintWriter out = resp.getWriter();
    out.println("Error: this servlet does not support the GET method!");
    out.close();
  }


/** 
 * Method to handle POST queries.  It reads in from the input stream, then
 * writes out what it read along with a datestamp and some description.
 **/

  public void doPost(HttpServletRequest req, HttpServletResponse resp) throws IOException {

// Read in the message from the servlet
    StringBuffer msgBuf = new StringBuffer();
    BufferedReader fromApplet = req.getReader();
    String line;
    while ((line=fromApplet.readLine())!=null) {
      if (msgBuf.length()>0) msgBuf.append('\n');
      msgBuf.append(line);
    }
    fromApplet.close();

// Write the message back to the applet
    resp.setContentType("text/plain");
    PrintWriter toApplet = resp.getWriter();
    toApplet.println("I (the servlet) received a message \"" + msgBuf.toString() + "\"");
    toApplet.println("at " + (new Date()).toString());
    toApplet.println("and sent this text in response.   Hope you enjoy it!");
    toApplet.close();
  }

}

