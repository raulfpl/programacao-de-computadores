#include <stdio.h>
int positivo(float n){
	if(n < 0){
		return 0;
	}
	else {
		return 1;
	}
}

int main(){
	float x;
	printf("Digite um numero: ");
	scanf("%f", &x);
	if(positivo(x) == 1){
		printf("numero positivo\n");
	}
	else {
		printf("numero negativo\n");
	}
	return 0;
}
