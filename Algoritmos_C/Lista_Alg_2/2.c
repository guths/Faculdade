#include <stdio.h>


void main()
{
    int X[5],Y[5],soma[5];

    for(int i=0;i<5;i++)
    {
        printf("Digite um valor para o vetor X: \n");
        scanf("%d",&X[i]);
    }

    for(int i=0;i<5;i++)
    {
        printf("Digite um valor para o vetor Y: \n");
        scanf("%d",&Y[i]);
    }
    for(int i=0;i<5;i++)
    {
        soma[i]=X[i]+Y[i];
        printf("X(%d)*(%d)Y=%d\n",X[i],Y[i],soma[i]);
    }



}

