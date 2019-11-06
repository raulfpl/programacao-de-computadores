// exibe o resultado final a partir da soma de 3 notas
// aprovado, exame especial ou aprovado
#include <stdio.h>

int main(){
	float n1,n2,n3;
	float notaFinal;
	printf("Digite as 3 notas: ");
	scanf("%f %f %f", &n1, &n2, &n3);
	
	notaFinal = n1+n2+n3;
	
	if(notaFinal < 40){
		printf("Reprovado\n");
	}
	if( (notaFinal >= 40) && (notaFinal < 60) ){
		printf("Exame especial\n");
	}
	if (notaFinal >= 60){
		printf("Aprovado\n");
	}
	
	return 0;	
}
