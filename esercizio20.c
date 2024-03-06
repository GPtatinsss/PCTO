#include <stdio.h>
int main() 
{
    int i=2;
    int n=237
    int primo=0
    scanf("%d", &n);
    while(i<(n/2)+1)
    {
        if(n%i==0)
        {
            primo=1;
        }
        i=i+1
    }
    if(primo==0)
{
 printf("numero primo");
} else
{
    printf("non e un numero primo");
}
}
