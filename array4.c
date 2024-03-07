#include <stdio.h>
int main() 
{
    int i=0;
    char a[100];
    printf("inserisci il tuo nome");
    scanf("%s", a);
    while(a[i]!='\0')
    {
    printf("%c",a[i]);
    i=i+1;
    }
}