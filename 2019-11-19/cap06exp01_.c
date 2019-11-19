// Capítulo 06. Exercícios Propostos. Nº 01
#include <stdio.h>
int main(){
    int mat[3][5], i, j, cont=0;

    for(i=0; i<3; i++){
        for(j=0;j<5;j++){
            printf("Digite um numero [%d][%d]: ", i+1, j+1);
            scanf("%d", &mat[i][j]);
        }
    }
    for(i=0; i<3; i++){
        for(j=0;j<5;j++){
            if(mat[i][j]> 15 && mat[i][j]<20){
                cont++;
            }
        }
    }
    printf("Quantidade de numeros entre 15 e 20: %d", cont);
    return 0;
}
