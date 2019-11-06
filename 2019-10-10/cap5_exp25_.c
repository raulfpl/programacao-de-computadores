#include <stdio.h>

int main(){
	int vet[15], i, maior;
	float vetDiv[15];
	for(i=0;i<15;i++){
		printf("Digite um numero %d: ", i+1);
		scanf("%d", &vet[i]);
	}
	maior = vet[0];
	for(i=1;i<15;i++){
		if(vet[i]>maior){
			maior = vet[i];
		}
	}
	for(i=0;i<15;i++){
		vetDiv[i] = (float)vet[i]/maior;
	}
	printf("Resultado:\n");
	for(i=0;i<15;i++){
		printf("%.3f ", vetDiv[i]);
	}
	return 0;
}
