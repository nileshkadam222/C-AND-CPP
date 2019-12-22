class Pascal{
public static void main(String args[])
{
int i,j;
	int a[][]=new int[5][];
	a[0]=new int[1];
	a[1]=new int[2];
	a[2]=new int[3];
	a[3]=new int[4];
	a[4]=new int[5];	

a[0][0]=1;
a[1][0]=1;
a[1][1]=1;
for( i=2;i<5;i++)
{
a[i][0]=1;
for( j=1;j<i;j++)
{
a[i][j]=a[i-1][j-1]+a[i-1][j];
}
a[i][j]=1;
}
for( i=0;i<5;i++)
{
for( j=0;j<i+1;j++)
{

System.out.print(a[i][j]+" ");
}
System.out.println("");
}
}
}