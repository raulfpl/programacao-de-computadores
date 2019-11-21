// produto matricial
#include <stdio.h>
int main(){
	int mat1[4][5], mat2[5][2], res[4][2], i, j, k, soma;

	printf("mat 1: \n");
	for(i=0; i<4; i++){
		for(j=0; j<5; j++){
			printf("Digite um numero (%d, %d): ", i+1, j+1);
			scanf("%d", &mat1[i][j]);
		}
	}

	printf("\nmat 2: \n");
	for(i=0; i<5; i++){
		for(j=0; j<2; j++){
			printf("Digite um numero (%d, %d): ", i+1, j+1);
			scanf("%d", &mat2[i][j]);
		}
	}

	for(i=0;i<4;i++){
		for(j=0;j<2;j++){
			soma = 0;
			for(k=0;k<5;k++){
				soma += mat1[i][k]*mat2[k][j];
			}
			res[i][j] = soma;
		}
	}

	printf("Matriz 1: \n");
	for(i=0;i<4;i++){
		for(j=0;j<5;j++){
			printf("%d\t", mat1[i][j]);
		}
		printf("\n");
	}	
	printf("Matriz 2: \n");
	for(i=0;i<5;i++){
		for(j=0;j<2;j++){
			printf("%d\t", mat2[i][j]);
		}
		printf("\n");
	}
	printf("Matriz resultante: \n");
	for(i=0;i<4;i++){
		for(j=0;j<2;j++){
			printf("%d\t", res[i][j]);
		}
		printf("\n");
	}
	return 0;
}
