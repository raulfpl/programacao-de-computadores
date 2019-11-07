#include <stdio.h>
float media(){
	int n=1, cont =0, soma = 0;
	while(n>=0){
		printf("digite um numero (-1 para parar): ");
		scanf("%d", &n);
		if(n>=0){
			soma += n;
			cont++;
		}
	}
	return (float)soma / cont;
}

int main(){
	printf("A media dos valores eh: %f\n",media());
	return 0;
}
