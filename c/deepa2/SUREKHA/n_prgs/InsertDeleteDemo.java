class InsertDeleteDemo{
   public static void main(String args[ ])
   {
      StringBuffer sb = new StringBuffer("I java!");
        sb.insert(2, "like");
        System.out.println(sb);
     
        sb.reverse();
        System.out.println(sb);

        sb.deleteCharAt(0);
        System.out.println("After DeleteChar At:"+sb);
        sb.replace(5,8, "HELLO");
        System.out.println("After replace:" + sb);
    }
}
