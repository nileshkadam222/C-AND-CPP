import java.rmi.*;
public interface adinter extends Remote
{
public double add(double a,double b) throws RemoteException;
}