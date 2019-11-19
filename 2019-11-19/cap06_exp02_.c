// Capítulo 06. Exercícios Propostos. Nº 02
#include<stdio.h>

int main(){
    int mat[2][4], i, j, cont, somaPar=0, contPar=0;
    float media;
    for(i=0; i<2; i++){
        for(j=0;j<4;j++){
            printf("Digite um numero [%d][%d]: ", i+1, j+1);
            scanf("%d", &mat[i][j]);
        }
    }
    for(i=0; i<2; i++){
        cont=0;
        for(j=0;j<4;j++){
            if(mat[i][j]>12 && mat[i][j] < 20){
                cont++;
            }
            if(mat[i][j]%2==0){
                somaPar += mat[i][j];
                contPar++;
            }
        }
        printf("Numeros entre 12 e 20 na linha %d: %d\n", i+1, cont);
    }
    media = (float)somaPar/contPar;
    printf("Media dos pares: %f\n", media);
    return 0;
}
