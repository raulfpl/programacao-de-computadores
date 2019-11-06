#include <stdio.h>

int main(){
	int i=1, idade;
	int cont=0;
	
	while(i <= 10){
		printf("Digite a idade da pessoa %d: ", i);
		scanf("%d",&idade);
		if(idade >= 18){
			cont = cont + 1;
			
		}
		
		i = i+1;
	}
	
	printf("A quantidade de pessoas com idade maior ou igual a 18 eh: %d", cont);
	return 0;	
	
}
