package jcookies.example;

import java.awt.*;
import java.awt.event.*;
import java.applet.*;
import jcookies.*;
import java.util.Properties;
import java.util.Date;
/**
 * An example for using the JCookie API. <p>
 * Shows a person - details form, read & write buttons and a list of available cookies. <p>
 * Enables the user to read / write "person data cookies" to /  from the cache.
 *@author Yoav Zur & Amit Caspi
 */
public class CookieExample extends Applet {
  GridBagLayout gridBagLayout1 = new GridBagLayout();
  TextField nameField = new TextField();
  Label nameLlabel = new Label();
  Label ageLabel = new Label();
  TextField ageField = new TextField();
  Label idLabel = new Label();
  TextField idField = new TextField();
  Label occupationLabel = new Label();
  TextField occupationField = new TextField();
  Label cookieLabel = new Label();
  TextField cookieField = new TextField();
  Button saveButton = new Button();
  Button readButton = new Button();
  Label personLabel = new Label();
  Label cookiesLabel = new Label();
  List cookiesList = new List();
  Panel panel1 = new Panel();
  GridBagLayout gridBagLayout2 = new GridBagLayout();

  /**
   * The one and only CookiesJar
   */
  CookiesJar cJar=new CookiesJar(this);

  /**
   *Construct the applet
   */
  public CookieExample() {

  }

   /**
   *Init the applet
   */
  public void init() {
    try  {
      jbInit();
    }
    catch(Exception e)  {
      e.printStackTrace();
    }
  }

  /**
   * Build the GUI
   */
  private void jbInit() throws Exception {
    nameField.setName("");
    this.setSize(new Dimension(400,450));
    this.setLayout(gridBagLayout1);
    nameLlabel.setText("Name");
    ageLabel.setText("Age");
    idLabel.setText("Id");
    occupationLabel.setText("Occupation");
    cookieLabel.setText("Cookie name");
    saveButton.setLabel("Save");
    saveButton.addActionListener(new java.awt.event.ActionListener() {

      public void actionPerformed(ActionEvent e) {
        saveButton_actionPerformed(e);
      }
    });
    readButton.setName("Read");
    readButton.setLabel("Read");
    readButton.addActionListener(new java.awt.event.ActionListener() {

      public void actionPerformed(ActionEvent e) {
        readButton_actionPerformed(e);
      }
    });
    cookieField.setColumns(20);
    personLabel.setFont(new java.awt.Font("Dialog", 1, 16));
    personLabel.setText("Person");
    cookiesLabel.setFont(new java.awt.Font("Dialog", 1, 16));
    cookiesLabel.setName("");
    cookiesLabel.setText("Available Cookies");
    panel1.setLayout(gridBagLayout2);

    this.add(nameLlabel, buildGridBag(0, 1, 1, 1, 0.0, 0.0
            ,GridBagConstraints.WEST, GridBagConstraints.NONE, new Insets(5, 5, 5, 5), 0, 0));
    this.add(ageLabel, buildGridBag(0, 2, 1, 1, 0.0, 0.0
            ,GridBagConstraints.WEST, GridBagConstraints.NONE, new Insets(5, 5, 5, 5), 0, 0));
    this.add(nameField, buildGridBag(1, 1, 1, 1, 0.0, 0.0
            ,GridBagConstraints.WEST, GridBagConstraints.HORIZONTAL, new Insets(5, 5, 5, 5), 0, 0));
    this.add(ageField, buildGridBag(1, 2, 1, 1, 0.0, 0.0
            ,GridBagConstraints.WEST, GridBagConstraints.HORIZONTAL, new Insets(5, 5, 5, 5), 0, 0));
    this.add(idLabel, buildGridBag(0, 3, 1, 1, 0.0, 0.0
            ,GridBagConstraints.WEST, GridBagConstraints.NONE, new Insets(5, 5, 5, 5), 0, 0));
    this.add(idField, buildGridBag(1, 3, 1, 1, 0.0, 0.0
            ,GridBagConstraints.WEST, GridBagConstraints.HORIZONTAL, new Insets(5, 5, 5, 5), 0, 0));
    this.add(occupationLabel, buildGridBag(0, 4, 1, 1, 0.0, 0.0
            ,GridBagConstraints.WEST, GridBagConstraints.NONE, new Insets(5, 5, 5, 5), 0, 0));
    this.add(occupationField, buildGridBag(1, 4, 1, 1, 0.0, 0.0
            ,GridBagConstraints.WEST, GridBagConstraints.HORIZONTAL, new Insets(5, 5, 5, 5), 0, 0));
    this.add(cookieLabel, buildGridBag(0, 5, 1, 1, 0.0, 0.0
            ,GridBagConstraints.WEST, GridBagConstraints.NONE, new Insets(30, 5, 5, 5), 0, 0));
    this.add(cookieField, buildGridBag(1, 5, 1, 1, 0.0, 0.0
            ,GridBagConstraints.WEST, GridBagConstraints.HORIZONTAL, new Insets(30, 5, 5, 5), 0, 0));
    this.add(personLabel, buildGridBag(0, 0, 2, 1, 0.0, 0.0
            ,GridBagConstraints.CENTER, GridBagConstraints.NONE, new Insets(5, 5, 5, 5), 0, 0));
    this.add(cookiesLabel, buildGridBag(0, 7, 2, 1, 0.0, 0.0
            ,GridBagConstraints.CENTER, GridBagConstraints.NONE, new Insets(5, 5, 5, 5), 0, 0));
    this.add(cookiesList, buildGridBag(0, 8, 2, 1, 1.0, 1.0
            ,GridBagConstraints.CENTER, GridBagConstraints.BOTH, new Insets(5, 5, 5, 5), 0, 0));
    this.add(panel1, buildGridBag(0, 6, 2, 1, 0.0, 0.0
            ,GridBagConstraints.WEST, GridBagConstraints.HORIZONTAL, new Insets(0, 0, 0, 0), 0, 0));
    panel1.add(readButton, buildGridBag(0, 0, 1, 1, 0.0, 0.0
            ,GridBagConstraints.CENTER, GridBagConstraints.NONE, new Insets(5, 5, 5, 15), 0, 0));
    panel1.add(saveButton, buildGridBag(1, 0, 1, 1, 0.0, 0.0
            ,GridBagConstraints.CENTER, GridBagConstraints.NONE, new Insets(5, 15, 5, 5), 0, 0));
    fillList();
  }

