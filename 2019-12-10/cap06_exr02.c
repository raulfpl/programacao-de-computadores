#include <stdio.h>

int main(){
	float notas[4][3];
	int i, j, pos_menor, quant_menor[3];
	for(i=0;i<3;i++){
		quant_menor[i] = 0;
	}
	for(i=0;i<4;i++){
		printf("Digite as nota do aluno %d:\n", i+1);
		for(j=0;j<3;j++){
			printf("Prova %d: ", j+1);
			scanf("%f", &notas[i][j]);
		}
	}
	
	for(i=0;i<4;i++){
		pos_menor = 0;
		for(j=1;j<3;j++){
			if(notas[i][j] < notas[i][pos_menor]){
				pos_menor = j;
			}
		}
		quant_menor[pos_menor]++;
		printf("Aluno %d. Menor nota prova %d\n", i+1, pos_menor+1);
	}
	
	for(i=0;i<3;i++){
		printf("Alunos com menor nota na prova %d: %d\n", i+1, quant_menor[i]);
	}
	
	return 0;
}
