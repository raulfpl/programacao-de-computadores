/* Prova - Turma B - Quest�o 2
2)	Fa�a um programa que carregue um vetor de 5 n�meros reais e calcule e
    mostre a soma dos quadrados de todos os n�meros do vetor.
	Exemplo: se os n�meros digitados forem: 1, 2, 3, 2 e 2, o resultado exibido
    ser�: Soma dos quadrados = 22
	Obs.: O quadrado de x = x*x
*/
#include <stdio.h>

int main(){
    float vet[5];
    int i, soma=0;

    for(i=0;i<5;i++){
        printf("Digite um numero (%d): ", i+1);
        scanf("%f", &vet[i]);
    }

    for(i=0;i<5;i++){
        soma += vet[i] * vet[i];

    }

    printf("Soma dos quadrados = %d", soma);

    return 0;
}
