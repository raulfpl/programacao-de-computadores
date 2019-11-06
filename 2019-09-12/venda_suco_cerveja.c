// suco / 4 reais
// cerveja / 6,50 reais
#include <stdio.h>

int main(){
	int opcao, idade;
	float valorPago;
	printf("Escolha uma opcao:\n");
	printf("1 - suco: R$ 4.00\n");
	printf("2 - cerveja: R$ 6.50\n");
	scanf("%d",&opcao);
	if(opcao == 1){
		printf("Digite o valor pago: ");
		scanf("%f",&valorPago);
		if(valorPago >= 4.0f){
			printf("Compra efetuada.\n");
			if(valorPago > 4.0f){
				printf("Troco: %.2f\n",valorPago - 4.0f);
			}
		}
		else{
			printf("Valor insuficiente.\n");
		}
	}
	else if(opcao == 2){
		printf("Digite a idade do comprador: ");
		scanf("%d",&idade);
		if(idade < 18){
			printf("Venda proibida.");
		}
		else{
				
			printf("Digite o valor pago: ");
			scanf("%f",&valorPago);
			if(valorPago >= 6.5f){
				printf("Compra efetuada.\n");
				if(valorPago > 6.5f){
					printf("Troco: %.2f\n",valorPago - 6.5f);
				}
			}
			else{
				printf("Valor insuficiente.\n");
			}
		}
	}
	return 0;
}

