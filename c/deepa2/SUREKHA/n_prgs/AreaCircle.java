class Circle{
       double r;
        double pi ;
          
          void getArea(double a, double b)
         {              
           r = a;
          pi = b;
            }
           double cArea()
            {  
               double area = pi*r*r;
            return(area);
}
}

class AreaCircle{
    public static void main(String args[])
     {
         double area1;
      Circle c = new Circle();
              c.getArea(3.14, 5);
               area1 = c.cArea();
         System.out.println("Area of a Circle:" +area1);
      }
}
                 
            