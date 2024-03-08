#include <stdio.h>
int main() 
{
    char a;
    char b;
    int c;
    int d;
    printf("*********BETA***********");
    scanf("%c", &a);
    printf("benvenuto\n");
    scanf("%c", &a);
    printf("il nostro obiettivo e' aiutarti ad avere piu' stabilita' economica, tutto questo in pochi e semplici step\n");
    scanf("%c", &a);
    printf("vuoi procedere? s/n\n");
    scanf("%c", &a);
    if(a=='s')
    {
        printf("perfetto,grazie per averci scelto\n");
        printf("ora proseguiremo facendoti delle domande, in questo modo riusciremo a indirizzarti verso la soluzione migliore per te\n");
        printf("quanto guadagni ogni mese?\n");
        scanf("%d", &c);
        if(c<=2500)
        {
            printf("ti consigliamo di fare investimenti sicuri e mirati, usando solo un decimo del tuo stipendio, questo ti permettera'di avere un incremento, piccolo, ma fisso, ogni mese");
            printf("abbiamo due aziende su cui investire che consigliamo per te: scegli opzione a o b \n");
            scanf(" %c", &b);
            if(b=='b')
            {
                printf("perfetto, ora puoi rilassarti, penseremo a tutto noi aggiornandoti in tempo reale con delle notifiche sul tuo cellulare\n");
            }
            else if(b== 'a')
            {
                printf("perfetto, ora puoi rilassarti, penseremo a tutto noi aggiornandoti in tempo reale con delle notifiche sul tuo cellulare\n");
            }
            else
            {
               printf("errore");
            }
        }
        else if(c>2500&&c<=4000)
        {
            printf("nel tuo caso potrai investire ogni mese una buona percentuale, riuscendo cosi' ad avere un buon incremento mensile, con una percentuale di rischio media\n");
             printf("abbiamo due aziende su cui investire che consigliamo per te: scegli opzione a o b \n");
            scanf(" %c", &b);
            if(b=='b')
            {
                printf("perfetto, ora puoi rilassarti, penseremo a tutto noi aggiornandoti in tempo reale con delle notifiche sul tuo cellulare\n");
            }
            else if(b== 'a')
            {
                printf("perfetto, ora puoi rilassarti, penseremo a tutto noi aggiornandoti in tempo reale con delle notifiche sul tuo cellulare\n");
            }
            else
            {
               printf("errore");
            }
        }
        else if(c>4000&&c<=6000)
        {
            printf("avendo gia'un buon guadagno, nel tuo caso ti consigliamo di investire almeno il 25 percento del tuo stipendio, provando anche degli investimenti con rischio medio-alto, in questo modo potresti avere grandi incrementi mensili\n ");
             printf("abbiamo due aziende su cui investire che consigliamo per te: scegli opzione a o b \n");
            scanf(" %c", &b);
            if(b=='b')
            {
                printf("perfetto, ora puoi rilassarti, penseremo a tutto noi aggiornandoti in tempo reale con delle notifiche sul tuo cellulare\n");
            }
            else if(b== 'a')
            {
                printf("perfetto, ora puoi rilassarti, penseremo a tutto noi aggiornandoti in tempo reale con delle notifiche sul tuo cellulare\n");
            }
            else
            {
               printf("errore");
            }
        }
        else if(c>6000)
        {
            printf("ti consigliamo di investire una percentuale che varia dal 30 al 35 del tuo stipendio, in questo modo potrai puntare sia ad investimenti sia ad alto, che a medio rischio, senza compromettere la tua vita quotidiana\n ");
             printf("abbiamo due aziende su cui investire che consigliamo per te: scegli opzione a o b \n");
            scanf(" %c", &b);
            if(b=='b')
            {
                printf("perfetto, ora puoi rilassarti, penseremo a tutto noi aggiornandoti in tempo reale con delle notifiche sul tuo cellulare\n");
            }
            else if(b== 'a')
            {
                printf("perfetto, ora puoi rilassarti, penseremo a tutto noi aggiornandoti in tempo reale con delle notifiche sul tuo cellulare\n");
            }
            else
            {
               printf("errore");
            }
        }
    }
    else 
    { 
        printf("non cé problema, se cambi idea, noi siamo sempre qui ;)\n");
    }
}