/* Prova - Turma B - Questão 1
1)	a) Faça uma função que receba 3 números inteiros por parâmetro e retorne 1
    caso o terceiro seja a soma dos dois primeiros e retorne 0 caso contrário.
    Exemplo:
        * Se a função receber respectivamente 2, 4 e 6, deverá retornar 1
        (pois 2+4 = 6).
        * Caso receba 1, 3 e 7, deverá retornar 0 (pois 1+3 = 4 e 4 é diferente
        de 7)

    b) Faça um programa que leia 3 números inteiros e diz se o terceiro é a
    soma dos dois primeiros. Utilize a função criada na letra a para fazer essa
    verificação
*/
#include <stdio.h>
int verifica(int a, int b, int c){
    if(c == a + b) {
        return 1;
    }
    else {
        return 0;
    }
}

int main(){
    int a, b, c;

    printf("Digite tres numeros: ");
    scanf("%d %d %d", &a, &b, &c);

    if(verifica(a, b, c) == 1){
        printf("O terceiro eh a soma dos dois primeiros.\n");
    }
    else {
        printf("O terceiro nao eh a soma dos dois primeiros.\n");
    }

    return 0;
}
