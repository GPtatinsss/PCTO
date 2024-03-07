#include <stdio.h>
int main() 
{
    char a;
    char b;
    int c;
    printf("benvenuto\n");
    scanf("%c", &a);
    printf("il nostro obiettivo e' aiutarti ad avere piu' stabilita' economica, tutto questo in pochi e semplici step\n");
    scanf("%c", &a);
    printf("vuoi procedere? s/n\n");
    scanf("%c", &a);
    if(a=='s')
    {
        printf("perfetto,grazie per averci scelto");
    }
    else if(a=='n')
    { 
        printf("non cé problema, se cambi idea, noi siamo sempre qui ;)");
    }
    else
    {
        printf("i");
    }
}