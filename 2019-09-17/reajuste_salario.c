#include <stdio.h>

int main(){
	float salario, novoSalario;
	printf("Digite o salario: ");
	scanf("%f",&salario);
	if(salario < 500){
		novoSalario = salario * 1.3;
		printf("Salario reajustado: %.2f\n", novoSalario);
	}
	else{
		printf("Nao tem direito ao aumento\n");
	}
	
	return 0;
}
