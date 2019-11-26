#include <stdio.h>

int main(){
	int mat[3][4], i, j, vet[3];
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			printf("Digite um numero (%d, %d): ", i+1, j+1);
			scanf("%d", &mat[i][j]);	
		}
	}
	for(i=0;i<3;i++){
		vet[i] = 0;
		for(j=0;j<4;j++){
			vet[i] += mat[i][j];
		}
	}
	
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			mat[i][j] *= vet[i];
		}
	}
	
	printf("Matriz:\n");
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			printf("%d\t", mat[i][j]);
		}
		printf("\n");
	}
	return 0;
}
