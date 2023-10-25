//Funkcija za godišnje doba

void godDoba(){
    system("color 4");
    int i,j,k;
    char odabir;

char *pdoba[4][2][2]={
    {{"Proljece = ","der Fruhling   "},{"Na proljece = ","im Fruhling"}},
    {{"Ljeto    = ","der Sommer     "},{"Na ljeto    = ","im Sommer "}},
    {{"Jesen    = ","der Herbst     "},{"Na jesen    = ","im Herbst"}},
    {{"Zima     = ","der Winter     "},{"Na zimu     = ","im Winter"}}
    };

printf("\t\t\t\tDie Jahreszeiten - Godisnje doba\n\n");

for(i=0;i<4;i++){
    for(j=0;j<2;j++){
            for(k=0;k<2;k++){
                printf("  %s",pdoba[i][j][k]);
    }
}
printf("\n");
}
printf("\n\nBeispiele:\n");
printf("\n1.Wann ist es heiss? Im Sommer ist es heiss.");
printf("\n2.Wann bluhen die Baume? Die Baume bluhen im Fruhling.");
printf("\n3.Wann es schneit? Es schneit im Winter.");
printf("\n4.Wann ist Halloween? Halloween ist im Herbst.\n");
printf("\n1.der Winter:\tEs ist Winter.Es ist kalt und oft schneit es.");
printf("\n2.der Fruhling:\tEs ist Fruhling.Es wird warmer.Die Baume bluhen und werden grun.Uberall sind Blumen.");
printf("\n3.der Sommer:\tEs ist Sommer. Oft ist es Heiss.Die Baume sind grun.Guck mal! Die Kinder essen Eis.");
printf("\n4.der Herbst.\tEs ist Herbst.Oft regnet es.Oft ist es windig.");
printf("\n\nZa ispis teksta na hrvatskom jeziku pritisnuti slovo <h> na tipkovnici: ");
printf("\nZa nastavak odabrati bilo koju tipku na tipkovnici: ");
scanf(" %c", &odabir);
if(odabir=='h'|| odabir=='H'){
    printf("\n\nPrijevod:\n");
    printf("1.Kada je vruce? U ljeti je vruce.");
    printf("\n2.Kada cvatu stabla?. Stabla cvatu u proljece.");
    printf("\n3.Kada snjezi? Snjezi u zimi.");
    printf("\n4.Kada je noc vjestica? Noc vjestica je u jesen.");
    printf("\n\n1.To je zima.Hladno je i cesto snjezi");
    printf("\n2.Proljece je, postaje toplije.Stabla cvatu i postaju zelenija. Posvuda je cvijece.");
    printf("\n3.To je ljeto.Cesto je vruce.Stabla su zelena.Pogledaj! Djeca jedu sladoled.");
    printf("\n4.To je jesen.Cesto kisi.Cesto je vjetrovito.\n");
}
return;
}
