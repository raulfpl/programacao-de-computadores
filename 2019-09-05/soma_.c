#include <stdio.h>
int main(){
	int a;
	int b;
	int resultado;
	printf("digite um numero: ");
	scanf("%d", &a);
	printf("digite o segundo numero: ");
	scanf("%d", &b);
	resultado = a + b;
	printf("a soma eh: %d", resultado);	
	return 0;
}
