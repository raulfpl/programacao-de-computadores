#include <stdio.h>

int main(){
	float nota;
	printf("Digite a nota: ");
	scanf("%f", &nota);
	if(nota < 40){
		printf("Reprovado.\n");
	}
	else if( nota < 60){
		printf("Exame especial.\n");
	}
	else {
		printf("Aprovado.\n");
	}
	return 0;
}
