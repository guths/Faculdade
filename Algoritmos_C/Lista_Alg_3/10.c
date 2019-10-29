#include <stdio.h>
#include <conio.h>
#include <stdlib.h>


void main()
{
    int matriz[5][5],vetor[5],auxvetor=0,matrizresultado[5][5];



    for(int l=0;l<5;l++)
    {
        for(int c=0;c<5;c++)
        {
            matriz[l][c]=rand()%20;
        }
    }

    for(int i=0;i<5;i++)
    {
        vetor[i]=rand()%5;
    }

    printf("---------------\nMatriz\n");

    for(int l=0;l<5;l++)
    {
        for (int c=0;c<5;c++ )
        {
            printf("%3d ",matriz[l][c]);
        }

        printf("\n");
    }

    printf("---------------\nVetor\n");

    for(int i=0;i<5;i++)
    {
        printf("%3d",vetor[i]);
    }

    printf("\n");

    for(int l=0;l<5;l++)
    {
        for (int c=0;c<5;c++ )
        {
            matrizresultado[l][c]=vetor[c]*matriz[l][c];
        }
    }

    printf("---------------\nMatriz Resutado\n");

     for(int l=0;l<5;l++)
    {
        for (int c=0;c<5;c++ )
        {
            printf("%3d ",matrizresultado[l][c]);
        }

        printf("\n");
    }



}
