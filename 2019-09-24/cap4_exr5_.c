#include <stdio.h>
int main(){
	int numero, altura;
	int numMaior, altMaior;
	int numMenor, altMenor;
	int i=0;
	while(i<5){
		printf("Digite o numero e a altura do aluno: ");
		scanf("%d %d", &numero, &altura);
		if(i==0){
			numMaior = numero;
			altMaior = altura;
			numMenor = numero;
			altMenor = altura;
		}
		else{
			if(altura>altMaior){
				altMaior = altura;
				numMaior = numero;
			}
			if (altura < altMenor) {
				altMenor = altura;
				numMenor = numero;
			}
		}
		i=i+1;
	}
	printf("O maior aluno eh o %d e sua altura eh %d\n",
		numMaior, altMaior);
	printf("O menor aluno eh o %d e sua altura eh %d\n",
		numMenor, altMenor);
	return 0;
}
