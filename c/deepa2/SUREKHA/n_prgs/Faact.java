class Faact{
  public static void main(String args[]){
   int i = 0, fact =1, num=5;
    i = num;
   while(num !=0)
   {
     fact = fact*num;
     --num;
    }
    System.out.println("The factorial of "+i+" is:" +fact);
  }
}