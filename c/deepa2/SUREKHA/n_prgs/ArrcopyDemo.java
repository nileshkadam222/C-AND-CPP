import java.lang.*;
class ArrcopyDemo{  
public static void main(String args[ ])
   {
    int[ ] copyFrom = {'d','e','c','a','f','f','e','i','n','a','d','e','d'};
    char[ ] copyTo = new char[7];
    System.out.println("ArrayCopy"+copyFrom, 2,copyTo,0,7);
    System.out.println(new String(copyTo));
   }
}