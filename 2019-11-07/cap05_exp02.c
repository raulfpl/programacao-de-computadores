#include <stdio.h>
int main(){
	int vet[7], i;
	
	for(i=0;i<7;i++){
		printf("Digite um numero inteiro (%d): ", i+1);
		scanf("%d", &vet[i]);
	}
	for(i=0;i<7;i++){
		if(vet[i]%2==0 && vet[i]%3==0){
			printf("%d eh multiplo de 2 e 3\n", vet[i]);
		}
		else if(vet[i]%2==0){
			printf("%d eh multiplo de 2\n", vet[i]);
		}
		else if(vet[i]%3==0){
			printf("%d eh multiplo de 3\n", vet[i]);
		}
	}
	return 0;
}
