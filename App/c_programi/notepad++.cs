										programirano je u kompajleru : code blocks

novi red: \n
Horizontal tabulator: \t
Vertical tabulator: \v
bip: \a
ispiši kosu crtu: \\  
ispiši apostrof: \' 
ispiši navodnike: \"
ispiši upitnik: \?
ispiši znak %: %% 

-------------------------------------------------------------
/*				              scanf

kada korisnik upisuje traženi podatak, uvijek kod varijable upisujemo znak & osim kod matrica:
KADA KORISNIK UPISUJE PODATKE KOD FUNKCIJE SCANF POTREBNO JE OSTAVITI RAZMAK IZMEĐU ZNAKA
NAVODNIKA I DRŽAČA ZNAKA:  scanf(" %c", &znak);*/

char ime[10];
int godine; 

printf("Unesi svoje ime i svoje godine: \n");
scanf(" %s , %d", ime, &godine)

----------------------------------------------------------------------------
Type casting - privremena promjena tipa varijable:  #include <string.h>

int a,b,c;    //prvo deklariramo varijable
a=b=c= 75;    // zatim im dodjeljujemo vrijednosti

float average = 0.0;

average = ((float)a+ (float)b+ (float)c)/ 3;   //Type casting
printf("Srednja vrijednost: %.2f", average);


string Camnr, Klantnr, Ordernr, Bonnr, Volgnr;  // and so on. isto kao i prije, prvo deklariramo varijable
Camnr = Klantnr = Ordernr = Bonnr = Volgnr = string.Empty;   // zatim im dodjeljujemo svima prazan string odjednom.

-------------------------------------------------------------
/* zaglavlja:  Preprocessors, konstante

predprocesori(konstante) su #include <stdio.h> , #include <stdlib.h>, #define - za konstante, itd

#include <stdio.h> - standard input output - za printf (on uvijek mora biti prvi na popisu)

Konstante: možemo ih pisati na dva načina, da koristimo #define procesor ili sa ključnom riječi const

Možemo kreirati i svoja vlastita zaglavlja koje kasnije povezujemo s main programom (dolje je primjer)*/

#include <stdio.h>

#define NOVI_RED '\n'
#define MOJE_IME "Neko ime"
#define PDV 25
#define PI 3.14

int main()
{

   printf("Broj PI je: %.2f", PI);
   printf("%c", NOVI_RED);
   printf("%s", MOJEIME);
   printf("Stopa PDV-a je : %d", PDV);

return 0;

}

--------- ili ------------- 


#include <stdio.h>

int main ()

{

   const char NOVI_RED = '\n';
   const int PDV = 25;
   const float PI = 3.14;

return 0;
}

/*Da bi kreirali svoje konstante u zaglavlju, tada:  File - New File - Empty file - Yes
Upišemo željeno ime našeg zaglavlja, npr MojeZaglavlje.h 
kada se pojavi okvir Multiple selection kliknemo na OK.
na lijevoj strani ekrana odmah će nam se pojaviti folder Headers gdje ćemo nači svoja zaglavlja

u kreirana zaglavlja upisujemo ..........
zatim nazive tih #define zaglavlja napišemo u naš main program ispod svih drugih zaglavlja, ali tako da upišemo
#include "MojeZaglavlje.h" mora biti u navidnicima jer tako program zna da traži to zaglavlje u istom folderu gdje se i on nalazi.
*/


-------------------------------------------------------------

Externa varijabla ili globalna varijabla
Da bi deklalirali externu, odnosno globalnu varijablu koristimo
ključnu riječ extern: 

extern int broj;

ili samo:

int broj;
-----------------------------------------------------------------------------------------------------------------------
kada radimo sa matricama, u ovom slučaju kada radimo sa karakterima (char), tada
kreiramo matricu znakova: char ime[5]="Ivana"; , jedan znak više mora biti zbog znaka terminatora (\0).
Ako odmah dodijeljujemo vrijednost matrici tada nije potrebno postavljati vrijednost matrice :
char ime[]="Ivana"; Ako tek kasnije mislimo dodijeliti vrijednost matrici, tada moramo odmah dodati veličinu matrice.

