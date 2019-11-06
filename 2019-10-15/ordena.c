// ordena um vetor em ordem crescente
#include <stdio.h>

int main(){
	int vet[6], i, j, aux;
	
	for(i=0;i<6;i++){
		printf("Digite um numero (%d): ",i+1);
		scanf("%d",&vet[i]);
	}
	
	for(i=0;i<5;i++){
		for(j=i+1;j<6;j++){
			if(vet[j]<vet[i]){
				aux = vet[i];
				vet[i] = vet[j];
				vet[j] = aux;
			}
		}
	}
	
	printf("Vetor ordenado:\n");
	for(i=0;i<6;i++){
		printf("%d ", vet[i]);
	}
	return 0;
}
