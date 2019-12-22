import java.applet.*;
import java.awt.*;
import java.io.*;
import java.net.*;


public class EgApplet extends Applet {
  TextField servletUrlField;
  TextField messageField;
  TextArea responseField;
  Button transmitButton;

  public void init() {
    super.init();
    this.setLayout(new BorderLayout());

    Panel topPanel = new Panel();
    topPanel.setLayout(new GridLayout(0,1));

    Panel servletUrlPanel = new Panel();
    servletUrlPanel.setLayout(new BorderLayout());
    servletUrlPanel.add("West", new Label("Servlet URL:", Label.RIGHT));
    servletUrlPanel.add("Center", servletUrlField = new TextField("http://mindy.cs.bham.ac.uk/servlets/appletServletExample.EgServlet"));
    topPanel.add(servletUrlPanel);

    Panel messageFieldPanel = new Panel();
    messageFieldPanel.setLayout(new BorderLayout());
    messageFieldPanel.add("West", new Label("Message to send:", Label.RIGHT));
    messageFieldPanel.add("Center", messageField = new TextField());
    topPanel.add(messageFieldPanel);

    this.add("North", topPanel);
    this.add("Center", responseField = new TextArea());
    responseField.setEditable(false);
    this.add("South", transmitButton = new Button("Transmit"));
  }



/**
 * Method to intercept clicks on the "transmit" button.  Note that we're using
 * the Java 1.0.2 event model here to ensure maximum compatibility with old
 * browsers.
 **/

  public boolean action(Event evt, Object obj) {
    if (obj.equals("Transmit")) {
      this.interactWithServlet();
      return true;
    }
    return false;
  }


/**
 * This method causes the applet to interact with the servlet.  Basically, the
 * method writes the message to the servlet, then reads the response and sticks
 * it in the "response" field.
 **/

  private void interactWithServlet() {
    try {

// Create an object we can use to communicate with the servlet
      URL servletURL = new URL(servletUrlField.getText());
      URLConnection servletConnection = servletURL.openConnection();
      servletConnection.setDoOutput(true);  // to allow us to write to the URL
      servletConnection.setUseCaches(false);  // to ensure that we do contact
                                              // the servlet and don't get
                                              // anything from the browser's
                                              // cache

// Write the message to the servlet
      PrintStream out = new PrintStream(servletConnection.getOutputStream());
      out.println(messageField.getText());
      out.close();

// Now read in the response
      InputStream in = servletConnection.getInputStream();
      StringBuffer response = new StringBuffer();
      int chr;
      while ((chr=in.read())!=-1) {
        response.append((char) chr);
      }
      in.close();
      responseField.setText(response.toString());


    } catch (IOException e) {
      e.printStackTrace();
      responseField.setText("An error occurred: " + e.toString());
    }
  }

}



