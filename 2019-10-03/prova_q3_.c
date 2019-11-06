#include <stdio.h>

int main(){
	int a, b, i, somaPar = 0, mulImpar = 1;
	printf("Digite dois numeros: ");
	scanf("%d %d", &a, &b);
	i = a;
	while(i<=b){
		if(i%2==0){
			somaPar = somaPar + i;
		}
		else {
			mulImpar = mulImpar * i;
		}
		i = i+1;
	}
	
	printf("A soma dos pares entre %d e %d eh %d\n",a,b, somaPar);
	printf("A multiplicao dos impares %d e %d eh %d\n", a, b, mulImpar);
	
	return 0;
}
