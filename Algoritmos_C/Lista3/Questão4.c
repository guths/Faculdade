#include <stdio.h>
#include <string.h>

/*Escreva uma fun��o chamada NOME_MES que receba um valor inteiro N (de 1 a 12) e
retorne um string (caracter) contendo o nome do m�s correspondente a N. Fa�a o programa
principal que leia uma data (no formato dia, m�s e ano) e, usando a fun��o NOME_MES,
exiba a data lida no formato abaixo:
EXEMPLO:
Entrada: 23 11 1998
Sa�da: 23 de novembro de 1998*/

int NOME_MES(int n){

    char meses[12][15]={"Janeiro","Fevereiro","Marco","Abril","Maio","Junho","Julho","Agosto","Setembro","Outubro","Novembro","Dezembro"};;


    return meses[n+1];

}

void main(){

    printf("%d",NOME_MES(2));


}











