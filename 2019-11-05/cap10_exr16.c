#include <stdio.h>
float somaVet(float X[20]){
	float s = 0.0;
	int i;
	for(i=0;i<20;i++){
		s += X[i];
	}
	return s;
}

int main(){
	int i;
	float vet[20], resultado;
	for(i=0;i<20;i++){
		printf("Digite um numero real (%d): ", i+1);
		scanf("%f", &vet[i]);
	}
	resultado = somaVet(vet);
	printf("Soma: %f\n", resultado);
	return 0;
}
