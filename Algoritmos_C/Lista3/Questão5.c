#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <stdbool.h>

/*Escreva um programa contendo funções ou procedimentos para realizar as seguintes tarefas:
a. Calcular o resto da divisão inteira de a por b
b. Exibir um inteiro entre 1 e 999 como uma sequência de dígitos, separando cada par de
dígitos por dois espaços. Por exemplo, o inteiro 456 deve ser apresentado como 4 5 6.
c. Imprimir os múltiplos de 7 menores que 200.
*/

int calculaInteiro(int a,int b){

    int i=2;

    while((b*i)<a){
        i++;
    }

    return i-1;
}

int numeroSeparado(int numero,int *vetor){

    int casas=0;
    if(numero<999){

        if(numero>99){

            vetor[0]=calculaInteiro(numero,100);
            vetor[1]=calculaInteiro(numero%100,10);
            vetor[2]=((numero%100)%10);
            casas=3;
            return casas;
        }
        if(numero>9 && numero<100 ){
            vetor[0]=calculaInteiro(numero,10);
            vetor[1]=numero%10;
            casas=2;
            return casas;
        }
        if(numero<9){
            vetor[0]=numero;
            casas=1;
            return casas;
        }
    }
    else
    {
        printf("O numero deve ser menor que 999");

    }
}


void isDivisivelSete(int numero,int *vetor){

    if(numero<200 && numero>0){

        int i=0;

        if (numero>99)
        {

            numeroSeparado(numero,vetor);
            i=numeroSeparado(numero,vetor);

            if((numero-(vetor[i]*2))%7==0)
            {
                printf("EH DIVI");

            }
            else
            {
                printf("NAO EH DIVI");
            }


        }
        else
        {

        }
    }
    else
    {
        printf("Numero invalido");
    }

}





void main(){

    int vetor[3];

    isDivisivelSete(121,vetor);




}

