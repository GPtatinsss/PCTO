#include <stdio.h>
int main() 
{
    int a;
    int z=1969;
    printf("in che anno sei nato");
    scanf("%d",&a);
    if(a<1969)
    {
        printf("sei nato %d anni prima\n",z-a);
    }
    else if(a>1969)
    {
        printf("sei nato %d anni dopo\n",a-z);
    }
    else
    {
        printf("sei nato lo stesso anno");
    }
}