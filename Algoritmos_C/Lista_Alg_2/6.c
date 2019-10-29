#include <stdio.h>

void main()
{
    int quantidade[10],count=0,mais=0;
    float valor[10];
    float valortotal=0;
    for(int i=0;i<10;i++)
    {
        printf("Digite a quantidade de objetos: \n");
        scanf("%d",&quantidade[i]);
        printf("Digite o valor: \n");
        scanf("%f",&valor[i]);
        printf("--------------------------------\n\n");
    }
    for(int i=0;i<10;i++)
    {
        printf("Item: %d || Quantidade: %d || Valor %2.f || Valor total %3.f\n",i+1,quantidade[i],valor[i],(valor[i]*quantidade[i]));
        valortotal=valor[i]*quantidade[i]+valortotal;
        printf("--------------------------------\n\n");
    }
    printf("O valor total arrecadado foi %3.f\n\n",valortotal);

    printf("--------------------------------\n\n");
    for(int i=0;i<10;i++)
    {
        if(quantidade[i]>mais)
        {
            mais=quantidade[i];
            count=i;
        }
    }

    printf("O item %d foi o mais vendido, com o valor de %1.f\n\n",count+1,valor[count]);

    printf("--------------------------------\n\n");

    printf("Salario total=998.00+%f \nSalario total=%f",(0.03*valortotal),((0.03*valortotal)+998));
}
