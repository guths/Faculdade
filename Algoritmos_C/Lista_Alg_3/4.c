void main()
{

    int matriz[4][4],a;

    printf("Digite o valor para a variavel A: ");
    scanf("%d",&a);

    for(int l=0;l<4;l++)
    {
        for (int c=0;c<4;c++ )
        {
            printf("Digite um numero para a posicao [%d][%d]\n",l+1,c+1);
            scanf("%d",&matriz[l][c]);
        }
    }

        for(int l=0;l<4;l++)
    {
        for (int c=0;c<4;c++ )
        {
            printf("%2d ",matriz[l][c]);
        }

        printf("\n");
    }

    printf("----------------------\n");

      for(int l=0;l<4;l++)
    {
        for (int c=0;c<4;c++ )
        {
            matriz[l][c]=a*matriz[l][c];
        }
    }

    for(int l=0;l<4;l++)
    {
        for (int c=0;c<4;c++ )
        {
            printf("%2d ",matriz[l][c]);
        }

        printf("\n");
    }



}

