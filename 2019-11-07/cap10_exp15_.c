#include <stdio.h>
int contaPares(int X[15]){
	int cont = 0, i;
	for(i=0;i<15;i++){
		if(X[i]%2==0){
			cont++;
		}
	}
	return cont;
}
int main(){
	int vet[15], i;
	for(i=0;i<15;i++){
		printf("Digite um numero inteiro (%d): ", i+1);
		scanf("%d", &vet[i]);
	}
	
	printf("Quantidade de numeros pares: %d\n", contaPares(vet));
	return 0 ;
}
