class Maths{
     static  float mul(float x, float y)
     {
        return x*y;
      }
       static float divide(float x, float y)
      {
         return x/y;
      }
}

class MathApp{
    public static void main(String args[ ])
    {
       float a = Maths.mul(4.0f, 5.0f);
       float b = Maths.divide(a,2.0f);
       System.out.println("The value of a:"+a);
       System.out.println("The value of b:" +b);
    }
}