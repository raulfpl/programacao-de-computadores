#include <stdio.h>

int main(){
	int mat[6][4], i, j, mat2[6][4];
	int cont=0;
	for(i=0;i<6;i++){
		for(j=0;j<4;j++){
			printf("Digite um numero (%d, %d): ", i+1, j+1);
			scanf("%d", &mat[i][j]);
		}
	}
	for(i=0;i<6;i++){
		for(j=0;j<4;j++){
			if(mat[i][j] > 30) {
				cont++;
			}
			if(mat[i][j] != 30){
				mat2[i][j] = mat[i][j];
			}
			else {
				mat2[i][j] = 0;
			}
		}
	}
	printf("Quantidade de numeros maiores que 30: %d\n", cont);
	printf("Segunda matriz:\n");
	
	for(i=0;i<6;i++){
		for(j=0;j<4;j++){
			printf("%d\t", mat2[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
