/* 1 - suco: R$ 4,00
   2 - cerveja: R$ 6,50 */

#include <stdio.h>

int main() {
	int opcao, idade;
	float valorPago, preco;
	printf("Escolha uma opcao: \n");
	printf("1 - suco: R$ 4.00\n");
	printf("2 - cerveja: R$ 6.50\n");
	scanf("%d", &opcao);
	
	if(opcao == 1) {
		preco = 4.0f;
	}
	else if(opcao == 2){
		printf("Digite a idade do cliente: ");
		scanf("%d",&idade);
		if(idade < 18){
			printf("Venda proibida.\n");
			return 1;
		}
		else{
			preco = 6.5f;
		}
	}
	printf("Digite o valor pago: ");
	scanf("%f", &valorPago);
	if(valorPago >= preco){
		printf("Compra efetuada.\n");
		if(valorPago > preco){
			printf("O troco eh %.2f\n", valorPago - preco);
		}
	}
	else{
		printf("Valor insuficiente.\n");
		return 1;
	}
	return 0;
}

