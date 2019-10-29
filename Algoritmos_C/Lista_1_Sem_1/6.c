#include <stdio.h>
#include <math.h>

void main()
{
    int i,soma=0;
    for(i=1;i<=100;i++)
    {
        printf("%d\n",i);
        soma=soma+i;
    }
    printf("A soma total eh: %d",soma);
}
