#include <stdio.h>

int main(){
	float nota, soma=0, media;
	int i = 1, n = 10;
	while(i <= n){
		printf("digite a nota do aluno %d: ", i);
		scanf("%f",&nota);
		soma = soma + nota;
		
		i = i+1;
	}
	media = soma / n;
	printf("A media eh: %f\n", media);	
	
	return 0;
}
