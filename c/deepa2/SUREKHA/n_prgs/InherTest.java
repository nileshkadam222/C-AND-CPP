class Room{
   int length;
   int breadth;
  Room(int x, int y)
  {
      length = x;
      breadth = y;
   }
    int area()
    {
      return(length*breadth);
    }
}

class BedRoom extends Room{
     int height;
    BedRoom(int x, int y, int z)
   {
      super(x,y);
      height = z;
     }
     int volume()
    {
     return(length*breadth*height);
    }
}
class InherTest{
  public static void main(String args[])
{
   BedRoom room1 = new BedRoom(10,20,30);
    int area1 = room1.area();
    int volume1 = room1.volume();
    System.out.println("Area is:" +area1);
    System.out.println("Volume is:" +volume1);
   }
}