Ako želimo kroz kod promijeniti vrijednost tekstualne matrice, tada to radimo sa funkcijom strcpy(ime, "Neko drugo ime");
u funkciju strcpy upišemo prvo naziv matrica varijable, odvojimo zarezom i pod navodnike upisujemo neku drugu vrijednost
koju kasnije sa funkcijom printf ispisujemo.

-----------------------------------------------------------------------------------------------------------------------
Modul -  ostatak od djeljenja cjelobrojnim brojem :
 7 % 3 ->  7/3 = 2  ostatak je 1 ( 3*2=6  do  7 je 1 )
10 % 3 -> 10/3 = 3  ostatak je 1 ( 3*3=9  do 10 je 1 )
31 % 4 -> 31/4 = 7  ostatak je 3 ( 4*7=28 do 31 je 3 )
24 % 5 -> 24/5 = 4  ostatak je 4 ( 4*5=20 do 24 je 4 ) 
-----------------------------------------------------------------------------------------------------------------------
/* kada upisujemo podatak u scanf, dobro je da napravimo razmak između navodnika i
držača podataka jer ponekad se javi greška kod unosa podataka. To ima veze sa
vrstom kompajlera, i sa stvarima iza. */
------------------------------------------------------------------------------------------------------------------------

------------------------------------------------------------------------------------------------------------------------
/* brisanje ekrana: u CodeBox radi system("cls"); bez da se dodaje zaglavlje
   negdje radi sa hederom #include <cstdlib>, zatim system("cls");
   negdje radi sa zaglavljen #include <conio.h> zatim clrscr(); */
---------------------------------------------------------------------------------------------------------
GCC compiler (GNU Compiler Collection)
-------------------------------------------------------------------------------------------------------------------------
// za Visual Studio 2015 Enterprise, pokrenemo program, novi projekt, dodijelimo mu naziv. 
Sada s desne strane obrišemo "project.cs" jer je to po difoltu od programa projekt. 
Mi ćemo napraviti svoj projekt. Sada desni klik na naziv našeg projekta i odaberemo 
Add . class, dodijelimo naziv s time da prvo slovo je veliko, npr: PrviProjekt - to je rapavilo 
kako se pišu clase.Sada nam se pojavio naš projekt i u prostoru gdje pišemo kod piše nam:
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApplication3._1.dan    // ovo je putanja gdje nam je smješten projekt
{
    class PrimjerPrvi
    {
	// u ovaj dio mi dodajemo:
                 static void Main()
	    { 
                             Console.Writeln("Pozdrav");
                      }
                  //do ovdje..... bez static void Main() program neće raditi
    }
}


// ispisivanje brojeva: 
int i=12, j=34, rez=0; 
Console.WriteLine("{0} + {1} = {2}", i, j, rez);

// razlika imeđu While i Do..While je u tome što će Do.. While ispisati 
liniju koda barem jednom jer će provjeru raditi tek na kraju, kod kod While prvo će provjeriti da li je 
uvijek istinit,ako je onda će ispisati liniju koda
 
&& i ||
/*kada provjeravamo petljom if, else if, možemo staviti samo jedan &, program će raditi,
ali neće dobro provjeriti sigurnije je da se koriste dva && i dva ||*/

// u c# Microsoft Visual Studio matricu deklariramo:
int[ ] a={10,15,25,23,11};

// kod ispisa matrica možemo koristiti for petlju ili foreach petlju 

//doklariranje matrice koju ćemo kasnije popuniti vrijednostima:
int [ ] x = new int[ 6];

// Klase i objekti:
objekat (tj. instanca)= ljudi, stol, stolica,kuća....u programiranju objekti su internet preglednici, svaki prozor je 
jedan od objekta.
Klasa MojPas, a instanca(odnosno Objekt klase MojPas je Pas - živo biće).
 

Klasa u c# jeziku je npr. Forma, ali mi možemo kreirati svoje vlastite klase po potrebi.
Da bi kreirali vlastite klase, potrebno je razumjeti osnovni koncept OOP, što su tipovi,klase,instance i objekti.

