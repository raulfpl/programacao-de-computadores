#include <stdio.h>

int main(){
	int i=0;
	int numero, altura;
	int numMaior, altMaior;
	int numMenor, altMenor;
	
	printf("Digite o numero do aluno: ");
	scanf("%d", &numero);
	printf("Digite a altura do aluno em centimetros: ");
	scanf("%d", &altura);
	numMaior = numero;
	numMenor = numero;
	altMaior = altura;
	altMenor = altura;
	while (i<4){
		printf("Digite o numero do aluno: ");
		scanf("%d", &numero);
		printf("Digite a altura do aluno em centimetros: ");
		scanf("%d", &altura);
		if(altura > altMaior){
			altMaior = altura;
			numMaior = numero;
		}
		if(altura < altMenor){
			altMenor = altura;
			numMenor = numero;
		}
		i = i+1;
	}
	printf("O maior aluno eh o %d e sua altura eh: %dcm\n",
		numMaior, altMaior);
	printf("O menor aluno eh o %d e sua altura eh: %dcm\n",
		numMenor, altMenor);
	return 0;
}
