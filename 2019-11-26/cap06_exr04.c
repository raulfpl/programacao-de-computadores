#include <stdio.h>
int main(){
	int mat[4][3], i, j, vet[4], soma;	
	for(i=0;i<4;i++){
		for(j=0;j<3;j++){
			printf("Digite um numero (%d, %d): ", i+1, j+1);
			scanf("%d", &mat[i][j]);
		}
	}
	for(i=0;i<4;i++){
		soma = 0;
		for(j=0;j<3;j++){
			soma+= mat[i][j];
		}
		vet[i] = soma;
	}
	
	printf("Soma das linhas:\n");
	for(i = 0; i < 4; i++){
		printf("%d ", vet[i]);
	}
	
	for(i=0;i<4;i++){
		for(j=0;j<3;j++){
			mat[i][j] *= vet[i];
		}
	}
	
	printf("\nMatriz resultante:\n");
	for(i=0;i<4;i++){
		for(j=0;j<3;j++){
			printf("%d\t", mat[i][j]);
		}
		printf("\n");
	}
	
	return 0;	
}
