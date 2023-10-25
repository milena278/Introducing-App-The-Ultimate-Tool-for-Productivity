using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using Deutsch_lernen_Console.Deutsch;

namespace Deutsch_lernen_Console.Deutsch
{
    class Pocetna
    {
        public static void Main()
        {

            Deutsch_lernen_Console.Deutsch.Izbornik izbor = new Izbornik();
            izbor.Ispisi();
            Console.Read();
            }
    }
}

