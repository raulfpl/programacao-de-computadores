// Capítulo 10. Exercícios propostos: nº15
#include <stdio.h>
int contaPar(int X[15]){
	int cont, i;
	cont = 0;
	for(i= 0; i<15; i++){
		if(X[i]%2==0){
			cont++;
		}
	}
	return cont;
}

int main(){
	int a[15];
	int i, c;
	for(i = 0; i < 15; i++){
		printf("Digite um numero (%d): ", i+1);
		scanf("%d", &a[i]);
	}
	c = contaPar(a);
	printf("O numero de pares eh: %d\n", c);
	return 0;
}
