// Capítulo 06. Exercícios Propostos. Nº 09
#include <stdio.h>
int main(){
    float mat[3][3], n, res[3][3];
    int i, j;
    for(i=0; i< 3; i++){
        for(j=0;j<3;j++){
            printf("Digite um numero [%d][%d]: ", i+1, j+1);
            scanf("%f", &mat[i][j]);
        }
    }
    printf("Digite um numero: ");
    scanf("%f", &n);

    for(i=0; i< 3; i++){
        for(j=0;j<3;j++){
            res[i][j] = mat[i][j] * n;
        }
    }

    printf("Matriz resultante: \n");
    for(i=0; i< 3; i++){
        for(j=0;j<3;j++){
            printf("%f\t", res[i][j]);
        }
        printf("\n");
    }
    return 0;
}
