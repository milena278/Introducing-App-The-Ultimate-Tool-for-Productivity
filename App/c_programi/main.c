#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include "abeceda.h"
#include "brojevi.h"
#include "godisnje_doba.h"
#include "mjeseci.h"
#include "daniUTjednu.h"
#include "osobneZamjenice.h"
#include "glagoli.h"
#include "odredeniClanovi.h"
#include "boje.h"
#include "odjeca.h"
#include "obitelj.h"

void Izbornik();
void zvijezdice();

int main()
{
    Izbornik();
    return 0;
}

//za promjenu fonta odabrati Settings - Editor

void Izbornik(){

int a= 1, odabir;

while(a){
    //system("color 5");
    printf("\n\nOdaberi broj lekcije:\n\n");
    printf("\t1) Alphabeth - Abeceda\n");
    printf("\t2) Zahlen - Brojevi\n");
    printf("\t3) Die Jahreszeiten - Godišnje doba\n");
    printf("\t4) Wochentag und Tageszeiten - Dani u tjednu i doba dana\n");
    printf("\t5) Personalpronomen - Osobne zamjenice\n");
    printf("\t6) Verbs - Glagoli\n");
    printf("\t7) Odredeni i neodredeni clanovi\n");
    printf("\t8) Mjeseci\n");
    printf("\t9) Farben - Boje\n");
    printf("\t10) Farben - Obitelj\n");
    printf("\t11 Kleidung - Odjeća\n");

    printf("\nLekcija: ");
    scanf(" %d",&odabir);
    if(odabir<1 || odabir>15){
        system("cls");
        printf("Nepostojeca lekcija! Odabrati broj lekcije od 1 - 10");
    }else{
    system("cls");

    switch(odabir){
        case 1: abeceda();
        break;
        case 2: brojevi();
        break;
        case 3: godDoba();
        break;
        case 4: dani_u_tjednu();
        break;
        case 5: osobne_zamjenice();
        break;
        case 6: glagoli();
        break;
        case 7: clanovi();
        break;
        case 8: mjeseci();
        break;
        case 9: boje();
        break;
        case 10: obitelj();
        break;
        default:
            printf("Nepostojeci unos!");
    }
    }
    }
return;
}

//funkcija za ispis zvijezdica

void zvijezdice(){
    int i;
    for(i=0; i<50;i++){
        printf("*");
    }
    printf("\n");
    return;
}

