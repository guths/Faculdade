#include <stdio.h>
#include <string.h>

void main()
{
    int consumo[5],eco,gast,posieco,posigast;
    char carro[5][15];

    for(int i=0;i<5;i++)
    {
        printf("Digite o nome do carro %d: \n",i+1);
        scanf("%s",&carro[i]);

        printf("Digite o consumo do carro %d: \n",i+1);
        scanf("%d",&consumo[i]);

    }

    printf("______________________________________________________\n");


    for(int i=0;i<5;i++)
    {
        if (i==0)
        {

            eco=consumo[i];
            gast=consumo[i];
            posieco=i;
            posigast=i;

        }
        else
        {
            if(consumo[i]>eco)
            {
                eco=consumo[i];
                posieco=i;
            }
            if(consumo[i]<gast)
            {
                gast=consumo[i];
                posigast=i;
            }
        }
    }

    for (int i=0;i<5;i++)
    {
        printf("O carro %s consumira %d litros viajando 1000km\n\n",carro[i],1000/consumo[i]);
    }

    printf("______________________________________________________\n");

    printf("O carro mais economico foi o/a %s, consumindo %d KM/L\n",carro[posieco],consumo[posieco]);
    printf("O carro mais gastador foi o/a %s, consumindo %d KM/L\n",carro[posigast],consumo[posigast]);

}