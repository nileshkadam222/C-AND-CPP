class SetChar{
    public static void main(String args[]){
    StringBuffer sb = new StringBuffer("Hello");
    System.out.println("Buffer before=" +sb);
    System.out.println("charAt(1) before =" +sb.charAt(1));
       sb.setCharAt(1,'i');
       sb.setLength(2);
       System.out.println("Buffer after=" +sb);
       System.out.println("charAt(1) after=" + sb.charAt(1));
       System.out.println(sb);
        sb.reverse();
        System.out.println(sb);
       }
}