#include <stdio.h>
#include <math.h>

void main()
{
    int i;
    float media,soma=0;
    for(i=1;i<=10;i++)
    {
        printf("%d\n",i);
        soma=soma+i;
    }
    media=soma/10;
    printf("A media total eh: %.1f",media);
}

