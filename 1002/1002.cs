using System;

namespace uri
{
    class Program
    {
        static void Main(string[] args)
        {
            double pi = 3.14159;
            double raio = Double.Parse(Console.ReadLine());
            double area = (raio*raio) * pi;
            Console.WriteLine("A="+area.ToString("0.0000"));        
        }
    }
}
