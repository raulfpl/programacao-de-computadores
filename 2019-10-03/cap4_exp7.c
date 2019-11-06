#include <stdio.h>

int main(){
	int i = 0, idade, qtdMaior=0;
	while (i < 10){
		printf("Digite a idade %d: ", i+1);
		scanf("%d", &idade);
		if(idade>=18){
			qtdMaior = qtdMaior + 1;
		}
		i = i +1;
	}
	printf("A quantidade de pessoas maiores de idade eh: %d\n",
		qtdMaior);
	
	return 0;
}
