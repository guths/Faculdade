#include <stdio.h>
#include <math.h>




void main()
{
    int lugares;                                                            //Valor de quantas notas serao lidas
    float somaidadea=0,somaidadeb=0,somaidadec=0,somaidaded=0,somaidadee=0; //Variavel que armazena a soma de idades de cada nota
    float a,b,c,d,e;                                                        //Utilizada para contar a quantidade de cada nota
    char nota;                                                              //Utilizada na leitura da nota
    int idadea,idadeb,idadec,idaded,idadee;                                 //Variavel para ter uma idade de cada nota
    int maiora=0,maiorb=0,maiorc=0,maiord=0,maiore=0;                       //Armazena a maior idade de cada nota
    int notaconvertida;
    int menora=1000,menorb=1000,menorc=1000,menord=1000,menore=1000;        //Armazena a menor idade de cada nota

    for (lugares=1;lugares=20;lugares++)
        {
            printf("Ola! Para avaliar o filme, selecione as notas a seguir:\n A- Otimo\nB- Bom\nC- Regular\nD- Ruim\nE- Pessimo\n");
            scanf("%s",&nota);
            if (nota=="a" || nota=="A")
                {
                    notaconvertida=1;
                }
            if (nota=="b" || nota=="B")
                {
                    notaconvertida=2;
                }
            if (nota=="c" || nota=="C")
                {
                    notaconvertida=3;
                }
            if (nota=="D"|| nota=="d")
                {
                    notaconvertida=4;
                }
            if (nota=="E" || nota=="e")
                {
                    notaconvertida=5;
                }
            switch(notaconvertida)
            {
                case 1:
                    a++;
                    printf("Qual a sua idade?\n ");
                    scanf("%d",&idadea);
                    somaidadea+=;
                    if (idadea>maiora)
                    {
                        maiora=idadea;
                    }
                    if (idadea<menora )
                    {
                        menora=idadea;
                    }
                    break;
                case 2:
                    b++;
                    printf("Qual a sua idade?\n ");
                    scanf("%d",&idadeb);
                    somaidadeb+=;
                    if (idadeb>maiorb)
                    {
                        maiorb=idadeb;
                    }
                    if (idadeb<menorb )
                    {
                        menorb=idadeb;
                    }
                    break;
                case 3:
                    c++;
                    printf("Qual a sua idade?\n ");
                    scanf("%d",&idadec);
                    somaidadec+=;
                    if (idadea>maiora)
                    {
                        maiora=idadea;
                    }
                    if (idadea<menora )
                    {
                        menora=idadea;
                    }
                    break;
                case 4:
                    d++;
                    printf("Qual a sua idade?\n ");
                    scanf("%d",&idaded);
                    somaidaded+=;
                    if (idaded>maiord)
                    {
                        maiord=idaded;
                    }
                    if (idaded<menord )
                    {
                        menord=idaded;
                    }
                    break;
                case 5:
                    e++;
                    printf("Qual a sua idade?\n ");
                    scanf("%d",&idadee);
                    somaidadee+=;
                    if (idadee>maiore)
                    {
                        maiore=idadee;
                    }
                    if (idadee<menore)
                    {
                        menore=idadee;
                    }
                break;
            }

        printf("Quantidade de respostas otimas: %d\nQuantidade de respostas boas: %d\nQuantidade de respostas regulares: %d\nQuantidade de respostas ruins: %d\nQuantidade de respostas pessimas: %d\n",a,b,c,d,e);
        printf("A diferenca percentual entre respostas bom e regular foi %d\n",((5*b)-(5*c)));
        printf("Media de idade de respostas Otimas %1.f",(somaidadea/a));
        printf("Media de idade de respostas Boas %1.f",(somaidadeb/b));
        printf("Media de idade de respostas Regulares %1.f",(somaidadec/c));
        printf("Media de idade de respostas Ruins %1.f",(somaidaded/d));
        printf("Media de idade de respostas Pessimas %1.f",(somaidadee/e));






        }









}
