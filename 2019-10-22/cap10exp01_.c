#include <stdio.h>
int soma(int N){
	int i, s = 0;
	for(i=1;i<=N;i++){
		s += i;
	}
	return s;
}

int main(){
	int a;
	printf("Digite um numero inteiro: ");
	scanf("%d", &a);
	printf("A soma dos numeros entre 1 e %d = %d\n", a, soma(a));
	return 0;
}
