#include<stdio.h>

int positivo(float x){
	if(x>0){
		return 1;
	}
	else{
		return 0;
	}
}

int main(){
	float a;
	printf("Digite um numero: ");
	scanf("%f", &a);
	if(positivo(a)==1){
		printf("Positivo\n");
	}
	else{
		printf("Nao eh positivo\n");
	}
	return 0;
}