klase = su zjedničke osobine nekih objekata , 
npr: objekt ljudi , klasa za objekt ljudi je ime, prezime,godine .

klasa je složen tip podataka koji predstavlja predložak prema kojem se izrađuju objekti. 
klasom se definiraju osobine i ponašanje tih objekata.

klasa je nacrt kuće - nacrtana su vrata, prozori, teresa, zidovi.
Prema tom nacrtu aritekta može graditi kuću, odnosno objekt 

Ako su klase definirane kao Public, tada ih vidimo u drugim projektima,
ako su definirane kao private, tada su vidjeljive samo u tom projektu
primjer KlaseObjekti i KlaseObjektiMain

Metode - to su npr, u VB-u funkcije, a ovdje se zovu metode. Metoda je dio klase, ali i 
polja (fildovi) su dio klase. Razlika je ta što metode nešto rade.
Metode, odnosno funkcije!

Umjesto polja - fildova, možemo vrijednosti dodijeliti pomoću KONSTRUKTORA!
konstruktor inicijalizira objekt. 
kada objekt više nije potreban, destruktor će uništiti objekt.Konstruktor ima isti tipi isto ime kao i klasa
Postoje dvije vrste kontruktora: da sadrži parametre u zagradama ili da ne sadrži.
Defoltni konstruktor ništa iz vana ne moze primiti.Ako želimo da konstruktor može
primiti nešto iz vana, tada u zagrade upisujemo parametre.
Da bi kreirali kontruktor, potrebno je ispod naših klasa upisati:

PROPERTY - pomoću property-a možemo DOHVATITI vrijednosti parametara i ispisati ih na nekom
drugom mjestu. Property nam omogučuje dohvačanje vrijednosti varijabli iz klase.
Ako u aplikaciji imamo više forma, tada je svaka forma u zasebnoj klasi. Unutar jedne klase možemo
pristupati podacima samo te forme. Što ako želimo u jednu formu upisati podatke,a u drugoj formi ih
ispisivati? Zbog moguće narušene enkapsulacije dvije forme ne mogu komunicirati. 
Enkapsulacija(učahurenje) je povezivanje bitnih informacija i elemenata nekog objekta te njegovo ponašanje (metode) u 
povezane, izolorane cjeline da unutrašnji ustroj nije vidljiv vanjskom svijetu.


public Osoba(string ime, string prezime, int starost)
{
    Ime = ime;                                      -> i sada to u mainu pozivamo u popunjavamo podacima:
    Prezime = prezime;                            var Student = new Osoba ("Ivan", "Ivić", 25);
    Starost = starost;
}


ili bez parmetara, tj. difoltni konstruktor:


public Osoba()
{
}


Primjer:  klasa - automobil 
               Broj objekata 10   - imamo 10 marki automobila
               Atributi(svojstva)  - boja, težina, broj konja....
               Metode - otvori vrata, upali automobil, upali svijetla, ubaci u prvu brzinu



OBJAŠNJENJE:

1. Prvo kreiramo  glavni projekt Main:
     File - New -Project

zatim obrišemo sve osim:
using system;

class GlavniProgram
{
   Static void Main() - ako ovog nema, upišemo sami
     {

      }
}

2.sada kreiramo projekt gdje će biti klasa:
ADD - class- upišemo naziv, npr: Osoba, zatim obrišemo sve osim:
  class Osoba
    {
    }

3.sada klasi dodajemo polja(fildove):
class Osoba
{
       public string Ime;                // ako želimo imati objekte unutar klase, tada koristimo private
       public string Prezime;        // METODE, PROPERTI(atributi, svojstva), FIELDOVI PIŠEMO PRVO SLOVO VELIKO
       public int Starost;                  KOJI SU PUBLIC 
}                                                  
		                // PRIVATNI FILDOVI SE PIŠU SA:  _OVAKO	 
                                                  // VARIJABLE KOJE SU UNUTAR METODA, KONSTRUKTORA ILI SL.
                                                      PIŠU SE MALIM SLOVOM
                     

4. sada se vračamo u Main i radimo objekte(student) od klase Osoba:
using system;

