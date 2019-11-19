/* Prova - Turma B - Quest�o 3
3)	a) Fa�a uma fun��o que receba um n�mero inteiro N por par�metro e retorne
    o valor somat�rio de todos os n�meros entre 0 e N (inclusive).
    Exemplo: Se o n�mero passado por par�metro for 4, o valor retornado dever�
    ser 10. (Pois 0+1+2+3+4 = 10).

    b) Fa�a um programa que carregue um vetor de 10 elementos e em seguida
    aplique a fun��o criada na letra a a cada um dos elementos do vetor,
    exibindo cada resultado.
    Exemplo: Se os n�meros digitados forem: 1, 4, 2, 5, 3, 6, 8, 3, 5 e 1, o
    programa dever� imprimir: 1 10 3 15 6 21 36 6 15 1
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
