#include <stdio.h>

int main(){
	int vet[8], pos[8], neg[8];
	int i, p=0, n=0;
	
	for(i=0;i<8;i++){
		printf("Digite um numero (%d): ", i+1);
		scanf("%d", &vet[i]);
	}
	for(i=0;i<8;i++){
		if(vet[i]>=0){
			pos[p] = vet[i];
			p++;
		}
		else{
			neg[n] = vet[i];
			n++;
		}
	}
	
	printf("Numeros negativos:\n");
	for(i=0;i<n;i++){
		printf("%d ", neg[i]);
	}
	printf("\nNumeros positivos:\n");
	for(i=0;i<p;i++){
		printf("%d ", pos[i]);
	}
	return 0;
	
}
