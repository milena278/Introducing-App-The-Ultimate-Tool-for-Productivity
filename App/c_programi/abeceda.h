//funkcija za abecedu

void abeceda(){
    system("color 2");
    int i,j;
    char *abeceda[5][5]={

    {"a - a  "," f - ef ","k - ka ","q - ku","v - fau"},
    {"b - be "," g - ge ","l - el ","r - er","w - ve"},
    {"c - ce "," h - ha ","m - em ","s - es","x - iks"},
    {"d - de "," i - i  ","o - o  ","t - te","y - upsilon"},
    {"e - e  "," j - jot","p - pe ","u - u ","z - cet"}
    };

printf("\tdas Deutsche Alphabet - Abeceda\n\n");
printf("\nSlovo - der Buchstabe\nSlova - die Buchstaben\n\n");

  for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            printf("  %s ",abeceda[i][j]);
            }
            printf("\n");
    }

printf("\n\nNjemacka abeceda se sastoji od 26 slova od kojih su:\n6 samoglsanika i 20 suglasnika.\nSamoglasnici su: a, e, i, o, u i y.\nSuglasnici su: b, c, d, f, g, h, j, k, l, m, n, p, q, r, s, t, v, w, x i z.\nPored ovih slova u njemackom jeziku postoje još slova: ä, ö, ü i ß.");

return;
}

