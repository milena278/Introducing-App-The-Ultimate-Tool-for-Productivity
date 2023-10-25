
//funkcija za odjecu

void odjeca(){

int i,j,tocno=0, netocno=0;
char *odgovor[10];

char *odjeca[4][3]={
    {"die Stiefel - Cizme        ","\tder Mantel - Kaput  ","\tdie Hose - Hlace    "},
    {"der Pullover - Pulover     ","\tder Schal - Sal     ","\tdas Hemd - Kosulja  "},
    {"die Handschuhe - Rukavice  ","\tdie Jacke - Jakna   ","\tdie Weste - Prsluk  "},
    {"die Strumpfhose - Strample ","\tdie Mutze - Kapa    ","\tdie Socken - Carape "}
};

printf("\tKleidung - Odjeca\n\n");
printf("Kleidung fur Herbst und Winter:\nWinterkleidung.\nKleidung fur kaltes Watter - Zimska odjeca, odjeca za hladnije vrijeme\n\n");

for(i=0;i<4;i++){
    for(j=0;j<3;j++){
        printf("%s", odjeca[i][j]);
    }
    printf("\n");
}

printf("Wie heißt das auf Deutsch? (Kako se ovo zove na njemackom?\n\n)");
printf("Schreiben Sie wie im Beispiel. (Napisite kao u primjeru):\n");
printf("Kisobran: der Regenschirm\n");
printf("Odijelo: ");
odgovor[0]=(char*)malloc(10);
scanf(" %s", odgovor[0]);
if(strcmp(odgovor[0],"der Anzug")==0){
    tocno+=1;
    }else{
        netocno+=1;
    }

printf("Kravata: ");
odgovor[1]=(char*)malloc(10);
scanf(" %s", odgovor[1]);
if(strcmp(odgovor[1],"die Krawatte")==0){
    tocno+=1;
    }else{
    netocno+=1;
    }

printf("Suknja: ");
odgovor[2]=(char*)malloc(10);
scanf(" %s", odgovor[2]);
if(strcmp(odgovor[2],"der Rock")==0){
    tocno+=1;
    }else{
    netocno+=1;
    }


free(odgovor);
// nešto mi tu nedostaje
return;
}

