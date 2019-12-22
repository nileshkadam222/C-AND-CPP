interface callback{
 void callback(int param);
}

class client implements callback{

public void callback(int p){
System.out.println("callback called bwith  "+p);
}
}

class testIface{
public static void main(String arg[]){
callback c=new client();
c.callback(42);
}
}