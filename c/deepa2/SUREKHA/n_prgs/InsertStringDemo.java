class InsertStringDemo{
    public static void main(String args[]){
      StringBuffer sb = new StringBuffer("We Java!");
         sb.insert(2, "like");
      System.out.println(sb);
    }
}