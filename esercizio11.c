#include <stdio.h>
int main() 
{
    int n;
    printf("inserisci un numero:");
    scanf("%d",&n);
    if(n%2==0)
    {
        printf("il numero e dispari");
    }
    else
    {
        printf("il numero e pari");
    }
}