#include <stdio.h>

int main(){
	int vet[10];
	int i, cont = 0;
	for(i=0;i<10;i++){
		printf("digite um numero [%d]: ", i);
		scanf("%d",&vet[i]);
	}
	for(i=0;i<10;i++){
		if(vet[i]>50){
			printf("o numero %d na posicao %d eh maior que 50\n",vet[i],i);
			cont++;
		}
	}
	if(cont == 0){
		printf("Nao existe numero maior que 50\n");
	}
	return 0;
}
