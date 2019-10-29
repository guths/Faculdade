#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void main()
{

    int matriz[10][10],linha2[10],linha5[10],linha8[10],linha9[10],aux2=0,aux5=0,aux8=0,aux9=0;

    //Leitura da matriz
    for(int l=0;l<10;l++)
    {
        for (int c=0;c<10;c++ )
        {
            matriz[l][c]=rand()%50;
        }
    }


     for(int l=0;l<10;l++)
    {
        for (int c=0;c<10;c++ )
        {
            printf("%3d ",matriz[l][c]);
        }

        printf("\n");
    }

    printf("\n");

    //Coletando as linhas
    for(int l=0;l<10;l++)
    {
        for (int c=0;c<10;c++ )
        {
           if(l == 2)
            {
                linha2[aux2]= matriz[l][c];
                aux2++;
            }
            if(l == 5)
            {
                linha5[aux5]=matriz[l][c];
                aux5++;
            }
            if(l == 8)
            {
                linha8[aux8]=matriz[l][c];
                aux8++;
            }
            if(l == 9)
            {
                linha9[aux9]=matriz[l][c];
                aux9++;
            }
        }
    }

    //Zerando os auxiliares novamente
    aux2=0;
    aux5=0;
    aux8=0;
    aux9=0;

    //Troca das linhas
    for(int l=0;l<10;l++)
    {
        for (int c=0;c<10;c++ )
        {
           if(l == 2)
            {
                matriz[l][c]=linha8[aux2];
                aux2++;
            }
            if(l == 5)
            {
                matriz[l][c]=linha9[aux5];
                aux5++;
            }
            if(l == 8)
            {
                matriz[l][c]=linha2[aux8];
                aux8++;
            }
            if(l == 9)
            {
                matriz[l][c]= linha5[aux9];
                aux9++;
            }
        }
    }


     for(int l=0;l<10;l++)
    {
        for (int c=0;c<10;c++ )
        {
            printf("%3d ",matriz[l][c]);
        }

        printf("\n");
    }






}
