#include <stdio.h>

int soma(int N){
	int i;
	int s = 0;
	for(i=1; i<=N ; i++){
		s += i;
	}
	return s;
}

int main(){
	int a;
	printf("Digite um numero inteiro: ");
	scanf("%d",&a);
	printf("A soma dos numeros entre 1 e %d = %d", a, soma(a));
	return 0;
}
