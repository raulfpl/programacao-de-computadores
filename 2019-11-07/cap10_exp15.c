#include <stdio.h>

int pares(int X[15]){
	int cont=0, i;
	for(i=0;i<15;i++){
		if(X[i]%2==0){
			cont++;
		}
	}
	return cont;
}

int main(){
	int vet[15], i;
	int r;
	for(i=0;i<15;i++){
		printf("Digite um numero inteiro (%d): ", i+1);
		scanf("%d", &vet[i]);
	}
	r = pares(vet);
	printf("quantidade de numeros pares: %d\n", r);
	return 0;
}
