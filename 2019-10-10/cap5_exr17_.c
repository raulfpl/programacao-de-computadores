#include <stdio.h>

int main(){
	int vet[6], i, somaPares = 0, qtdImpar = 0;
	for(i=0;i<6;i++){
		printf("Digite um numero %d: ", i+1);
		scanf("%d", &vet[i]);
	}
	
	printf("\nRelatorio\n\n");
	printf("Os numeros pares sao:\n");
	for(i = 0; i < 6; i++){
		if(vet[i]%2 == 0){
			printf("numero %d na posicao %d\n", vet[i], i+1);
			somaPares += vet[i];
		}
	}
	printf("\nSoma dos pares = %d\n", somaPares);
	
	printf("\nOs numeros impares sao:\n");
	for(i=0;i<6;i++){
		if(vet[i]%2 != 0){
			printf("numero %d na posicao %d\n", vet[i], i+1);
			qtdImpar++;
		}
	}
	printf("Quantidade dos impars = %d\n", qtdImpar);
	return 0;
}
