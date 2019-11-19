/* Prova - Turma A
 Questão 2
 2) Faça um programa que carregue um vetor de 7 elementos e calcule e mostre
 a soma de todos os elementos do vetor que forem maiores que 10.
 Exemplo: Se os números digitados forem: 7, 14, 20, 12, 3, 2 e 11, o
 resultado exibido deverá ser 57.
*/
#include <stdio.h>

int main(){
    int vet[7], i, soma=0;

    for(i=0;i<7;i++){
        printf("Digite um numero (%d): ", i+1);
        scanf("%d", &vet[i]);
    }

    for(i=0;i<7;i++){
        if(vet[i]>10){
            soma += vet[i];
        }
    }

    printf("Soma dos maiores que 10: %d", soma);

    return 0;
}
