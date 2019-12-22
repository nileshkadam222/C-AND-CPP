package mypack;

class balance{
String name;
double bal;
 
balance(String n, double b){
name=n;
bal=b;
}

void show(){
if(bal<0)
 System.out.println("-->");
System.out.println(name  +" :  $" + bal);
}
}

class accountbalance{
public static void main(String args[]){
balance current[] =new balance[3];

current[0] = new balance("hetal.k.m",121.23);
current[1] = new balance("kunjal.k.m",521.23);
current[3] = new balance("makwana",621.23);

for(int i=0; i<3;i++) current[i].show();
}
}