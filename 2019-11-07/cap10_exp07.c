#include <stdio.h>
float media (){
	float n=1;
	float soma = 0.0;
	int cont = 0;
	while(n>=0){
		printf("Digite um numero positivo (-1 para terminar): ");
		scanf("%f", &n);
		if(n>=0){
			soma += n;
			cont++;
		}
	}
	return soma / cont;
}

int main(){
	float m;
	m = media();
	printf("Media dos valores digitados: %f\n", m);
	return 0;
}
