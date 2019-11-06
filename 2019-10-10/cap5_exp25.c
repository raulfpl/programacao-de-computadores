#include <stdio.h>
int main(){
	int vet[15], i, maior;
	float vet2[15];
	for(i=0;i<15;i++){
		printf("digite um numero (%d): ",i);
		scanf("%d", &vet[i]);
	
		maior = vet[0];
		for(i=1;i<15;i++){
			if(vet[i]>maior){
				maior = vet[i];
			}
		}
		for(i=0;i<15;i++){
			vet2[i] = (float)vet[i]/maior;
		}
		
		printf("Resultado: ");
		for(i=0;i<15;i++){
			printf("%.3f ", vet2[i]);
		}
	}
	
}
