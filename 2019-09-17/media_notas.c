#include <stdio.h>
int main(){
	float nota, soma=0, media;
	int i = 0, n = 10;
	while(i < n){
		printf("Digite a nota do aluno %d: ", i+1);
		scanf("%f",&nota);
		soma = soma + nota;
		i = i+1;
	}
	media = soma / n;
	printf("A media das notas eh: %f", media);
	
	return 0;
}
