class MultiTable{
   final static int ROWS = 10;
   final static int COLUMNS = 20;
  
  public static void main(String args[])
  {
	int product[ ][ ] = new int[ROWS][COLUMNS];
	int row, column;
	System.out.println("Multiplication Table:");
	System.out.println(" ");
                    int i,j;
                    for(i=5; i<ROWS;i++)
                    {
                        for(j=5; j<COLUMNS; j++)
                     {
                         product[i][j] = i*j;
	     
	System.out.println("values are  " +i+" "+j+"product is " + product[i][j]);
                     }
	 System.out.println(" ");
                     } 
              }
}