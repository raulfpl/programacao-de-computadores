// cap 4, exercicios propostos, n2
#include <stdio.h>

int main(){
	int n, i=1;
	float S = 0;
	printf("Digite um numero: ");
	scanf("%d", &n);
	while(i <= n){
		S = S + 1.0f /i;
		
		i = i + 1;
	}
	printf("A soma eh: %f\n", S);
	return 0;
	
}