class GlavniProgram
{
   Static void Main() - ako ovog nema, upišemo sami
     {
          var Student = new Osoba();       // kreiranje objekata klase Osoba i pridružili varijabli Student
          var Student2 = new Osoba();     // kreiranje objekata klase Osoba i pridružili varijabli Student2

         Student.Ime="Ivo";          // objektu dodjeljeno svojstvo "ime"
         Student.Prezime="Ivić";  // objektu dodojeljeno svojstvo "prezime"
         Student.Starost= 25;       // objektu dodojeljeno svojstvo "starost"

         Student2.Ime="Marko";
         Student2.Przime="Markić";
         Student2.Starost= 25;

         Console.WriteLine(Pas1.ImePsa + '  ' + Pas2.ImePsa);	// ispiši imena pasa
      }
}

5. sada kreiramo metode (funkciju):  i to se vratimo u klasu, pod korak 3:

class Osoba
{
     public string Ime;
     public string Prezime;
     public int Starost;

     public strint VratiPunoIme()                     -> ovo smo sada dodali
     {
             return Ime + " " + Prezime;
      }
}

6.sada se vratimo u Main, to je korak 4 i pozovemo metodu da se ispiše:

class GlavniProgram
{
   Static void Main() 
     {
          var Student = new Osoba();      
          var Student2 = new Osoba();     

         Student.Ime="Ivo";          
         Student.Prezime="Ivić";  
         Student.Starost= 25;       

         Student2.Ime="Marko";
         Student2.Przime="Markić";
         Student2.Starost= 25;

         Console.WriteLine(Student.Ime + '  ' + Student2.Ime);	
   
          Console.WriteLine(Student.VratiPunoIme);	-> ovo smo dodali
          Console.WriteLine(Student2.VratiPunoIme);      -> ovo smo dodali
      }
}


OBJAŠNJENJE 2 - SADA I SA  KONSTRUKTORIMA:

1. Kreiramo Main sa nazivom Primjer i kreiramo drugi projekt: clasu sa nazivom Kontruktor.
2. u Mainu obrišemo sve osim using system;

class Primjer
{
   Static void Main() - ako ovog nema, upišemo sami
     {

      }
}

3. u clasu gdje kreiramo klase sve obrišemo osim Class Konstruktor kreirmao klasu automobil:
class konstruktor 
{
       public string BojaAutomobila;
       public int GodinaProizvodnje;
       public int BrojKonja;  

       // kreiramo kontruktor, radimo sa kraticama: ctor i Tab, ispisati će nam se ovo:

        public kontruktor      // to je defoltni kontruktor, nema nikakve parametre i ništa iz vana
        {                                  ne može primati, zato ćemo sada samo dodati konstruktoru parametre:
        }   
       
       public konstruktor (string bojaAuta, int godProizvodnje, int brKonja)
        {
               BojaAutomobila= bojaAuta;
               GodinaProizvodnje= godProizvodnje;
               BrojKonja = brKonja;         
        }	
}

4. sada se vračamo u Main
using System;

class Program
{
     static void Main()
    {
        var car = new Kontruktor("Crni","BMW",800);
       
     }
}
 
PRIMJER : Property i koristim o ga sa konstruktorom:

budući da radimo u ovom primjeru property od varijable ime, tada mi u klasi ne trebamo tu varijablu, odnosno;

1. u prostoru gdje kreiramo klasu:

class student
{
    public string Prezime;
    public int Starost;


//kreiramo konstruktor (ctor i Tab)
//sada upišemo proper i Tab, ispisati će nam se:

public int MyProperty { get; set; }   // budući da radimo sa stringom, int zamjenimo sa string, i MyProperty zamjenimo sa nekim imenom
}

2. sada odemo u Main:

using system;

class Propertis
{
   static void Main()
{
var student = new Osoba("Ivo","Maric",25);
console.writeline(student.Ime);  -> ispiše Ivo
student.Ime ="Drugo ime";   -> ovo gledamo sa property
console.writeline(student.Ime);   -> ispiše Drugo ime
}
}

