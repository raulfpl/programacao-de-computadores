// l� 10 n�meros inteiros e em seguida exibe os n�meros em ordem reversa
#include <stdio.h>

int main(){
	int numeros[10];
	int i=0;
	
	while(i<10){
		printf("Digite um numero %d : ",i);
		scanf("%d",&numeros[i]);
		i= i+1;
	}
	printf("Os numeros na ordem reversa:\n");
	i=9;
	while(i>=0){
		printf("%d ",numeros[i]);
		i = i-1;
	}
	return 0;
}