  private  GridBagConstraints buildGridBag(int gridx,int gridy,int gridwidth,
                          int gridheight,double weightx,double weighty,
                          int anchor,int fill,Insets insets,int ipadx,int ipady){
    GridBagConstraints grid = new GridBagConstraints();
    grid.gridx=gridx;
    grid.gridy=gridy;
    grid.gridwidth=gridwidth;
    grid.gridheight=gridheight;
    grid.weightx=weightx;
    grid.weighty=weighty;
    grid.anchor=anchor;
    grid.fill=fill;
    grid.insets=insets;
    grid.ipadx=ipadx;
    grid.ipady=ipady;
    return grid;
  }

  /**
   * shows how to create a Person object out of a cookie
   */
  void readButton_actionPerformed(ActionEvent e) {
    /* for this example we create a Person instance from the properties object
    and then fill the GUI form from this object.
    This is offcourse superfluous and is done only to show how to translate from a properties object
    to  a data class */
    String cookieName=cookieField.getText();
    try{
        // read from the cookie
        Properties personProps=cJar.read(cookieName);

        //fill the object
        Person person=new Person();
        person.setName(getPropertyValue("name",personProps));
        int age=Integer.valueOf(getPropertyValue("age",personProps)).intValue();
        person.setAge(age);
        long id=Long.valueOf(getPropertyValue("id",personProps)).longValue();
        person.setId(id);
        person.setOccupation(getPropertyValue("occupation",personProps));

        //copy to the GUI form
        nameField.setText(person.getName());
        idField.setText(String.valueOf(person.getId()));
        ageField.setText(String.valueOf(person.getAge()));
        occupationField.setText(person.getOccupation());
    }catch(CookieParseException k){
        error("Couldn't parse "+cookieName);
    }catch(CookieNotFoundException j){
        error("Cookie "+cookieName+" does not exist");
    }catch(CookieNotSupportedException j){
        error("No cookie support");
    }catch(NumberFormatException j){
      error("At least one numeric field (age, id) has a non-numeric value");
    }
  }

  /**
   * Util method, returns the value if found, else returns constant string
   */
  private String getPropertyValue(String propName,Properties prop){
    Object val=prop.get(propName);
    if(val==null){
      return "???";
    }else{
      return val.toString();
    }
  }

  /**
   * Shows how to write a person object into a cookie
   */
  void saveButton_actionPerformed(ActionEvent e) {
    /* for this example we create a Person instance out of the fields values
      and then load the person's data fields into the properties object. This
      is offcourse superfluous and is done only to show how to translate from a data class
       to a properties object*/

    //create a person from the GUI form
    try{
      Person person=new Person();
      person.setName(nameField.getText());
      person.setAge(Integer.valueOf(ageField.getText()).intValue());
      person.setId(Long.valueOf(idField.getText()).longValue());
      person.setOccupation(occupationField.getText());


     // now lets say we want to save the state of a Person object into a cookie
      Properties personProps=new Properties();
      personProps.put("name",person.getName());
      personProps.put("age",String.valueOf(person.getAge()));
      personProps.put("id",String.valueOf(person.getId()));
      personProps.put("occupation",person.getOccupation());

      //get the name of the cookie
      String name=cookieField.getText();

      //save it for a year from now
      Date expireDate=new Date();
      expireDate.setYear(expireDate.getYear()+1);

      //write it down
      cJar.write(personProps,name,expireDate);

      //update the GUI list
      fillList();
     }catch(CookieNotSupportedException j){
       error("No cookie support");
     }catch(CookieParseException k){
      error("At least one field contains an illegal character");
     }catch(NumberFormatException j){
      error("At least one numeric field (age, id) has a non-numeric value");
     }
  }

  /**
   * util method to handle errors
   */
  private void error(String msg){
   cookiesList.clear();
   cookiesList.add(msg);
  }

  /**
   * shows how to read all available cookie names
   */
  private void fillList(){
    // clear the GUI list
    cookiesList.clear();
    try{
      // get the names, write to the GUI
      String[] names=cJar.getAllNames();
      for(int i=0;i<names.length;i++){
        cookiesList.add(names[i]);
      }
    }catch(CookieNotSupportedException h){
     h.getNestedException().printStackTrace();
     error("No cookie support");
    }
  }

 
}
