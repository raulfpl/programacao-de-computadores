#include <stdio.h>

int main(){
	int mat[4][4], i, j;
	int simetrica = 1;
	
	// carrega a matriz
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			printf("Digite um numero %d %d: ", i+1, j+1);
			scanf("%d", &mat[i][j]);
		}
	}
	
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			if(mat[i][j] != mat[j][i]){
				simetrica = 0;
			}
		}
	}
	if(simetrica != 0){
		printf("\nMatriz simetrica\n");
	}
	else {
		printf("\nMatriz nao simetrica\n");
	}
	
	return 0;
}
