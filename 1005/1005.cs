using System;

namespace uri
{
    class Program
    {
        static void Main(string[] args)
        {
            double a, b, media;
            a = Double.Parse(Console.ReadLine());
            b = Double.Parse(Console.ReadLine());
            a *= 0.35;
            b *= 0.75;
            media = a + b;
            media = (10 * media) / 11;
            Console.WriteLine("MEDIA = " + media.ToString("0.00000"));
        }
    }
}
