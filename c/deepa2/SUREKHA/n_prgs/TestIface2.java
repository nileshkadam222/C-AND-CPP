class AnotherClient implements Callback{
	public void callback(int p){
	System.out.println("Another version of Callback");
	System.out.println("p squared is:" +(p*p));
                   }
}
class TestIface2{
             public static void main(String args[ ]){
            Callback c = new Client()
            AnotherClient ob = new AnotherClient();
            c.callback(42);
            c =ob;
            c.callback(42);
       }
}