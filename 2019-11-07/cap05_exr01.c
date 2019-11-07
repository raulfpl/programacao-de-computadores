#include <stdio.h>

int main(){
	int vet[9], i, j, contDiv;
	for(i=0;i<9;i++){
		printf("Digite um numero inteiro (%d): ", i+1);
		scanf("%d", &vet[i]);
	}
	for(i=0;i<9;i++){
		contDiv=0;
		for(j=1;j<=vet[i];j++){
			if(vet[i]%j==0){
				contDiv++;
			}
		}
		if(contDiv == 2){
			printf("o numero %d eh primo. pos: %d\n", vet[i],i+1);
		}
	}
	return 0;
}
