#include <stdio.h>

void main()
{

    int matriz[5][5], somacoluna=0, somadiagonal=0;

    for(int l=0;l<5;l++)
    {
        for (int c=0;c<5;c++ )
        {
            printf("Digite um numero para a posicao [%d][%d]\n",l+1,c+1);
            scanf("%d",&matriz[l][c]);
        }
    }

    for(int l=0;l<5;l++)
    {
        somacoluna+=matriz[l][2];
    }

    for(int l=0;l<5;l++)
    {
        for (int c=0;c<5;c++ )
        {
            if(c == l)
            {
                somadiagonal+=matriz[l][c];
            }
        }
    }

    printf("A soma da coluna dois foi: %d\n",somacoluna);
    printf("A soma da diagonal foi: %d\n",somadiagonal);

}
