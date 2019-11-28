#include <stdio.h>

int main(){
	int mat[3][4], i, j, menorDaLinha, colDoMenor;
	int maiorDaCol, linhaDoMaior, ii, pontoDeSela, colSela, linSela;
	int existeSela = 0;
	// carrega a matriz
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			printf("Digite um numero %d %d: ", i+1, j+1);
			scanf("%d", &mat[i][j]);
		}
	}
	
	printf("Mat:\n");
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			printf("%d\t", mat[i][j]);
		}
		printf("\n");
	}
	
	for(i=0;i<3;i++){
		menorDaLinha = mat[i][0];
		colDoMenor = 0;
		for(j=1;j<4;j++){
			if(mat[i][j] < menorDaLinha){
				menorDaLinha = mat[i][j];
				colDoMenor = j;
			}
		}
		maiorDaCol = mat[0][colDoMenor];
		linhaDoMaior = 0;
		for(ii=0;ii<3;ii++){
			if(mat[ii][colDoMenor] > maiorDaCol){
				maiorDaCol = mat[ii][colDoMenor];
				linhaDoMaior = ii;
			}
		}
		
		if(maiorDaCol == menorDaLinha){
			pontoDeSela = maiorDaCol;
			linSela = linhaDoMaior;
			colSela = colDoMenor;
			existeSela = 1;
		}
		
	}
	if( existeSela != 0 ){
		printf("Ponto de sela: %d Pos: %d %d\n",
			pontoDeSela, linSela, colSela);
	}
	else{
		printf("Nao tem ponto de sela\n");
	}
	
	return 0;
}
