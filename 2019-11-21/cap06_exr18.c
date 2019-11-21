#include <stdio.h>

int main(){
	int vet[18], mat[3][6], i, j;
	
	for(i=0; i<18; i++){
		printf("Digite um numero (%d): ", i+1);
		scanf("%d", &vet[i]);
	}
	
	for(i=0;i<3;i++){
		for(j=0;j<6;j++){
			mat[i][j] = vet [6*i + j];
		}
	}
	
	printf("Matriz: \n");
	for(i=0;i<3;i++){
		for(j=0;j<6;j++){
			printf("%d\t", mat[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
