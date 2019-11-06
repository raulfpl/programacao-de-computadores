#include <stdio.h>
int main(){
	int vet[15], i;
	int maior, posMaior;
	int menor, posMenor;
	for(i=0;i<15;i++){
		printf("Digite um numero real (%d): ", i+1);
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
	printf("Maior: %d Pos: %d\n", maior, posMaior+1);
	printf("Menor: %d Pos: %d\n", menor, posMenor+1);
	return 0;
}