//kada bi u klasi propertys postavili na private, tada ga u Mainu nebi mogli
koristiti jer je samo konstruktor dio klase i on može mjenjati privatno.

var student = new Osoba("Ivo","Maric",25);
console.writeline(student.Ime);   -> ispiše Ivo
---------------------------------------------------------------------------------------------------------------------------------------------
Držači tipova podataka: 

An integer literal can be a decimal, octal, or hexadecimal constant.
A prefix specifies the base or radix: 0x or 0X for hexadecimal, 
                                                         0 for octal, 
                                                         and nothing for decimal.

An integer literal can also have a suffix that is a combination of U and L, for unsigned and long, respectively.
The suffix can be uppercase or lowercase and can be in any order.
Here are some examples of integer literals:

212 /* Legal */
215u /* Legal */
0xFeeL /* Legal */
078 /* Illegal: 8 is not an octal digit */
032UU /* Illegal: cannot repeat a suffix */

Following are other examples of various types of integer literals:

85 /* decimal */
0213 /* octal */
0x4b /* hexadecimal */
30 /* int */
30u /* unsigned int */
30l /* long */
30ul /* unsigned long */

%s = string  - završetak stringa završava sa znakon \0 kojeg ne vidimo
	primjer:  printf (" %s is best person ever", "Lucky");
                               ispisati će: Lucky is best person ever
	primjer:  printf (" %s is best %s ever", "Lucky","programmer");
                                ispisati će: Lucky is best programmer ever

%c = jedno slovo

%d = cijeli broj
	primjer: printf ("I eat %d ages", 2);¸
	             ispisati će se: I eat 2 ages

%6d = cjelobrojni broj sa dužinom od 6 znakova

%f = decimalni broj
	primjer: printf ("PI is %f", 3.1415925635);
                              ispisati će se: PI is 3.141592
	primjer: printf ("PI is %.2f", 3.1415925636);
	             ispisati će se :PI is 3.14
 %6f = decimalni broj sa dužinom od 6 znakova prije decimalne točke
%.2f = decimalni broj sa duzinom od dva znaka nakon decimalne točke
%6.2f = decimalni broj sa duzinom od 6 znakova i sa dva znaka nakon decimalne točke

%o - oktalni broj
\ooo - Octal number of one to three digits

%x - heksadecimalni broj
\xhh - Hexadecimal number of one or more digits

--------------------------------------------------------------------------------------
--zaglavlja	----
#include <stdio.h>
#include <limits.h> (ovo je sve za zaglavlje limits.h)  - ne pišemo sizeof(CHAR_BIT)
                                                                                    - to pišemo samo kada želimo vidjeti koliko je velikt tip
                                                                                    - sizeof(char);

CHAR_BIT   = number of bits in a char
SCHAR_MIN  = minimum value for a signed char
SCHAR_MAX  = maximum value for a signed char
UCHAR_MAX  = maximum value for an unsigned char
CHAR_MIN   = minimum value for a char
CHAR_MAX   = maximum value for a char
MB_LEN_MAX = maximum multibyte length of a character accross locales
SHRT_MIN   = minimum value for a short
SHRT_MAX   = maximum value for a short
USHRT_MAX  = maximum value for an unsigned short
INT_MIN    = minimum value for an int
INT_MAX    = maximum value for an int
UINT_MAX   = maximum value for an unsigned int
LONG_MIN   = minimum value for a long
LONG_MAX   = maximum value for a long
ULONG_MAX  = maximum value for an unsigned long
LLONG_MIN  = minimum value for a long long
LLONG_MAX  = maximum value for a long long
ULLONG_MAX = maximum value for an unsigned long long 

#include <float.h> (ovo je sve za zaglavlje float.h)   - ne pišemo sizeof(FLT_MIN)
                                                                                    - to pišemo samo kada želimo vidjeti koliko je velikt tip
                                                                                    - sizeof(float)
FLT_MIN  = min value of a float
FLT_MAX  = max value of a float
DBL_MIN  = min value of a double
DBL_MAX  = max value of a double
LDBL_MIN = min value of a long double
LDBL_MAX = max value of a long double

