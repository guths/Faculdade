#include <stdio.h>

int mes()
{

}

void main()
{
    int temp[11],maior,menor,posMax,posMin;
    for(int i=0;i<11;i++)
    {
        printf("Digite a temperatura media do mes %d",i+1);
        scanf("%d",temp[i]);
    }

    for(int i=0;i<11;i++)
    {
        if(i==0)
        {
            maior=temp[i];
            menor=temp[i];
            posMax=i;
            posMin=i;
        }
        else
        {
            if(temp[i]>maior)
            {
                maior=temp[i];
                posMax=i
            }
            if(temp[i]<menor)
            {
                menor=media[i];
                posMin=i;
            }
        }
    }
        switch (posMax)
    {
    case 0:
        printf("A maior temperatura eh a do mes de Janeiro com %.2f C", temp[posMax]);
        break;
    case 1:
        printf("A maior temperatura eh a do mes de Fevereiro com %.2f C", temp[posMax]);
        break;
    case 2:
        printf("A maior temperatura eh a do mes de Marco com %.2f C", temp[posMax]);
        break;
    case 3:
        printf("A maior temperatura eh a do mes de Abril com %.2f C", temp[posMax]);
        break;   
    case 4:
        printf("A maior temperatura eh a do mes de Maio com %.2f C", temp[posMax]);
        break;
    case 5:
        printf("A maior temperatura eh a do mes de Junho com %.2f C", temp[posMax]);
        break;
    case 6:
        printf("A maior temperatura eh a do mes de Julho com %.2f C", temp[posMax]);
        break;
    case 7:
        printf("A maior temperatura eh a do mes de Agosto com %.2f C", temp[posMax]);
        break;
    case 8:
        printf("A maior temperatura eh a do mes de Setembro com %.2f C", temp[posMax]);
        break;
    case 9:
        printf("A maior temperatura eh a do mes de Outubro com %.2f C", temp[posMax]);
        break;
    case 10:
        printf("A maior temperatura eh a do mes de Novembro com %.2f C", temp[posMax]);
        break;
    case 11:
        printf("A maior temperatura eh a do mes de Dezembro com %.2f C", temp[posMax]);
        break;
    }
    switch (posMin)
    {
    case 0:
        printf("A menor temperatura eh a do mes de Janeiro com %.2f C", temp[posMin]);
        break;
    case 1:
        printf("A menor temperatura eh a do mes de Fevereiro com %.2f C", temp[posMin]);
        break;
    case 2:
        printf("A menor temperatura eh a do mes de Marco com %.2f C", temp[posMin]);
        break;
    case 3:
        printf("A menor temperatura eh a do mes de Abril com %.2f C", temp[posMin]);
        break;   
    case 4:
        printf("A menor temperatura eh a do mes de Maio com %.2f C", temp[posMin]);
        break;
    case 5:
        printf("A menor temperatura eh a do mes de Junho com %.2f C", temp[posMin]);
        break;
    case 6:
        printf("A menor temperatura eh a do mes de Julho com %.2f C", temp[posMin]);
        break;
    case 7:
        printf("A menor temperatura eh a do mes de Agosto com %.2f C", temp[posMin]);
        break;
    case 8:
        printf("A menor temperatura eh a do mes de Setembro com %.2f C", temp[posMin]);
        break;
    case 9:
        printf("A menor temperatura eh a do mes de Outubro com %.2f C", temp[posMin]);
        break;
    case 10:
        printf("A menor temperatura eh a do mes de Novembro com %.2f C", temp[posMin]);
        break;
    case 11:
        printf("A menor temperatura eh a do mes de Dezembro com %.2f C", temp[posMin]);
        break;
    }
}