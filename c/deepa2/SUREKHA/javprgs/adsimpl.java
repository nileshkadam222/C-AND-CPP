import java.rmi.*;
import java.rmi.server.*;
public class adsimpl extends UnicastRemoteObject implements adinter 
{
public adsimpl()throws RemoteException
{
}
public double add(double a,double b)throws RemoteException
{
return a+b;
}
}