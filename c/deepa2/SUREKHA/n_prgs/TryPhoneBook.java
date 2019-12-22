import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;
import java.io.Serializable;
import java.util.HashMap;
import java.io.*;

public class Person implements Comparable<Person>, Serializable
{
    public Person(String firstName, String surname)
    {
        this.firstName = firstName;
        this.surname = surname;
    }

    public String toString()
    {
        return firstName + " " + surname;
    }

    public static Person readPerson()
    {
        String firstName = null;
        String surName = null;
        try
        {
            System.out.print("Enter first name: ");
            firstName = keyboard.readLine().trim();
            System.out.print("Enter surname :");
            surName = keyboard.readLine().trim();
        }
        catch(Exception e)
        {
            System.err.println("Error reading a name");
            e.printStackTrace();
            System.exit(1);
        }
        return new Person(firstName,surName);
    }
    private static BufferedReader keyboard = new BufferedReader(new InputStreamReader(System.in));
    private String firstName;
    private String surname;
}

class PhoneNumber implements Serializable
{
    public PhoneNumber(String areaCode, String number)
    {
        this.areaCode = areaCode;
        this.number = number;
    }

    public String toString()
    {
        return areaCode + " " + number;
    }

    public static PhoneNumber readNumber()
    {
        String area = null;
        String localcode = null;
        try
        {
            System.out.print("Enter area code :");
            area = keyboard.readLine().trim();
            System.out.print("Enter local code :");
            localcode = keyboard.readLine().trim();
            System.out.println("Enter the number :");
            localcode += " " + keyboard.readLine().trim();
        }
        catch(IOException e)
        {
            System.err.println("Error reading a phone number");
            e.printStackTrace();
            System.exit(1);
        }
        return new PhoneNumber(area,localcode);
    }

    private static BufferedReader keyboard = new BufferedReader(new InputStreamReader(System.in));
    private String areaCode;
    private String number;
}

class BookEntry implements Serializable
{
    public BookEntry(Person erson, PhoneNumber number)
    {
        this.person = person;
        this.number = number;
    }

    public Person getPerson()
    {
        return person;
    }

    public PhoneNumber getNumber()
    {
        return number;
    }

    public String toString()
    {
        return person.toString() + '\n' + number.toString();
    }

    public static BookEntry readEntry()
    {
        return new BookEntry(Person.readPerson() , PhoneNumber.readNumber());
    }

    private Person person;
    private PhoneNumber number;
}

class PhoneBook implements Serializable
{
    public void addEntry(BookEntry entry)
    {
        phonebook.put(entry.getPerson(),entry);
    }

    public BookEntry getEntry(Person key)
    {
        return phonebook.get(key);
    }

    public PhoneNumber getNumber(Person key)
    {
        return getEntry(key).getNumber();
    }

    private HashMap<Person,BookEntry> phonebook = new HashMap<Person,BookEntry>();
}    


public class TryPhoneBook
{
    public static void main(String args[])
    {
        PhoneBook book = new PhoneBook();
        FormattedInput in = new FormattedInput();
        Person someone;
        for(;;)
        {
            System.out.println("Enter 1 to enter a new phone book entry\n" +
                               "Enter 2 to find te number for a name\n" +
                               "Enter 9 to quit");

            int what = 0;
            try
            {
                what = in.readInt();
            }
            catch(InvalidUserInputException e)
            {
                System.out.println(e.getMessage() + "\nTry again");
                continue;
            }

            switch(what)
            {
                case 1: book.addEntry(BookEntry.readEntry());
                    break;
                case 2:
                        someone = Person.readPerson();
                        BookEntry entry = book.getEntry(someone);
                        if(entry == null)
                        {
                            System.out.println("The number for " + someone +
                                              "was not found ");
                        }
                        else
                        {
                            System.out.println("The number for " + someone +
                                            " is " + entry.getNumber());
                        }
                        break;
                case 9:
                        System.out.println("Invalid Selection, try again");
                        break;
            }
        }
    }
}
