
//funkcija osobnih zamjenica

void osobne_zamjenice(){
     system("color 6");
     int i,j;
     char *zamjenice[5][2]={{"ja  - ich ", "mi  - wier"},{"ti  - du  ","vi  - ihr "},
                       {"on  - er  ","oni/Vi - sie/Sie"},{"ona - sie ",""},{"ono - es  ",""}
                       };
printf("\tOsobne zamjenice - Personalpronomen\n\n");

for(i=0;i<5;i++){
    for(j=0;j<2;j++){
     printf(" %s ",zamjenice[i][j]);
    }
    printf("\n");
 }
return;
}

