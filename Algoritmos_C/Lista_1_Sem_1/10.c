#include <stdio.h>
#include <math.h>

void main()
{
    int count,digmenor,digmaior,soma=0;
    printf("Digite o menor valor: \n");
    scanf("%d",&digmenor);
    printf("Digite o maior valor: \n");
    scanf("%d",&digmaior);

    if(digmenor>digmaior)
        {
            printf("erro");
        }else
        {
        for(count=digmenor;count<=digmaior;count++)
            {
                if (count%2==0)
                    {
                        printf("%d \n",count);
                        soma=soma+count;
                    }
            }
        printf("A soma eh %d",soma);
        }
}

