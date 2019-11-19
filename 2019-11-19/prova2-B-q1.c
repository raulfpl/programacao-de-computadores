/* Prova - Turma B - Quest�o 1
1)	a) Fa�a uma fun��o que receba 3 n�meros inteiros por par�metro e retorne 1
    caso o terceiro seja a soma dos dois primeiros e retorne 0 caso contr�rio.
    Exemplo:
        * Se a fun��o receber respectivamente 2, 4 e 6, dever� retornar 1
        (pois 2+4 = 6).
        * Caso receba 1, 3 e 7, dever� retornar 0 (pois 1+3 = 4 e 4 � diferente
        de 7)

    b) Fa�a um programa que leia 3 n�meros inteiros e diz se o terceiro � a
    soma dos dois primeiros. Utilize a fun��o criada na letra a para fazer essa
    verifica��o
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
