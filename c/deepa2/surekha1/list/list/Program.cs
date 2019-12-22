using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Collections;

namespace list
{
    class Program
    {
        static void Main(string[] args)
        {
            
            ArrayList list = new ArrayList();
            list.Add(5);
            list.Add(7);
            Example(list);
            Console.ReadLine();
        }
        static void Example(ArrayList list)
        {
            foreach (int i in list)
            {
                Console.WriteLine(i);
            }
        }
    }
}
