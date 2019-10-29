void main()
{
    int x[10],y[10],dif[20],difCount=0;
    for(int i = 0; i < 10; i++)
    {
        printf("Digite um valor para a posicao %d do vetor X: ", i);
        scanf("%d", &X[i]);
    }
    for(int i = 0; i < 10; i++)
    {
        printf("Digite um valor para a posicao %d do vetor Y: ", i);
        scanf("%d", &Y[i]);
    }

    for(int i=0;i<10,i++)
    {
        int aux=0;
        for(int j=0;j<10;j++)
        {
            if x[i]==y[j]
            aux++;
        }
        if(aux==0)
        {
            int auxDife=0;
            for (int count=0; count<difCount; count++)
            {
                if (dif[count]==X[i])
                {
                    auxDife++
                }
                
            }
            if (auxDife==0)
            {
                dif[difCount]=X[i]
                difCount++
            }
        }
    }
}