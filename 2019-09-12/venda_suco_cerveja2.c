// suco / 4 reais
// cerveja / 6,50 reais
#include <stdio.h>

int main(){
	int opcao, idade;
	float valorPago, preco;
	printf("Escolha uma opcao:\n");
	printf("1 - suco: R$ 4.00\n");
	printf("2 - cerveja: R$ 6.50\n");
	scanf("%d",&opcao);
	
	if(opcao == 1){
		preco = 4.0f;
	}
	else if(opcao == 2){
		printf("Digite a idade do comprador: ");
		scanf("%d",&idade);
		if(idade < 18){
			printf("Venda proibida.");
			return 1;
		}
		preco = 6.5f;
	}
	
	printf("Digite o valor pago: ");
	scanf("%f",&valorPago);
	if(valorPago >= preco){
		printf("Compra efetuada.\n");
		if(valorPago > preco){
			printf("Troco: %.2f\n",valorPago - preco);
		}
	}
	else{
		printf("Valor insuficiente.\n");
	}

	return 0;
}

