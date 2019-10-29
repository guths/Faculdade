#include <stdio.h>

void main()
{
    int vetor1[10],vetor2[10],vetor3[20],aux=0;
    for(int i = 0; i < 10; i++)
    {
        printf("Digite um valor para a posicao %d do vetor 1: ", i);
        scanf("%d", &vetor1[i]);
    }
    for(int i = 0; i < 10; i++)
    {
        printf("Digite um valor para a posicao %d do vetor 2: ", i);
        scanf("%d", &vetor2[i]);
    }
    for(int i=0;i<10;i++)
    {
        vetor3[aux]=vetor1[i];
        aux++;
        vetor3[aux]=vetor2[i];
        aux++;
    }
    printf("Vetor 3\n\n");
    for(int i=0;i<20;i++)
    {
        printf("Posicao %d Valor %d\n",i,vetor3[i]);
    }

}