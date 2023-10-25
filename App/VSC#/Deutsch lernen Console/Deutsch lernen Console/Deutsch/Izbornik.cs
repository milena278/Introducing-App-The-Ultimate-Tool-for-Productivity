using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using Deutsch_lernen_Console.Deutsch;

namespace Deutsch_lernen_Console.Deutsch
{
    class Izbornik
    {
       public void Ispisi()
       {
           Deutsch_lernen_Console.Abeceda abece = new Abeceda();
           Deutsch_lernen_Console.Brojevi broj = new Brojevi();

           Console.Title = "Broj lekcije";
           Console.ForegroundColor = ConsoleColor.Blue;
           Start:
           Console.WriteLine("\n");
           Console.WriteLine("\t\t\tOdaberite broj lekcije\n");
           Console.WriteLine("\t1)  Alphabeth - Abeceda");
           Console.WriteLine("\t2)  Zahlen - Brojevi");
           Console.WriteLine("\t3)  Die Jahreszeiten");
           Console.WriteLine("\t4)  Wochentag und Tageszeiten - Dani u tjednu i doba dana");
           Console.WriteLine("\t5)  Personalpronomen - Osobne zamjenice");
           Console.WriteLine("\t6)  Verbs - Glagoli");
           Console.WriteLine("\t7)  Bestimmter und unbestimmter Artikel - Odredeni i neodredeni clanovi");
           Console.WriteLine("\t8)  Mjeseci");
           Console.WriteLine("\t9)  Farben - Boje");
           Console.WriteLine("\t10) Familie - Obitelj");
           Console.WriteLine("\t11) Kleidung - Odjeća");
           try
           {
               Console.Write("Lekcija: ");
               int odabir = Convert.ToInt32(Console.ReadLine());
               switch (odabir)
               {
                   case 1:
                       Console.Title = "Alphabeth";
                       Console.Clear();
                       abece.abeceda();
                       break;
                   case 2:
                       Console.Title = "Zahlen";
                       Console.Clear();
                       broj.brojevi();
                       break;
                   case 3:
                       Console.Title = "Die Jahreszeiten";
                       break;
                   case 4:
                       Console.Title = "Wochentag und Tageszeiten";
                       break;
                   case 5:
                       Console.Title = "Personalpronomen";
                       break;
                   case 6:
                       Console.Title = "Verbs";
                       break;
                   case 7:
                       Console.Title = "Bestimmter und unbestimmter Artikel ";
                       break;
                   case 8:
                       Console.Title = "Monate";
                       break;
                   case 9:
                       Console.Title = "Farben";
                       break;
                   case 10:
                       Console.Title = "Familie";
                       break;
                   case 11:
                       Console.Title = "Kleidung";
                       break;
                   default:
                       Console.WriteLine("Unesite broj lekcije od 1 - 11!");
                       break;
               }
           }
           catch 
           {
               Console.WriteLine("greška");
           }
           goto Start;
       }      
    }
}

    


