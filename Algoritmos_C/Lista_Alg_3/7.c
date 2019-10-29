#include <stdio.h>


void main()
{
    int matriz[2][2],soma1=1,soma2=1;


    for(int l=0;l<2;l++)
    {
        for(int c=0;c<2;c++)
        {
            printf("Digite um valor para a posicao [%d][%d]",l+1,c+1);
            scanf("%d",&matriz[l][c]);
        }
    }

    for(int l=0;l<2;l++)
    {
        for(int c=0;c<2;c++)
        {
            if(c==l)
            {
                soma1=matriz[l][c]*soma1;
            }

        }
    }

    for (int i=0;i<2;i++)
    {
        {
            soma2=matriz[i][1-i]*soma2;
        }
    }

    for(int l=0;l<2;l++)
    {
        for(int c=0;c<2;c++)
        {
            printf("%3d",matriz[l][c]);
        }
        printf("\n");
    }

    printf("\n");

    printf("Diagonal principal: %dDiagonal secundaria %d\n%d+(%d)=%d",soma1,-soma2,soma1,-soma2,soma1+(-soma2));










}
