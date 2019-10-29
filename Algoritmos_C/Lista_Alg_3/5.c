#include <stdio.h>

void main()
{

    int matrizcontrole[5][5],matriz[5][5];
    for(int l=0;l<5;l++)
    {
        for (int c=0;c<5;c++ )
        {
            printf("Digite um numero para a posicao [%d][%d]\n",l+1,c+1);
            scanf("%d",&matrizcontrole[l][c]);

            if(matrizcontrole[l][c]%2==0)
            {
                matriz[l][c]=matrizcontrole[l][c];
            }
            else
            {
                matriz[l][c]=matrizcontrole[l][c]+l+c;
            }
        }
    }

      for(int l=0;l<5;l++)
    {
        for (int c=0;c<5;c++ )
        {
            printf("%3d ",matrizcontrole[l][c]);
        }

        printf("\n");
    }

    printf("----------------------\n");

       for(int l=0;l<5;l++)
    {
        for (int c=0;c<5;c++ )
        {
            printf("%3d ",matriz[l][c]);
        }

        printf("\n");
    }

}
