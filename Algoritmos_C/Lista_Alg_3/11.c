void main()
{
    int matriza[5][5],matrizb[5][5],matrizc[5][5];
    int counta=0,countb=0,countc=0;


    printf("---------------------------\nMatriz A:\n");
    for(int l=0;l<5;l++)
    {
        for(int c=0;c<5;c++)
        {
            matriza[l][c]=rand()%100;
        }
    }

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









}
