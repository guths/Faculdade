#include <stdio.h>
#include <conio.h>
#include <stdlib.h>


void main()
{
    int matriz[8][8],count=0;



    for(int l=0;l<8;l++)
    {
        for(int c=0;c<8;c++)
        {
            matriz[l][c]=rand()%100;
        }
    }

    for(int l=0;l<8;l++)
    {
        for(int c=0;c<8;c++)
        {
            if(matriz[l][c]!=matriz[c][l])
            {
                count++;
            }
        }
    }

    if(count>0)
    {
        printf("A matriz eh assimetrica!");
    }
    else
    {
        printf("A matriz eh simetrica!");
    }




}
