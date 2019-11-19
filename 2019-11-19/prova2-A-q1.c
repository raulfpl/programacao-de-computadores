/* Prova - Turma A
 Questão 1
1)	a) Faça uma função que receba dois números inteiros por parâmetro e retorne
    a soma dos dois, caso o primeiro for par ou a multiplicação dos dois, caso
    o primeiro seja ímpar.
    Exemplo: Se a função receber respectivamente 4 e 5, deverá retornar 9 (pois
    4 e par e 4+5 = 9). Se a função receber respectivamente 3 e 7, deverá
    retornar 21 (pois 3*7 = 21 e 3 é ímpar).

    b) Faça um programa que leia 2 números inteiros e execute a função da letra
    a, e exiba o resultado.
*/
#include <stdio.h>
int fun(int a, int b){
    if(a%2==0){
        return a+b;
    }
    else{
        return a*b;
    }
}

int main(){
    int a, b, r;
    printf("Digite dois numeros: ");
    scanf("%d %d", &a, &b);

    r = fun(a, b);

    printf("Resultado: %d\n", r);

    return 0;
}
