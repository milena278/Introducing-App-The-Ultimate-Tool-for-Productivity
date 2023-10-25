//funkcija za brojeve

void brojevi(){
    system("color 3");
    int i,j;
    char *pbroj[21][5]={
        {"Null","21 - Einundzwanzig","42 - Zweiundvierzig","63 - Dreiundsechzig","84 - Vierundachtzig"},
        {"Eins","22 - Zweiundzwanzig","43 - Dreiundvierzig","64 - Vierundsechzig","85 - Funfundachtzig"},
        {"Zwei","23 - dreiundzwanzig","44 - Vierundvierzig","65 - Funfundsechzig","86 - Sechsundachtzig"},
        {"Drei","24 - Vierundzwanzig","45 - Funfundvierzig","66 - Sechsundsechzig","87 - Siebenundachtzig"},
        {"Vier","25 - Funfundzwanzig","46 - Sechsundvierzig","67 - Siebenundsechzig","88 - Achtundachtzig"},
        {"Funf","26 - Sechsundzwanzig","47 - Siebenundvierzig","68 - Achtundsechzig","89 - Neunundachtzig"},
        {"Sechs","27 - Siebenundzwanzig","48 - Achtundvierzig","69 - Neunundsechzig","90 - Neunzig"},
        {"Sieben","28 - Achtundzwanzig","49 - Neunundvierzig","70 - Siebzig     ","91 - Einundneunzig"},
        {"Acht","29 - Neunundzwanzig","50 - Funfzig     ","71 - Einundsiebzig","92 - Zweiundneunzig"},
        {"Neun","30 - Dreissig  ","51 - Einundfunfzig","72 - Zweiundsiebzig","93 - Dreiundneunzig"},
        {"Zehn","31 - Einunddreissig","52 - Zweiundfunfzig","73 - Dreiundsiebzig","94 - Vierundneunzig"},
        {"Elf","32 - Zweiundreissig","53 - Dreiundfufzig","74 - Vierundsiebzig","95 - Funfundneunzig"},
        {"Zwolf","33 - Dreiundreissig","54 - Vierundfunfzig","75 - Funfundsiebzig","96 - Sechsundneunzig"},
        {"Dreizehn","34 - Vierunddreissig","55 - Funfundfunfzig","76 - Sechundsiebzig","97 - Siebenundneunzig"},
        {"Vierzehn","35 - Funfunddreißig","56 - Sechsundfunfzig","77 - Siebenundsiebzig","98 - Achtundneunzig"},
        {"Funfzehn","36 - Sechsunddreissig","57 - Siebenundfunfzig","78 - Achtundsiebzig","99 - Neunundneunzig"},
        {"Sechszehn","37 - Siebenunddreissig","58 - Achtundfunfzig","79 - Neunundsiebzig","100 - Einhundert"},
        {"Siebzehn","38 - Achtunddreissig","59 - Neunund funfzig","80 - Achtzig"," "},
        {"Achtzehn","39 - Neununddreissig","60 - Sechzig    ","81 - Einundachtzig"," "},
        {"Neunzehn","40 - Vierzig    ","61 - Einundsechzig","82 - Zweiundachtzig"," "},
        {"Zwanzig","41 - Einundvierzig","62 - Zweiundsechzig","83 - Dreiundachtzig"," "}
        };

    char *psati[12][2]={
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

    char *redniBroj[10][4]={
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

    printf("\n\n");
    printf("\t\t\t\tZahlen Von 0 bis 100 - Brojevi od 0 do 100\n\n");

    for(i=0;i<21;i++){
            printf("\t%d - ",i);
            for(j=0;j<5;j++){
                 printf("%s\t ",pbroj[i][j]);
                 }
                 printf("\n");
                 }

    printf("\n\n");
    printf("\t\t\t\tOrdnungszahlen - Redni brojevi\n\n");
    for(i=0;i<10;i++){
        for(j=0;j<4;j++){
            printf("\t%s ", redniBroj[i][j]);
        }
        printf("\n");
    }

printf("\n\n");
printf("\t\t\t\tDie Uhrzeit - vrijeme\n\n");
printf("\n\Ako koristimo 24-tero satne izraze, tada Num koristimo samo do 12 sati:\nUm eins, Um drei, Um zehn, Um zwolf.\n\n");
printf("Ganz einfach Ubung (Vrlo jednostavna vjezba):\n");
printf("der grosse Zeiger auf der Uhr zeigt, wie viele Minuten und Stundenzeiger zeigt, wie viele Stunden\n");
printf("\nFrage: Wie spat ist es? (Koliko je kasno? Koliko je sati?)\n");
printf("Frage: Wie viel Uhr ist es? (Koliko je sati?)\n\n");
printf("Antwort:\n");
for(i=0;i<12;i++){
    for(j=0;j<2;j++){
        printf(" %s\t\t\t",psati[i][j]);
    }
    printf("\n");
}
printf("\n\nSlobodno vrijeme ili hobi - Freizite oder Hobby\n");

printf("Was machst du gern?\n");
printf("Ich lerne gern Deutsch und ich gehe gern spazieren. Gehst du auch gern spaziren? Ja, ich gehe gern spanziren.\n");
printf("Ich spiele gern Schach (sah). Spielst du auch gern Schach? Nein, ich spiele nicht gern Schach.\n");
printf("Ich fahre gern Rad oder Ich fahre gern Fahrrad. (Wir sagen beides - kazemo oboje). \n");
printf("Ich wandere gern. Meine Freunde auch wandere gern.\n");
printf("Ich spiele Fussball und Basketball. Was spielst du gern? Ich male gern und ich spiele gern Computerspiele.\n");
printf("Ich Schwimme gern und ich tauche gern (roniti)\n");
printf("Ich singe gern unter der Dusche. Sings du auch gern? Nein, ich jogge gern oder ich renne gern.\n");
printf("Ich spiele gern Gittare und ich lese gern. Wir tanzen gern, aber wir tanzen nicht so gut.\n");
printf("Ich hore gern Musik. Host du auch gern Musik. Was machst du so gern?\nNein, ich gehe gern ins Kino. Welche Musik horst du gern?\n Ich hore sehr gern Rap-Musik.\n");
printf("Ich putze gern und ich koche gern und ich sehe gern Fern. Kochst du auch gern?\n");

printf("\nEtwas ganz Wichtiges - Nesto vrlo vazno. Ako pricamo o necemu sto jako volimo, tada koristimo rijec Gern.\n");

printf("\n\tLesen Sie den Text.Sonija Tag (Procitajte tekst.Sonjin dan)\n\n");
printf("Es ist sechs Uhr am Montag Morgen. Es ist zu fruh am Morgen.\nSonija steht um seaben auf.\n");
printf("Zuerst macht sie Fruhsport, dann geht sie auf die Toilette.\nDann Duscht sie.Um halb acht fruhstuckt sie.\n");
printf("Um Viertl vor acht geht sie mit dem Hund spanzieren.\nUm halb neun fahrt sie zur Arbeit.\n");
printf("Von neun bis funf arbeitet sie.Um Viertl nach funf kauft sie im Supermarkt ein.\n");
printf("Um halb sechs fahrt sie nach Hause.Um sechs kocht sie Essen.\n");
printf("Um halb sieben isst sie. Danach giesst sie die Pflanzen und macht die sauber.\n");
printf("Um Viertl nach sieben ruft sie ihre Schwester an.\n");
printf("Um acht sieht sie fern.Um zehn geht sie ins Bett.\n");
printf("\n\tMain Tag\n");
printf("Ich stehe um acht Uhr auf. Um halb neun frustruken wir.\nVon neun bis zehn Uhr arbeiten ich zu Hause\n");
printf("Um elf Uhr gehe ich mint mainen Kinder spanzieren. Um eins Uhr essen wir zu Mittag.");
printf("Dann gehe wir schlafen. Am Nachmittag spiele ich mit mainen Kinder und am Abend arbeite ich wieder.\n");
printf("Um acht Uhr essen wir zu Abend, spielen und dann gehen wir schlafen.\nSchreiben Sie bitte was machen Sie?\n\n");
printf("\tMain Freizeit\n");
printf("Meine Hobbys sind lesen,Videos machen und mit mainen Kinder spielen.\nIn der Freizeit leze ich Bucher,mache Videos, singe, tanze uns spiele mit mainen Kindern.\n");
printf("Und Sie. Was sind Ihre Hobbys? Schreiben Sie bitte.\n");


printf("\n\tTagesablauf auf Deutsch (Dnevna rutina na njemackom\n)");
printf("Beantworten Sie die folgenden Fragen (Odgovorite na slejdeca pitanja)\n");
printf("Was machst du an einem normalen Tag.Um wie viel Uhr stehst du auf?\nWann gehst du aus dem Haus?");
printf("Von wann bis wann arbeitest du?\nWann kommst du wieder nach Hause?\nWas machst du am Nachmittag?");
printf("Um wie  viel Uhr gehst du ins Bett?\n");
printf("An einem normalen Tag klingelt mein Wecker um halb sieben und main Wecker klinget schon um halb sechs\n.");
printf("Nach dem Aufstehen gehe ich zuerst auf die Toilette/ins Bat.\nDanach dusche ich.Dann bereite ich das Frühstück und koche Kaffee für mich und meinen Mann\n");
printf("Von sieben Uhr bis zwanzig nach sieben frühstücke ich mit meinem Mann.\nUm halb acht gehe ich aus dem Haus.\n");
printf("Ich fahre mit dem Auto zur(zu der) Arbeit.\n");

return;
}
