#include <stdio.h>
#include <math.h>

void main()
{
  int maior=0,menor,valor,i;
  for(i=1;i<6;i++)
    {
        printf("Digite o seu valor: \n");
        scanf("%d",&valor);
        if (valor>maior)
            {
                maior=valor;
            }
        if (valor < menor )
            {
                menor=valor;
            }
    }
    printf("O maior valor eh %d\nO menor valor eh %d",maior,menor);
}
