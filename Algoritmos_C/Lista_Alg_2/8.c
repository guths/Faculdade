#include <stdio.h>

void main()
{
    int vetor[8],vetorp[8],vetorn[8],auxp=0,auxn=0,p=0,n=0;
    for(int i = 0; i < 8; i++)
    {
        printf("Digite um valor para a posicao %d do vetor: \n", i);
        scanf("%d", &vetor[i]);
    }
    for(int i=0;i<8;i++)
    {
        if(vetor[i]>0)
        {
            vetorp[auxp]=vetor[i];
            auxp++;
            p++;
        }
        if(vetor[i]<0)
        {
            vetorn[auxn]=vetor[i];
            auxn++;
            n++;
        }
    }
    for(int i=0;i<p;i++)
    {
        printf("A posicao %d do vetor positivo eh %d\n",i,vetorp[i]);
    }
    printf("_________________________________________________\n");
        for(int i=0;i<n;i++)
    {
        printf("A posicao %d do vetor negativo eh %d\n",i,vetorn[i]);
    }
}

