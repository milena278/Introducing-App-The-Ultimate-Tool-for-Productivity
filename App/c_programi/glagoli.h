void glagoli(){
     system("color 7");
     int i,j;
     char *pbiti[5][2]={
    {"ja sam - ich bin "," mi smo  - wier sind"},
    {"ti si  - du bist "," vi ste  - ihr seid"},
    {"on je  - er ist  "," oni/Vi ste - sie/Sie sind"},
    {"ona je - sie ist ",""},{"ono je - es ist ",""}};

printf("\t\tGlagol biti - Verb sein\n\n");

for(i=0;i<5;i++){
    for(j=0;j<2;j++){
     printf("\t%s ",pbiti[i][j]);
    }
    printf("\n");
 }
printf("\n\n");
printf("\t\tGlagol imati - Verb haben\n\n");

char *pimati[5][2]={
    {"ja imam - ich habe","mi imamo  - wier haben"},
    {"ti imas - du hast ","vi imate  - ihr habt"},
    {"on ima  - er hat ","oni/Vi imaju - sie/Sie haben"},
    {"ona ima - sie hat",""},{"ono ima - es hat ",""}
    };

for(i=0;i<5;i++){
    for(j=0;j<2;j++){
     printf("\t%s ",pimati[i][j]);
    }
    printf("\n");
 }

printf("\n\n");

printf("\t\t Glagol putovati - Verb fahren\n\n");
char *pvoziti[5][2]={
{"ja vozim - ich fahre","mi vozimo - wir fahren"},
{"ti vozis - du fahrst","vi vozite - ihr fahrt"},
{"on vozi - es fahrt","oni voze - sie/Sie fahren"},
{"ona vozi - sie fahrt",""},
{"ono vozi - es fahrt",""}
};

for(i=0; i<5;i++){
    for(j=0;j<2;j++){
        printf("\t%s",pvoziti[i][j]);
    }
    printf("\n");
}

printf("\n\n");

printf("\t\t Glagol raditi - Verb machen\n\n");
char *praditi[5][2]={
{"ja radim - ich mache","mi radimo - wir machen"},
{"ti radis - du machst","vi radite - ihr macht"},
{"on radi - es macht","oni rade - sie/Sie machen"},
{"ona radi - sie macht",""},
{"ono radi - es macht",""}
};

for(i=0; i<5;i++){
    for(j=0;j<2;j++){
        printf("\t%s",praditi[i][j]);
    }
    printf("\n");
}


printf("\t\t GPosvojne zamjenice - Possessivpronomen\n\n");
char *pposvojne[5][2]={
{"moje - maine","nase - unsere"},
{"tvoje - daine","vase - eure"},
{"njegovo - seine","njihovo/ Vase - ihre/Ihre"},
{"njeno - ihre",""},
{"njegovo - seine",""}
};

for(i=0; i<5;i++){
    for(j=0;j<2;j++){
        printf("\t%s",pposvojne[i][j]);
    }
    printf("\n");
}


return;
}

