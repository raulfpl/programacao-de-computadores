#include <stdio.h>

int main(){
	int i, maior, menor, posMaior, posMenor;
	int vet[15];
	
	for(i=0;i<15;i++){
		printf("Digite um numero inteiro (%d): ", i+1);
		scanf("%d", &vet[i]);
	}
	maior = vet[0];
	menor = vet[0];
	posMaior = 0;
	posMenor = 0;
	for(i=1;i<15;i++){
		if(vet[i]>maior){
			maior = vet[i];
			posMaior = i;
		}
		if(vet[i]<menor){
			menor = vet[i];
			posMenor = i;
		}
	}
	
	printf("Maior elemento: %d\t Pos:%d\n", maior, posMaior+1);
	printf("Menor elemento: %d\t Pos:%d\n", menor, posMenor+1);
	
	return 0;
}
