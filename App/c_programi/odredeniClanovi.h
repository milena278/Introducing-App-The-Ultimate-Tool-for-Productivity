
//funkcija za odredene i neodredene clanove

void clanovi(){
     system("color 8");
     int i,j;
     char *odgovor[5];
     char *cl[10][5]={{"Uvjet    ","Muski","Zenski","Srednji","Mnozina"},
                {"Nominativ","der",  " die",   " das",  " die"},
                {"Akuzativ ","den",  " die",   " das",  " die"},
                {"Dativ    ","dem",  " der",   " dem",  " den"},
                {"Genitiv  ","des",  " der",   " des",  " der"},
                {" "," "," "," "," "},
                {"Nominativ","ein",  " eine",  " ein",  " keine"},
                {"Akuzativ ","einen"," eine",  " ein",  " keine"},
                {"Dativ    ","einem"," einer", " einem"," keinen"},
                {"Genitiv  ","eines"," einer", " eines"," keiner"}
};

printf("\n\nNominativ koristimo za subjekt neke recenice - tko(wer) ili sto(was) radi");
printf("\nAkkuzativ koristimo za objekte neke recenice - koga(wem) ili sto (was)");
printf("\nNominativ i akuzativ se razlikuju samo u muskom rodu");
printf("\nDativ se koristi za indirektni objekt- kumu(wem)");
printf("\nGenitiv u reccenici odgovara cije je sto - cije(weseen). Koristimo ga u B1 razini");

for(i=0;i<10;i++){
    for(j=0;j<5;j++){
        printf("%s\t", cl[i][j]);
    }
    printf("\n");
    }

printf("\n\nBeispiele:\n");
printf("\n1.Nominativ: der Mann ist main Vater. (der Vater)");
printf("\n2.Nominativ: Wo ist das Auto? (das Auto)");
printf("\n3.Nominativ: Das ist ein Schwimmbad.(der Schwimmbad - bazen)");
printf("\n4.Akkuzativ: Ich habe einen Bruder. (das Bruder)");
printf("\n5.Akkuzativ: Kannst du den Computer repariaren? (der Computer)");
printf("\n6.Akkuzativ: Hast du eine Katze? (die Katze)");
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("\n");
return;
}

