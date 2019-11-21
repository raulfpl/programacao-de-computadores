#include <stdio.h>
int main(){
	int mat[5][5], i, j;
	int somaL4 = 0, somaC2 = 0, somaDiagPrinc = 0, somaDiagSec = 0, somaMat = 0;
	for(i=0; i<5; i++){
		for(j=0; j<5; j++){
			printf("Digite um numero (%d, %d): ", i+1, j+1);
			scanf("%d", &mat[i][j]);
		}
	}
	
	for(i=0; i<5; i++){
		for(j=0; j<5; j++){
			if(i==4-1){
				somaL4 += mat[i][j];
			}
			if(j==2-1){
				somaC2 += mat[i][j];
			}
			if(i==j){
				somaDiagPrinc += mat[i][j];
			}
			if(i+j == 4){
				somaDiagSec += mat[i][j];
			}
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
