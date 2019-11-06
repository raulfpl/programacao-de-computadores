#include <stdio.h>
float soma(float X[20]){
	float s = 0;
	int i;
	for(i=0;i<20;i++){
		s += X[i];
	}
	return s;
}

int main(){
	float vet[20], r;
	int i;
	for(i=0;i<20;i++){
		printf("Digite um numero real (%d): ", i+1);
		scanf("%f", &vet[i]);
	}
	r = soma(vet);
	printf("Soma: %f\n", r);
	return 0;
}
