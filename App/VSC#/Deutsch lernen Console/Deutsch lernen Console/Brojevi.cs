using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Deutsch_lernen_Console
{
    class Brojevi
    {
        public void brojevi()
        {
            Console.ForegroundColor = ConsoleColor.DarkYellow;
            string [,] br = new string[4, 5] {
                {"Null","  21 - Einundzwanzig","   42 - Zweiundvierzig","  63 - Dreiundsechzig","   84 - Vierundachtzig"},
                {"Eins","  22 - Zweiundzwanzig","  43 - Dreiundvierzig","  64 - Vierundsechzig","   85 - Funfundachtzig"},
                {"Zwei","  23 - dreiundzwanzig","  44 - Vierundvierzig","  65 - Funfundsechzig","   86 - Sechsundachtzig"},
                {"Drei","  24 - Vierundzwanzig","  45 - Funfundvierzig","  66 - Sechsundsechzig","  87 - Siebenundachtzig"},
                        };

            /*string[,] sati = new string[12, 2] {
            {"02:00 - Es ist zwei Uhr.\t","14:00 - Es ist vierzehn Uhr."},
            {"14:10 - Es ist zehn nach vierzehn Uhr.","02:10 - Es ist zehn nach um zwei Uhr."},
            {"03:00 - Es ist um drei Uhr.\t","15:00 - Es ist funfzehg Uhr."},
            {"12:48 - Es ist Zwolf vor eins Uhr.","03:05 - Es ist funf Minuten nach um drei Uhr."},
            {"03:15 - Viertl nach drei.\t","03:05 - Es ist funf Minuten nach um drei."},
            {"03:30 - Halb vier.\t","\t 03:45 - Viertl vor vier."},
            {"03:45 - Drei Uhr funfundvierzig.","03:55 - Funf Minuten vor vier."},
            {"04:00 - Es ist um vier Uhr.\t","16:00 - Es ist sechzehn Uhr."},
            {"04:15 - Es ist vier Uhr funfzehn.","16:15 - sechzehn Uhr funfzehn."},
            {"04:30 - Vier Uhr dreizig.\t","04:30 - Halb funf."},
            {"16:30 - Sechzehn Uhr dreizig.\t","04:45 - Es ist vier Uhr funfundvierzig."},
            {"04:00 - Um vier Uhr.\t ","\t 16:45 - Sechzehn Uhr funfundvierzig. "}
            };
            /*
            string[,] redniBrojevi = new string[10, 4] {
            {"1.Erste   ","11.Elfte ","21.Einundzwanzigste","35 - Funfunddreissigste"},
            {"2.Zweite","12.Zwolfte ","22.Zweiundzwanzigste","36 - Sechstunddreissigste"},
            {"3.Dritte","13.Dreizehnte ","23.Dreiundzwanzigste","37 - Siebenunddreissigste"},
            {"4.Vierte","14.Vierzehnte ","24.Vierundzwanzigste","38 - Achtunddreissigste"},
            {"5.Funfte","15.Funfzehnte ","25.Funfundzwanzigste","39 - Neununddreissigste"},
            {"6.Sechste","16.Sechzehnte ","30.Dreissigste   ","40 - Vierzigste"},
            {"7.Siebte","17.Siebzehnte ","31.Einunddreissigste","50 - Funfzigste"},
            {"8.Achte   ", "18.Achtzehnte ","32.Zweiunddreissigste","60 - Sechzigste"},
            {"9.Neunte","19.Neunzehnte ","33.Dreiunddreissigste","70 - Siebzigste"},
            {"10.Zehnte","20.Zwanzigste ","34.Vierunddreissigste","80 - Achtzigste"}
            };
            Console.WriteLine("\n\n");
            Console.WriteLine("\t\t\tZahlen Von 0 bis 100 - Brojevi od 0 do 100\n\n");*/
           
            for (int i = 0; i < br.GetLength(0);i++)
            {
                Console.Write("{0} ", i);
                for (int j = 0; j < br.GetLength(0); j++)
                {
                    Console.Write("{0} ", br[i, j]);
                }
                Console.WriteLine();
            }

            
        }
    }
}