/* Prova - Turma B - Questão 3
3)	a) Faça uma função que receba um número inteiro N por parâmetro e retorne
    o valor somatório de todos os números entre 0 e N (inclusive).
    Exemplo: Se o número passado por parâmetro for 4, o valor retornado deverá
    ser 10. (Pois 0+1+2+3+4 = 10).

    b) Faça um programa que carregue um vetor de 10 elementos e em seguida
    aplique a função criada na letra a a cada um dos elementos do vetor,
    exibindo cada resultado.
    Exemplo: Se os números digitados forem: 1, 4, 2, 5, 3, 6, 8, 3, 5 e 1, o
    programa deverá imprimir: 1 10 3 15 6 21 36 6 15 1
*/
#include <stdio.h>
int somatorio(int N) {
    int i, soma = 0;

    for(i = 0; i <= N; i++) {
        soma += i;
    }

    return soma;
}

int main() {
    int vet[10], i;

    for(i = 0; i < 10; i++) {
        printf("Digite um numero (%d): ", i + 1);
        scanf("%d", &vet[i]);
    }

    printf("Resultado: \n");
    for(i = 0; i < 10; i++) {
        printf("%d ", somatorio(vet[i]));
    }

    return 0;
}
