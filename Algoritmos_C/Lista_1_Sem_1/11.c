#include <stdio.h>
#include <math.h>

void main()
{
    int i,numero,p=0;
    for(i=1;i<=5;i++)
        {
            printf("Digite um numero: ");
            scanf("%d",&numero);

            if (numero=>30)
                {
                    p++;
                }
        }
    printf("Foram digitados %d menores que 30: ",p);
}
