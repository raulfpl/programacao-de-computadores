/* Prova - Turma A
 Quest�o 1
1)	a) Fa�a uma fun��o que receba dois n�meros inteiros por par�metro e retorne
    a soma dos dois, caso o primeiro for par ou a multiplica��o dos dois, caso
    o primeiro seja �mpar.
    Exemplo: Se a fun��o receber respectivamente 4 e 5, dever� retornar 9 (pois
    4 e par e 4+5 = 9). Se a fun��o receber respectivamente 3 e 7, dever�
    retornar 21 (pois 3*7 = 21 e 3 � �mpar).

    b) Fa�a um programa que leia 2 n�meros inteiros e execute a fun��o da letra
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
