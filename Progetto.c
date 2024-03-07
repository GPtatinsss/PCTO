#include <stdio.h>
int main() 
{
    int a;
    printf("quanti euro guadagni al mese?");
    scanf("%d",&a);
    if(a<=2500)
    {
        printf("ti consigliamo di puntare a degli investimenti piccoli ma sicuri, investendo circa il un decimo del tuo stipendio, in questo modo riusciresti ad avere comunque un incremento alla fine di ogni mese");
    }
    else if(a>=2500&&a<=5000)
    { 
        printf("il nostro ");
    }
    else if(a==5)
    {
        printf("uguale a 5");
    }
    else
    {
        printf("minore di 5");
    }
    }