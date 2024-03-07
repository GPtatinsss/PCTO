#include <stdio.h>
int main() 
{
    int i=0;
    char a[] = "ciao";
    while(a[i]!='\0')
    {
    printf("%c",a[i]);
    i=i+1;
    }
}