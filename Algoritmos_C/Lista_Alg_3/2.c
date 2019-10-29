#include <stdio.h>

void main()
{

    int matriza[5][5], matrizb[5][5], soma[5][5];

    for(int l=0;l<5;l++)
    {
        for (int c=0;c<5;c++ )
        {
            printf("(Matriz A) Digite um numero para a posicao [%d][%d]\n",l+1,c+1);
            scanf("%d",&matriza[l][c]);
        }
    }

    printf("______________________\n");

    for(int l=0;l<5;l++)
    {
        for (int c=0;c<5;c++ )
        {
            printf("(Matriz B) Digite um numero para a posicao [%d][%d]\n",l+1,c+1);
            scanf("%d",&matrizb[l][c]);
        }
    }

    for(int l=0;l<5;l++)
    {
        for (int c=0;c<5;c++ )
        {
            soma[l][c]=matriza[l][c]+matrizb[l][c];
        }
    }

    for(int l=0;l<5;l++)
    {
        for (int c=0;c<5;c++ )
        {
            printf("%d  |",matriza[l][c]);
        }

        printf("\n");
    }

    printf("\n");
    printf("\n");

     for(int l=0;l<5;l++)
    {
        for (int c=0;c<5;c++ )
        {
            printf("%d  |",matrizb[l][c]);
        }

        printf("\n");
    }

    printf("\n");
    printf("\n");

     for(int l=0;l<5;l++)
    {
        for (int c=0;c<5;c++ )
        {
            printf("%d  |",soma[l][c]);
        }

        printf("\n");
    }











}
