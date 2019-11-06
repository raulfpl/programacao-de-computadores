#include <stdio.h>

int main(){
	int vet[15], i, maior, menor, posMaior, posMenor;
	for(i=0;i<15;i++){
		printf("Digite um numero [%d]: ", i+1);
		scanf("%d",&vet[i]);
	}
	maior = vet[0];
	posMaior = 0;
	menor = vet[0];
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
	printf("Maior elemento: %d na posicao %d\n",maior, posMaior+1);
	printf("Menor elemento: %d na posicao %d\n",menor, posMenor+1);
	return 0;
}
