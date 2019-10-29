#include <stdio.h>

/*Escreva um algoritmo que leia um valor para X e uma sub-rotina que imprima todos os
números ímpares do intervalo fechado de 1 a X.*/

void imprimeImpares(int numero){


    numero--;
    if(numero>1){
        imprimeImpares(numero);
    }
    if(numero%2!=0){
        printf("%d\n",numero);
    }
}


void main(){

    int qntValores=0;
    printf("Digite a quantidade de valores para rodar: ");
    scanf("%d",&qntValores);
    imprimeImpares(qntValores);

}
