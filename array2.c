#include <stdio.h>
int main() 
{
    int i=0;
    char a[5] = {'c','i','a','o','\0'};
    while(a[i]!='\0')
    {
    printf("%c",a[i]);
    i=i+1;
    }
}