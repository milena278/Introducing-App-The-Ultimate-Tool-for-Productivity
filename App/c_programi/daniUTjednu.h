//funkcija za dane u tjednu

void dani_u_tjednu(){
     system("color 5");
     int i,j,k, tocno=1;
     char cl,*odgovor[6],odabir;

printf("\t\t\t\tDani u tjednu - Wochentag\n\n");
printf("Die Woche hat sieben Tage. Sie heissen:\n\n");

char *dani[7][3][3]={{"Ponedjeljak - der Montag","U ponedjeljak - am Montag","Svakog ponedjeljka - Jeden Montag (ili Montags)"},
                     {"Utorak - der Dienstag","U utorak - am Dienstag","Svakog utorka - Jeden Dienstag (ili Dinstags)"},
                     {"Srijeda - der Mittwoch","U srijedu - am Mittwcoh","Svake srijede - Jeden Mittwoch (ili Mittwochs)"},
                     {"Cetvrtak - der Donnerstag","U cetvrtak - am Donnerstag","Svakog cetvrtka - Jeden Donnerstag (ili Donnerstags)"},
                     {"Petak - der Freitag","U petak - am Freitag","Svakog petka - Jeden Freitag (ili Freitags)"},
                     {"Subota - der Samstag","U subotu - am Samstag","Svake subote - Jeden Samstag (ili Samstags)"},
                     {"Nedjelja - der Sonntag","U nedjelju - am Sonntag","Svake nedjelje - Jeden Sonntag (ili Sonntags)"}
};

char *pvrijeme[7][3]={
    {"der Morgen","morgens","am Morgen"},
    {"der Vormittag","vormittags","am Vormittag"},
    {"der Mittag","mittags","zu Mittag"},
    {"der Nachmittag","nachmittags","am Nachmittag"},
    {"der Abend","abends ","am Abend"},
    {"die Nacht","nachts ","in der Nacht"},
    {"die Mitternacht","mitternachts","um Mitternacht"}
};

for(i=0;i<7;i++){
    for(j=0;j<3;j++){
        for(k=0;k<3;k++){
              printf("%s\n",dani[i][j][k]);
        }
    }
    printf("\n\n");
}

printf("\n1.Am Montag beginnt die Woche.");
printf("\n2.Am Samstag beginnt das Wochenende.");
printf("\n3.Am Sonntag endet die Woche.");
printf("\n\nFrage: Mit welchem Tag beginnt die Woche?");
printf("\nAntwort: Die Woche beginnt mit Montag.");
printf("\nFrage: Mit welchem Tag beginnt die Wochenende?");
printf("\nAntwort: Die Wochenende beginnt mit Samstag.");
printf("\nFrage: Am welchem Tag endet die Woche?");
printf("\nAntwort: Die Woche endet am Sonntag.");
printf("\nFrage: Welcher Tag is heute?");
printf("\nAntwort: Heute ist Dinstag.");
printf("\nFrage: Welcher Tag ist Morgen?");
printf("\nAntwort: Morgen ist Mittwoch.");
printf("\nFrage: Welcher Tag war gestern?");
printf("\nAntwort: Gestern war Montag.");
printf("\nFrage: Welcher Tag kommt nach Montag?");
printf("\nAntwort: Nach Montag kommt Distag.");
printf("\nFrage: Welcher Tag kommt nach Mittwoch?");
printf("\nAntwort: Nach Mittwoch kommt Donnerstag.");
printf("\nFrage: Welcher Tag kommt nach Samstag?");
printf("\nAntwort: Nach Samstag kommt Sonntag.\n\n");
zvijezdice();
printf("Razlika izmedu welchem i welcher\n");
printf("Upitna recenica koja pocinje s welch- koristimo kada pricao s odredenoj osobi ili nekoj poznatoj stvari.");
printf("\nUpitna recenica: Mit welchem Tag beginnt die Woche?\n");
printf("\nwelch-em: jer je Tag muskog roda - der Tag.\nBuduci da je to odredeni clan, dodajemo nastavak <em>\n");
zvijezdice();
printf("\n\n");
printf("\t\t\t\tPrapositionen um,im,am - Prijedlozi\n\nWas ist der Unterschied? Wann benutzt Prapositionen?\n(Koja je razlika? Kada se koriste prijedlozi?)\n");
printf("\nWann benutzt man um? (od)\nFur eine spezifischer Zeit. Zum Beispiele:\nIch treffe Mario um achtzehn Uhr.(Srest cu se s Mariom u 18 sati.)\n");
printf("\nWann benutzt man im? (in+dem - u)\nFur bestimmten Monat oder bestimmten Jahreszeit:\nZum Beispiel:Ich habe im Juli Geburtstag.(Moj rodendan je u srpnju.)\nWir fahren im Sommer nach Frankreich. (Ici cmo u Francusku u ljeti.)\n");
printf("\nWann benutzt man am? (an+dem - na)\nFur bestimmten Wochentag oder bestimmten Datum.\nZum Beispiel:Am Montag gehe Ich ins Kino.\nIch habe am funfzehn Juli Geburtstag.\n\n");
printf("\n\n");
printf("\t\t\t\tTageszeiten - Vrijeme u danu\n\n");
for(i=0;i<7;i++){
    for(j=0;j<3;j++){
        printf("%s\t ",pvrijeme[i][j]);
    }
    printf("\n");
}

printf("\n\n(06-09)\tder Morgen. Am Morgen treffe ich mit Freunden.\n");
printf("(09-12)\tder Vormittag. Ich gehe am Vormittag in die Schule.\n");
printf("(12-14)\tder Mittag. Mittags mache ich eine Pausa.\n");
printf("(14-18)\tder Nachmittag. Ich spiele am Nachmittag Basketball.\n");
printf("(18-21)\tder Abend. Am Abend gehe ich einkaufen.\n");
printf("(21-06)\tdie Nacht. In der Nach schlafen ich.\n");
printf("(21-06)\tdie Mitternacht.Mitternachts spiele ich Gittare.\n\n");

printf("Was machst du am Wochenende in der Freizeit?");
printf("Ich gehe in die Stadt und einkaufen.");

/*ZA SADA CU OVO KOMENTIRATI
printf("\n\nZa ispis teksta na hrvatskom jeziku pritisnuti slovo <h> na tipkovnici: ");
printf("\nZa nastavak odabrati bilo koju tipku na tipkovnici: ");
scanf(" %c", &odabir);
    if(odabir=='h'|| odabir=='H'){
            printf("\n\nPrijevod:\n");
            printf("1.U ponedjeljak pocetak tjedna.");
            printf("\n2.U subotu pocetak vikenda.");
            printf("\n3.U nedjelju zavrsava vikend.\n");
            printf("\nPitanje: S kojim danom pocinje tjedan?");
            printf("\nOdgovor: Tjedan pocinje s ponedjeljkom.");
            printf("\nPitanje: S kojim danom pocinje vikend?");
            printf("\nOdgovor: Vikend pocinje sa subotom.");
            printf("\nPitanje: U kojem danu zavrsava tjedan?");
            printf("\nOdgovor: Tjedan zavrsava u nedjelju.");
            printf("\nPitanje: Koji je danasnji dan?");
            printf("\nOdgovor: Danas je utorak.");
            printf("\nPitanje: Koji je sutrasnji dan?");
            printf("\nOdgovor: Sutra je srijeda.");
            printf("\nPitanje: Koji je bio jucerasnji dan?");
            printf("\nOdgovor: Jucer je bio ponedjeljak.");
            printf("\nPitanje: Koji dan dolazi nakon ponedjeljka?");
            printf("\nOdgovor: Poslije ponedjeljka dolazi utorak.");
            printf("\nPitanje: Koji dan dolazi nakon srijede?");
            printf("\nOdgovor: Nakon srijede dolazi cetvrtak.");
            printf("\nPitanje: Koji dan dolazi nakon subote?");
            printf("\nOdgovor: Nakon subote dolazi nedjelja.");
    }
*/


/*nisam mogla koristiti skraceni if jer mi javlja gresku
(strcmp(odgovor,"Samstag")==0)? tocno+=1: netocno+=1;
ako u skracenom if-u koristim printf, a ne tocno+=1: netocno+=1;
tada mi ne javlja gresku*/

printf("\n\nSchreib die antwort:");
printf("\n1) Welche Tag ist erste Tag der Woche?: ");
odgovor[0]=(char*)malloc(10);
scanf(" %s", odgovor[0]);
if(strcmp(odgovor[0],"Montag")==0){
            tocno+=1;
        printf("T");
        }else {
            tocno-=1;
            }

printf("\n2) Welche Tag ist zweite Tag der Woche?: ");
odgovor[1]=(char*)malloc(10);
scanf(" %s", odgovor[1]);
if(strcmp(odgovor[1],"Dienstag")==0){
    tocno+=1;
    printf("T");
        }else {
            tocno-=1;
        }

printf("\n3) Welche Tag ist dritte Tag der Woche?: ");
odgovor[2]=(char*)malloc(10);
scanf(" %s", odgovor[2]);
if(strcmp(odgovor[2],"Mittwoch")==0){
    tocno+=1;
    printf("T");
        }else {
            tocno-=1;
        }

printf("\n4) Welche Tag ist vierte Tag der Woche?: ");
odgovor[3]=(char*)malloc(10);
scanf(" %s", odgovor[3]);
if(strcmp(odgovor[3],"Donnerstag")==0){
        tocno+=1;
    printf("T");
        }else {
            tocno-=1;
        }

printf("\n5) Welche Tag ist funfte Tag der Woche?: ");
odgovor[4]=(char*)malloc(10);
scanf(" %s", odgovor[4]);
if(strcmp(odgovor[4],"Freitag")==0){
        tocno+=1;
    printf("T");
        }else {
            tocno-=1;
        }

printf("\n6) Welche Tag ist sechste Tag der Woche? ");
odgovor[5]=(char*)malloc(10);
scanf(" %s", odgovor[5]);
if(strcmp(odgovor[5],"Samstag")==0){
        tocno+=1;
    printf("T");
        }else {
            tocno-=1;
        }

printf("\n7) Welche Tag ist siebte Tag der Woche? ");
odgovor[6]=(char*)malloc(10);
scanf(" %s", odgovor[6]);
if(strcmp(odgovor[6],"Sonntag")==0){
    tocno+=1;
    printf("T");
        }else {
            tocno-=1;
        }
printf("%d tocnih odgovora\n\n",tocno);

free(odgovor);
free(tocno);

printf("\n\nLesen Sie den Text\n");
printf("\nWas machst du am Sonntag?\n");
printf("Am Sonntag fahren wir zum Chiemsee.\n");
printf("Wer?\n");
printf("Matrin und Hans, Kerstin und Ich\n");
printf("Und Wer ist Kartsin?\n");
printf("Das ist die Freundin von Hans\n");
printf("Ist sie sympathisch?\n");
printf("Oh, sie ist sehr sympathisch");

printf("\n\nWir - mi\nChiemsee - jezero u južnoj Njemačkoj\nWer - tko\n");


printf("\t\tLese den Text: In der Schule\n\n");
printf("Lerer: Noch eine Minute, Kinder!\n");
printf("Der Schulglocke\n");
printf("Lerer: Geht sofort zuruck an eure Platze!");
printf("Setzt euch auf eure Stuhle und seid ruhig!\n");
return;
}

