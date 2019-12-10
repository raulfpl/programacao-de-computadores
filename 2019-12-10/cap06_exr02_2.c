#include <stdio.h>
int main(){
	float notas[4][3];
	int i,j, pos_menor, menor_prova[3];
	for(i=0;i<3;i++){
		menor_prova[i] = 0;
	}
	for(i=0;i<4;i++){
		printf("Digite as notas do aluno %d:\n",i+1);
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
		printf("A menor nota do aluno %d foi da prova %d\n", i+1, pos_menor+1);
		menor_prova[pos_menor]++;
	}
	
	for(i=0;i<3;i++){
		printf("Quantidade de alunos com menor nota na prova %d: %d\n",
						i+1, menor_prova[i]);
	}

	return 0;
}
