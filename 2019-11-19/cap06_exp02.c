// Capítulo 06. Exercícios Propostos. Nº 02
#include <stdio.h>
int main(){
    int mat[2][4], i, j, quant12_20, contPares=0,somaPares=0;
    float media;
    for(i=0;i<2;i++){
        for(j=0;j<4;j++){
            printf("Digite um numero ([%d] [%d]): ", i+1, j+1);
            scanf("%d", &mat[i][j]);
        }
    }
    for(i=0;i<2;i++){
        quant12_20=0;
        for(j=0;j<4;j++){
            if(mat[i][j] > 12 && mat[i][j] < 20){
                quant12_20++;
            }
            if(mat[i][j]%2 == 0){
                contPares++;
                somaPares += mat[i][j];
            }
        }
        printf("Quant. de n. entre 12 e 20 na linha %d: %d\n", i+1, quant12_20);
    }
    media = (float)somaPares / contPares;
    printf("Media dos numeros pares: %f\n", media);
    return 0;
}