-----------------------------------------------------------------------------------------------------------------------------------------------------------
break loop:
primjer:	int a, koliko, maximum=10;

	printf ("Koliko puta će se petlja vrtjeti?" );
	scanf (" %d", $koliko);     -> korisnik je napisao, npr. broj 6

	for(i=1; i<=maximum; i++){
	printf ("Petlja se odvrtila %d puta\n", i);
                  if(i== koliko){
	break;                            -> kada dođe do broja 6, prekida sa prolaskom
	} }
	return 0;}
--------------------------------------------------------------------------------------------------------------------------------------------------	

primjer 2:	 int i, j;     			-> tablica množenja
	for (i=1; i<=10; i++){
	     for (j=1; j<=10; j++){
	          if (i%2!=0 %  &&  j%2!=0) {   -> ako su varijable i, j djeljenjem sa ostatkom 
	          printf("%3d", i+j)                         ispiši te brojeve. Ispisati će sve neparne brojeve
                            }                                                  jer smo napisali i%2!=0, npr; 7/3 = 2 MOD 1
	       }printf("\n"); 		    -> za parne brojeve i%2==0, ispisati će sve parne brojeve
                  }
	return 0; } 
-----------------------------------------------------------------------------------------------------------------------------------------------------
switch case uvijet:
primjer:	char ocjena ='c';
	
                 printf ("Upiši ocjenu učenika: ");
	scanf (" %c", &ocjena);

	switch(ocjena){
	case 'a': printf ("odličan");
	break;
	case 'b': printf ("vrlo dobar");
	break;
	case 'c': printf ("dobar");
	break;
	case 'd': printf ("dovoljan");
	break;
	case 'f': printf ("nedovoljan");
	default : printf ("Nepostojeća ocjena");
	}
--------------------------------------------------------------------------------------------
int i char: int i char možemo koristiti naizmjence, npr:

primjer 1:	#include<stdio.h>
	#include<stdlib.h>
	#include<ctype.h>   -> moramo dodati ovo zaglavlje

	int slovo ='c';

	if (isalpha(slovo)){
	    printf("%c je slovo", slovo );  -> iako je deklarirana varijabla 'slovo' kao int, možemo koristit
	}                                                     %c držać znaka.
			                    Kada bi umjesto slova 'c' htijeli upisati broj stim da nam držać znaka 
				  ostane %c, tada moramo pisati: int slovo ='9';
primjer 2: 	#include<stdio.h>
	#include<stdlib.h>
	#include<ctype.h>   

	int broj = ' 9 ';

	if(isdigit(broj)){
	   printf ("%c je broj", broj);
	}else{
	     if(isalpha(broj))
	         printf ("%c je slovo", broj);
                       }}
	return 0;}
------------------------------------------------------------------------------------------------------------------------------------
UpperCasse - LowerCasse:

primjer1: 	#include <stdio.h>
	#include <stdlib.h>
	#include <ctype.h>

	int main()
	{
	    int slovo ='9';
	 
	if(isalpha(slovo)){
    	      if(isupper(slovo)){
        	            printf("%c je veliko slovo", slovo);
    	}else{
         	      printf("%c je malo slovo", slovo);
    	        }
   	}
   

   	 if(isdigit(slovo)){
        	       printf("%c je broj", slovo);
	       }
    return 0; }


primjer - malo slovo u veliko.
	
	#include <stdio.h>
	#include <stdlib.h>
	#include <ctype.h>

	char slovo ='c';

	printf("%c je sada veliko slovo", toupper(slovo));
	return 0;
-----------------------------------------------------------------------------------------------------------------
strcat (Concatenation - poveži dva ili više stringova):  Samo sa char tipom podataka

primjer1:	#include <stdio.h>
	#include <stdlib.h>
	#include <string.h>  -> moramo dodati 


	char tekst[100] = "Hej " ;  ->   Samo sa char tipom podataka
	char dodaj[10];                        dvostruki navodnici pošto je tekst

	printf("unesi neku riječ: ");
	scanf(" %s",&dodaj);

	strcat(tekst, dodaj);
	printf("ovo smo dodali: ", tekst);
	return 0;}


