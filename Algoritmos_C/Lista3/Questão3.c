#include <stdio.h>
#include <stdbool.h>

float situacaoMedia(float nota1,float nota2,float nota3){

    float media;
    media=(nota1+nota2+nota3)/3;

    return media;

}

void situacaoAluno(int faltas,float media){

    if (faltas>15 || media<7){
        printf("\nAluno reprovado");
    }

}


void main(){

    int faltas;
    float nota1,nota2,nota3;

    printf("Digite a quantidade de faltas: ");
    scanf("%d",&faltas);
    printf("\nDigite a nota 1: ");
    scanf("%d",&nota1);
    printf("\nDigite a nota 2: ");
    scanf("%d",&nota2);
    printf("\nDigite a nota 3: ");
    scanf("%d",&nota3);
    situacaoAluno(faltas,situacaoMedia(nota1,nota2,nota3));


}
