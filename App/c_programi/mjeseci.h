void mjeseci(){
     system("color 9");
     int i,j,k;
     char *pmjeseci[6][4][1]={
    {"Sijecanje -  der Januar","Srpanj   -  der Juli","\tU sijecanju -  im Januar","U srpanju   -  im Juli"},
    {"Veljaca   -  der Februar","Kolovoz  -  der August","\tU veljaci   -  im Februar","U kolovozu  -  im August"},
    {"Ozujak    -  der Marz","\tRujan    -  der September","U ozujku    -  im Marz","\tU rujnu     -  im September"},
    {"Travanj   -  der April","\tListopad -  der Oktober","U travnju   -  im April","U listopadu -  im Oktober"},
    {"Svibanj   -  der Mai","\tStudeni  -  der November","U svibnju   -  im Mai","\tU studenom  -  im November"},
    {"Lipanj    -  der Juni ","\tProsinac -  der Dezember","U lipnju    -  im Juni ","U prosincu  -  im Dezember"}
    };

printf("\n");
printf("\t\t\t\t\t\tMonate im Jahr - Mjeseci u godini\n\n");
for(i=0;i<6;i++){
    for(j=0;j<4;j++){
            for(k=0;k<1;k++)
            {
                printf("\t%s ", pmjeseci[i][j][k]);
            }
    }
    printf("\n");
}
printf("\n\n");
printf("\t\tSich vorstellen - predstavljanje sebe drugima:\n\n");
printf("Heute lernen wir uber das Thema - sich vorstellen. Lese den Text\n");
printf("Hallo, ich heisse Monika. Mein Familienname ist Schmidt und Ich komme aus Deutschland. Ich wohne in Berlin.\n");
printf("\nMein Vormame ist Schmidt\n");
printf("Ich spreche Deutsch und Englisch. Ich bin dreiundzwenzig Jahre alt. Ich bin Studentin.\n");
printf("Ich bin verheiratet und ich habe ein Kind. Meine Hobbys sind fernsehen und Musik horen.\n\n");
printf("Hallo, mein Name ist Maria. Wie heisst du? Ich heise Martin.\n");
printf("Wie al bist du? Ich bin vierzig Jahre alt.\n");
printf("Wann ist dein geburstag? Mein Geburstag ist am 20. Septembar.\n");
printf("Wann ist dein Gebustag? Am 16. August ist mein Geburstag.\n");
printf("Woher kommst du? Ich komme aus Deutschland.\n");
printf("Was bist du von Beruf? Ich bin Artz von Beruf.\n");
printf("Bist du verheiratet? Nein, ich bin nich verheiratet.\n");
printf("Hast du Kinder? Nein, ich habe keine Kinder.\n");
printf("Freut mich.\n\n");
printf("Guten Tag. Ich bin Marko. Hallo, Marko. Mein Name ist Balu.\n");
printf("Woher kommst du? Ich komme aus Italien.\n");
printf("Italien ist ein schones Land. Danke! Woher kommest du?\n");
printf("Ich kome aus Sri Lanka. Wo liegt Sri Lanka? In Asien. Danke fur die Erklarung.\n");
printf("Welche Sprache spricht man in Sri Lanka? Meine Muttersprache ist Tamilisch, aber man spricht in Sri Lanka auch Singalisisch.\n");
printf("In Italien spricht man Italienisch. Sprichst du noch andere Sprachen? Ja, ich spreche auch noch Englisch, deutsch naturlich auch.\n");
printf("Was bist du von Beruf? Ich arbeite als Machinist. Was arbeitest du? Ich arbeite als Koch. Bist du verheiratet? Ja, ich bin verheritet.\n");
printf("Das ist meine Frau. Hast du Kinder? Wir habe einen Sohn und eine Tochter. Und du? Bist du verheritet?\nNein, ich bin nicht verheiratet. Ich bin Ledig.");
printf("Ich bin dreiundzweinzig Jahre alt. Wie Alt bis du? Ich bin funfunddreizig Jahre alt.\nIch lebe seit sekst Jahre in der Schweiz.");
printf("Wie lange lebst du in der Schweiz? Ich lebe seit zwei Jahre in der Schweiz.\n\n");

printf("\t\tPersonliche Informationen geben\n");
printf("Ich Name ist Paul, mein Nachname ist Muller.\n");
printf("Meine Adresse ist N.K.Z, Ich wohne in Bergstrasse, die Housnummer ist drei.\nDie Postleitzahl ist 43000. Meine Telefonnummer ist \n");
printf("Ich bin 25 Jahre alt. Ich bin am 9. Juli 1996 in Frankfurt geboren und ich bin Schuler.\n");

return;
}
