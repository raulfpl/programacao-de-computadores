#include <stdio.h>

int main(){
	int x;
	int y;
	int resultado;
	printf("digite um numero ");
	scanf("%d", &x);
	printf("digite outro numero: ");
	scanf("%d",&y);
	resultado = x + y;
	printf("a soma eh: %d",resultado);
	return 0;
}
