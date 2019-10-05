using System;
using System.Collections.Generic;

namespace _01.ReverseStrings
{
    class Program
    {
        static void Main(string[] args)
        {
            string input = Console.ReadLine();

            Stack<char> symbol = new Stack<char>();

            foreach (var ch in input)
            {
                symbol.Push(ch);
            }

            while (symbol.Count != 0)
            {
                Console.Write(symbol.Pop());
            }
            Console.WriteLine();
        }
    }
}
