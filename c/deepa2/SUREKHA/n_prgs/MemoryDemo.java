/*
Memory Management:
java provides automatic garbage collection and recycle unused objects. You can run the garbage collector by calling gc() method and then  call freeMemory() to get a baseline memory usage. Then execute your code  and call freeMemory() method again to see how much memory it is allocating.

Example: MemoryDemo.java
*/
class MemoryDemo{
public static void main(String args[ ])
{
  Runtime r = Runtime.getRuntime();
  long mem1, mem2;
  Integer someints[ ] = new Integer[1000];
   System.out.println("Total Memory is:" +r.totalMemory());
  mem1 = r.freeMemory();
  System.out.println("Initial Free Memory:" +mem1);
  r.gc();
  mem1 = r.freeMemory();
  System.out.println("Free Memory after garbage collection:" +mem1);
  for(int i=0; i<1000; i++)
  someints[i] = new Integer(i);
  mem2 = r.freeMemory();
  System.out.println("Free Memory after allocation:" + mem2);
  System.out.println("Memory used by allocation:" +(mem1-mem2));
  //discarding the integers
  for(int i=0; i<1000; i++)
  someints[i] = null;
 r.gc();
  mem2 = r.freeMemory();
 System.out.println("Free memory after allocating:" + "discarded integers:"+mem2);
}
}