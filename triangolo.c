#include <stdio.h>
int main() 
{
    int a;
    int b;
    int c;
    printf("inserisci tre dimensioni");
    scanf("%d %d %d", &a, &b, &c);
    if(a+b <= c || a+c <=b  || c+b<=a)
    {
        printf("non e un triangolo\n");
    }
    else if(a!=b&&b!=c&&a!=c)
    {
        printf("e scaleno\n");
    }
    else if(a==b&&b==c)
    {
        printf("e equilatero\n");
    }
    else
    {
        printf("e isoscele\n");
    }
}