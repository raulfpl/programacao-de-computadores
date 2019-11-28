#include <stdio.h>
int main(){
	int mat[5][7], i, j, menorDaLinha, colDoMenor;
	int maiorDaColuna, ii, linhaDoMaior;
	int pontoDeSela, colSela = -1, linhaSela;
	
	// carrega a matriz
	for(i=0;i<5;i++){
		for(j=0;j<7;j++){
			printf("Digite um numero %d %d: ", i+1, j+1);
			scanf("%d", &mat[i][j]);
		}
	}
	
	// imprime a matriz
	printf("matriz:\n");
	for(i=0;i<5;i++){
		for(j=0;j<7;j++){
			printf("%d\t", mat[i][j]);
		}
		printf("\n");
	}

	for(i=0;i<5;i++){
		menorDaLinha = mat[i][0];
		colDoMenor=0;
		for(j=1;j<7;j++){
			if(mat[i][j] < menorDaLinha){
				menorDaLinha = mat[i][j];
				colDoMenor = j;
			}
		}
		maiorDaColuna = mat[0][colDoMenor];
		linhaDoMaior = 0;
		for(ii=1;ii<5;ii++){
			if(mat[ii][colDoMenor] > maiorDaColuna){
				maiorDaColuna = mat[ii][colDoMenor];
				linhaDoMaior = ii;
			}
		}
		if(maiorDaColuna == menorDaLinha){
			pontoDeSela = maiorDaColuna;
			colSela = colDoMenor;
			linhaSela = linhaDoMaior;
		}
	}
	
	if(colSela != -1){
		printf("Ponto de sela: %d\t col:%d linha: %d\n",
			pontoDeSela, colSela+1, linhaSela+1);
	}
	else {
		printf("Nao tem ponto de sela\n");
	}
	
	return 0;
}
