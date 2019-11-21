#include <stdio.h>
int main(){
	int mat[5][5], i, j, somaL4=0, somaC2=0, somaDiagPrinc=0, somaDiagSec=0;
	int somaMat = 0;
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			printf("Digite um numero (%d, %d): ", i+1, j+1);
			scanf("%d", &mat[i][j]);
		}
	}
	
	for(i=0;i<5;i++){
		somaL4 += mat[4-1][i];
		somaC2 += mat[i][2-1];
		somaDiagPrinc += mat[i][i];
		somaDiagSec += mat[i][4-i];
		for(j=0;j<5;j++){
			somaMat += mat[i][j];
		}
	}
	printf("Soma da linha 4: %d\n", somaL4);
	printf("Soma da coluna 2: %d\n", somaC2);
	printf("Soma da diag. principal: %d\n", somaDiagPrinc);
	printf("Soma da diag. secundaria: %d\n", somaDiagSec);
	printf("Soma da matriz: %d\n", somaMat);
	return 0;
}
