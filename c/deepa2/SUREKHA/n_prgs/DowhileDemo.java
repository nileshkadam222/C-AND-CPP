class DowhileDemo{
   public static void main(String args[ ])
   {
      int row, column, y;
      System.out.println("The Multiplication Table:\n");
      row = 1;
      do{
              column=1;
           do{
                   y = row*column;
                   System.out.print(" " +y);
                   column = column+1;
                }
           while(column<=5);
            System.out.println("\n");
            row = row+1;
          }
             while(row<=5);
        }
}