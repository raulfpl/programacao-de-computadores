// ordena um vetor em ordem decrescente
#include <stdio.h>

int main(){
	int vet[10], i, j, aux;
	
	for(i=0;i<10;i++){
		printf("Digite um numero (%d): ",i+1);
		scanf("%d",&vet[i]);
	}
	
	for(i=0;i<9;i++){
		for(j=i+1;j<10;j++){
			if(vet[j]>vet[i]){
				aux = vet[i];
				vet[i] = vet[j];
				vet[j] = aux;
			}
		}
	}
	
	printf("Vetor ordenado:\n");
	for(i=0;i<10;i++){
		printf("%d ", vet[i]);
	}
	return 0;
}
