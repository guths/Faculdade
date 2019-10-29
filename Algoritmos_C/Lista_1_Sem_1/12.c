#include <stdio.h>
#include <math.h>

void main()
{

    int i,numero,spositivo=0,snegativo=0;
        for(i=1;i<=20;i++)
        {
            printf("Digite um numero: ");
            scanf("%d",&numero);

            if (numero>0)
                {
                   spositivo=spositivo+numero;
                }else
                {
                    snegativo=snegativo+numero;
                }

        }
        printf("Soma de valores positivos: %d\nSoma de valores negativos: %d",spositivo,snegativo);
}
