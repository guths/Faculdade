#include <stdio.h>
/*Escreva um algoritmo que imprima todos os números inteiros de 10 a 1 (em ordem
decrescente), utilizando recursividade.*/


void imprimeValores(int numero){

    printf("%d\n",numero);
    numero--;
    if(numero>=1){

        imprimeValores(numero);
    }
    printf("%d\n",numero);
    numero--;

}

void main(){

    imprimeValores(10);

}
