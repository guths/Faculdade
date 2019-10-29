
#include <stdio.h>


void main()
{
    int matriz[5][5],sl[5],sc[5],auxc=0,auxl=0,somal=0,somac=0;

    for(int l=0;l<5;l++)
    {
        for (int c=0;c<5;c++ )
        {
            printf("Digite um numero para a posicao [%d][%d]\n",l+1,c+1);
            scanf("%d",&matriz[l][c]);
        }
    }

    printf("\n\n");

    for(int l=0;l<5;l++)
    {
        somac=0;
        for (int c=0;c<5;c++ )
        {
            somac+=matriz[c][l];
        }

        sc[auxc]=somac;
        auxc++;
    }

    for(int l=0;l<5;l++)
    {
        somal=0;
        for (int c=0;c<5;c++ )
        {
            somal+=matriz[l][c];
        }

        sl[auxl]=somal;
        auxl++;
    }

    for(int l=0;l<5;l++)
    {
        for (int c=0;c<5;c++ )
        {
            printf("%3d ",matriz[l][c]);
        }

        printf("|%d",sl[l]);
        printf("\n");
    }

    printf("_____________________\n");

    for(int i=0;i<5;i++)
    {
        printf(" %3d",sc[i]);
    }









}
