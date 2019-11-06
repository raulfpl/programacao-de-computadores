#include <stdio.h>
int main(){
	int n, i=1;
	float soma=0;
	printf("Digite um numero: ");
	scanf("%d", &n);
	while(i<=n){
		soma = soma + 1.0f/i;
		i = i + 1;
	}
	printf("soma: %f", soma);
	return 0;
	
}
