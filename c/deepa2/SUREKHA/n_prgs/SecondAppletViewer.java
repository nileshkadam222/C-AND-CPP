Java™ Servlet Programming, eMatter Edition
Copyright © 2000 O’Reilly & Associates, Inc. All rights reserved.
import java.applet.*;
import java.awt.*;
import java.awt.image.*;
import java.io.*;
import java.net.*;
import java.util.*;
import javax.servlet.*;
import javax.servlet.http.*;
import Acme.JPM.Encoders.GifEncoder;
import Acme.MainFrameModified;
public class SecondAppletViewer extends HttpServlet {
static final int WIDTH = 450;
static final int HEIGHT = 320;
static final String APPLETNAME = "SecondApplet";
public void doGet(HttpServletRequest req, HttpServletResponse res)
throws ServletException, IOException {
182 CHAPTER 6: SENDING MULTIMEDIA CONTENT
ServletOutputStream out = res.getOutputStream();
MainFrameModified frame = null;
Graphics g = null;
Applet applet = null;
try {
// Load the SecondApplet
// Must be in the standard CLASSPATH
try {
applet = (Applet) Class.forName(APPLETNAME).newInstance();
}
catch (Exception e) {
throw new ServletException("Could not load applet:" + e);
}
// Prepare the applet arguments
String args[] = new String[1];
args[0] = "barebones=true"; // run without a menu bar
// Put the applet in its frame
// addNotify() is called by MainFrameModified
frame = new MainFrameModified(applet, args, WIDTH, HEIGHT);
// Get a graphics region to match the applet size, using the Frame
Image image = frame.createImage(WIDTH, HEIGHT);
g = image.getGraphics();
// Ask the applet to paint itself
applet.validate();
applet.paint(g);
// Encode and return what it painted
res.setContentType("image/gif");
GifEncoder encoder = new GifEncoder(image, out);
encoder.encode();
}
finally {
// Clean up resources
if (applet != null) {
applet.stop();
applet.destroy();
applet.removeAll();
}
if (g != null) {
g.dispose();
}
if (frame != null) {
frame.removeAll();
frame.removeNotify();
frame.dispose();
}
}
}
}