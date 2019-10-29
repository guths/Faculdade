#include <stdio.h>

void main()
{
    int i;
    float num;

    for(i=0;i<10;i++)
        {
            printf("Digite o seu numero\n");
            scanf("%f",&num);
            printf("Metade do numero:%.2f\n",num/2);
        }
}
