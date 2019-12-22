class SubStringCons
{
    public static void main(String args[])
    {
	String s1 = "This is very cool. This is, too.";
                    String search = "is";
 	String sub = "was";
	String result = " ";
	int i;
                    do{
                         System.out.println(s1);
	     i = s1.indexOf(search);
	    if( i != -1){
                                      result = s1.substring(0, i);
                                      result = result + sub;
	                  result = result + s1.substring(i+ search.length());
                                      s1 = result;
                                     }
                              }while(i != -1);
                }
}
	