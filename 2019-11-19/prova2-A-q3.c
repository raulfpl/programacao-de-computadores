/* Prova - Turma A
 Quest�o 3
3)	a) Fa�a uma fun��o que recebe dois n�meros inteiros A e B e retorna 1 caso
    A seja maior que B e retorna 0 caso contr�rio.
    b) Fa�a um programa que carregue um vetor de 8 elementos inteiros e exiba
    a quantidade de n�meros nesse vetor que s�o maiores que 20 usando a fun��o
    criada na letra a para fazer essa verifica��o.
*/
#include <stdio.h>
int maior(int A, int B){
    if(A>B){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
    int vet[8], i, cont=0;

    for(i=0;i<8;i++){
        printf("Digite um numero (%d): ", i+1);
        scanf("%d", &vet[i]);
    }

    for(i=0;i<8;i++){
        if(maior(vet[i], 20)==1){
            cont++;
        }
    }

    printf("Quantidade de numeros maiors que 20: %d\n", cont);

    return 0;
}