primjer 2:	#include <stdio.h>
	#include <stdlib.h>
	#include <string.h>  -> moramo dodati 

	char tekst[100] ="hej";
	
	strcat (tekst, "ovo dodaj u tekst");
	printf ("%s", tekst );
	return 0;}
----------------------------------------------------------------------------------------
strcpy - jedan string zamjeni sa drugim:
primjer 1 :   #include <stdio.h>
	#include <stdlib.h>
	#include <string.h>  -> moramo dodati 

	char tekst[100] = "ovo je neki tekst"   -> dvostruki navodnici pošto je tekst
	strcpy(tekst, "sada je potpuno zamjenjen sa ovim tekstom");
	return 0;}
------------------------------------------------------------------------------------------------------------------------------
puts i gets - umjesto printf i scanf:
primjer1:		char osoba[35];
		puts("za razliku od printf, puts funkcija na kraju reda sama postavlja znak
		          za prijelaz u novi red");
		gets(osoba);  -> razlika    scanf (" %s", & prezime);													
                                   puts(osoba);  -> razlika    printf (osoba);
		 ispiše: Johan Bree                ispiše: Johan budući da je razmak, neće ispisati prezime     
--------------------------------------------------------------------------------------------------------------------------------------------
zaokruživanje brojeva, absolutna vrijednost, korjenovanje....... #include<math.h>
primjer1:	#include<stdio.h>
	#include<stdlib.h>
	#include<math.h>

	int main(){
	float a =9.9;
	float b = 3.4;
	float c = 9.9;

	printf("Funkcija floor zaokružuje broj na prvi manji broj od 9.9 je %.f\n", floor(a)); - > 9
	printf("Funkcija ceil zaukružeuje na prvi veči broj od 3.4 je %.f\n", ceil(b)); - > 4
	printf("Funkcija round zaokružuje na največi broj veči od 9.9 je %.f\n", round(c)); - > 10
	return 0:}
	
primjer2:	#include<stdio.h>
	#include<stdlib.h>
	#include<math.h>
	
	imt main(){

	int godina1, godina2, izracun=0;

	printf("Unesi godinu: ");  -> kada bi korisnik upisao, npr. prvo godinu rođenja, a tek onda
	scanf(" %d", $godina1);      trenutnu godinu, dobio bi negativan broj. Da bi to izbjegli
	printf("Unesi godinu");        koristimo funkciju abs.
	scanf(" %d", $godina2);
         
                 izracun= godina1 - godina2;
	izracun =abs(izracun);
	printf("Godina rođenjenja je: %d",izracun);
	return 0;}       
----------------------------------------------------------------------------------------------------------------------------------------
		---- Nasumični brojevi: random ----

primjer1:	#include<stdio.h>
	#include<stdlib.h>
	#include<math.h>

	int i, broj;

	for(i= 1;  i<=20; i++){
	   srand(time(NULL));  - > svaki puta prikaži nove brojeve  ili srand(time(0));
	   broj = rand()%10 +1;
	   printf("Random broj:%d\n", broj );  - > ispisati će 20 brojeva, modula od broja 10. Brojevi
	}     			            koji se djele su u rangu od 1 - do 20    
				               nasumično ispisanih.  
---------------------------------------------------------------------------------------------------------------------------------

shift: >> , <<, AND,OR, NOT:
primjer 1:     x = 0011 << 2    - >    binarni broj pomakni za 2 mjesta u lijevo
rješenje:   	   x= 1100   - ispisat će broj 

primjer 2:	 x = 00001110 << 3
rješenje:     x = 01110000  - ispisat će broj 112
100
010
110

primjer 1:  pišemo u programu: 12 & 10    - > binarno se zbraja 12 i 10, rezultat je 8    - AND konjukcija (^)
rješenje i objašnjenje: 1100 * 1010 = 1000	

0 * 0 = 0
0 * 1 = 0
1 * 0 = 0
1 * 1 = 1

primjer 1: 7|2=                OR - Disjunkcija (V) 
0 | 0 = 0
0 | 1 = 1
1 | 0 = 1
1 | 1 = 1





     
	