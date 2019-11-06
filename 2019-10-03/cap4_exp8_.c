#include <stdio.h>

int main(){
	int i = 0, idade;
	int qtd1=0, qtd2 = 0, qtd3 = 0, qtd4 = 0, qtd5 = 0;
	float perc1, perc5;
	while(i<15){
		printf("Digite a idade %d: ", i+1);
		scanf("%d", &idade);
		if(idade <= 15){
			qtd1 = qtd1 + 1;
		}
		else if(idade <= 30){
			qtd2 = qtd2 + 1;
		}
		else if(idade <= 45){
			qtd3 = qtd3 + 1;
		}
		else if(idade <= 60){
			qtd4 = qtd4 + 1;
		}
		else {
			qtd5 = qtd5 + 1;
		}
		
		i=i+1;
	}
	printf("A quantidade de pessoas na faixa 1 eh: %d\n", qtd1);
	printf("A quantidade de pessoas na faixa 2 eh: %d\n", qtd2);
	printf("A quantidade de pessoas na faixa 3 eh: %d\n", qtd3);
	printf("A quantidade de pessoas na faixa 4 eh: %d\n", qtd4);
	printf("A quantidade de pessoas na faixa 5 eh: %d\n", qtd5);
	
	perc1 = ((float)qtd1 / 15) * 100;
	perc5 = (qtd5 / 15.0f) * 100;
	
	printf("%f%% das pessoas estao na faixa 1\n", perc1);
	printf("%f%% das pessoas estao na faixa 5\n", perc5);
	return 0;
}
