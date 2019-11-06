#include <stdio.h>
int main(){
	int vet[5], i;
	int soma = 0;
	for(i=0;i<5;i++){
		printf("Digite o %d numero\n", i+1);
		scanf("%d", &vet[i]);
	}
	for(i=0;i<5;i++){
		soma += vet[i];
	}
	printf("Os numeros digitados foram:\n");
	for(i=0;i<4;i++){
		printf("%d + ", vet[i]);
	}
	printf("%d = %d", vet[4], soma);
	return 0;
}
