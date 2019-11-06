//lê 10 números e exibir em ordem reversa
#include <stdio.h>

int main(){
	int vet[10];
	int i = 0;
	while(i < 10){
		printf("digite um numero %d: ", i);
		scanf("%d", &vet[i]);
		i = i+1;
	}
	i = 9;
	printf("os numeros em ordem reversa:\n");
	while(i>=0){
		printf("%d ",vet[i]);
		i = i - 1;
	}
	
	return 0;
}
