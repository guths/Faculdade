#include <stdio.h>
#include <math.h>

void main()
{
    int ficha,sexo,m=0,h=0;
    float alturam,alturah;
    float mediatotal,mediaalturah,mediaalturam;
    float maiorh=0,maiorm=0,menorh=1000000,menorm=1000000;
    float somam=0,somah=0;

    for (ficha=1;ficha<5;ficha++)
    {

        printf("Digite 1 para Masculino 2 para Feminino\n");
        scanf("%d",&sexo);


        if (sexo!=1 && sexo!=2)
            {
                printf("Erro! Digite 1 para sexo Masculino e 2 para sexo feminino\n");
            }
        if (sexo==1)
            {
                printf("Digite a altura\n");
                scanf("%f",&alturah);
                if (alturah<2.5 && alturah>0)
                {
                    somah=somah+alturah;
                    h++;
                    if (alturah>maiorh)
                    {
                        maiorh=alturah;
                    }
                    if (alturah<menorh)
                    {
                        menorh=alturah;
                    }
                }else
                {
                    printf("Ops! Digite uma altura valida!\n");
                }
            }
        if (sexo==2)
            {
                printf("Digite a altura\n");
                scanf("%f",&alturam);
                if (alturam<2.10 && alturam>0)
                {
                    somam=somam+alturam;
                    m++;
                    if (alturam>maiorm)
                    {
                        maiorm=alturam;
                    }
                    if (alturam<menorm)
                    {
                        menorm=alturam;
                    }
                }else
                {
                    printf("Ops! Digite uma altura valida");
                }
            }
    }

    mediaalturah=somah/h;
    mediaalturam=somam/m;
    mediatotal=(somah+somam)/(h+m);

        if (maiorh>maiorm)
            {
            printf("A maior altura da sala eh de um homem, que mede %.2f.\n",maiorh);
            }else
            {
            printf("A maior altura eh de uma mulher, que mede %.2f\n",maiorm);
            }
        if (menorh>menorm)
            {
            printf("A menor altura da sala eh de uma mulher, que mede %.2f\n",menorm);
            }else
            {
            printf("A menor altura da sala eh de um homem que mede %.2f\n",menorh);
            }


        printf("A media da altura das mulheres eh %.2f\n",mediaalturam);
        printf("A media da altura dos homens eh %.2f\n",mediaalturah);
        printf("A media da altura da turma eh %.2f\n",mediatotal);
}

