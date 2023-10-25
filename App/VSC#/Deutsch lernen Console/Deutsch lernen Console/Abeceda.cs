using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Deutsch_lernen_Console
{
    class Abeceda
    {
        public void abeceda() 
        {
            string[,] abc = new string[5,5] {
            {"a - a","f - ef","k - ka","q - ku","v - fau"},
            {"b - be","g - ge","l - el","r - er","w - ve"},
            {"c - ce","h - ha","m - em","s - es","x - iks"},
            {"d - de","i - i","o - o","t - te","y - upsilon"},
            {"e - e","j - jot","p - pe","u - u","z - cet"}
            };
            Console.ForegroundColor = ConsoleColor.DarkYellow;
            Console.WriteLine("\t\tDas Deutsch Alphabet - Njemacka abeceda\n");
            Console.WriteLine("Slovo - der Buchstabe");
            Console.WriteLine("Slova - die Buchstaben\n");

            for (int i = 0; i < abc.GetLength(0); i++)
            {
                for (int j = 0; j < abc.GetLength(0); j++)
                {
                    Console.Write("{0}\t\t" , abc[i, j]);
                }
                Console.WriteLine();
            }
            Console.WriteLine("\nNjemacka abeceda se sastoji od 26 slova od kojih su:\n6 samoglsanika i 20 suglasnika.\nSamoglasnici su: a, e, i, o, u i y.\nSuglasnici su: b, c, d, f, g, h, j, k, l, m, n, p, q, r, s, t, v, w, x i z.\nPored ovih slova u njemackom jeziku postoje još slova: ä, ö, ü i ß.");
        }
    }
}
