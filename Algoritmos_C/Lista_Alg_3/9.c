#include <stdio.h>
#include <conio.h>
#include <stdlib.h>


void main()
{
    int matriza[5][5],matrizb[5][5],matrizc[5][5];



    for(int l=0;l<5;l++)
    {
        for(int c=0;c<5;c++)
        {
            matriza[l][c]=rand()%100;
        }
    }

    printf("---------------------------\nMatriz A:\n");

     for(int l=0;l<5;l++)
    {
        for (int c=0;c<5;c++ )
        {
            printf("%3d ",matriza[l][c]);
        }

        printf("\n");
    }

    printf("---------------------------\nMatriz B:\n");

    for(int l=0;l<5;l++)
    {
        for(int c=0;c<5;c++)
        {
            matrizb[l][c]=rand()%100;
        }
    }

     for(int l=0;l<5;l++)
    {
        for (int c=0;c<5;c++ )
        {
            printf("%3d ",matrizb[l][c]);
        }

        printf("\n");
    }

    for(int l=0;l<5;l++)
    {
        for(int c=0;c<5;c++)
        {
            matrizc[l][c]=matriza[l][c]-matrizb[l][c];
        }
    }

    printf("---------------------------\nMatriz C:\n");

     for(int l=0;l<5;l++)
    {
        for (int c=0;c<5;c++ )
        {
            printf("%3d ",matrizc[l][c]);
        }

        printf("\n");
    }
}






