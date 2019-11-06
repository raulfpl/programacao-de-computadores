#include <stdio.h>

int main(){
	int i=0, idade;
	int cont1=0,cont2=0,cont3=0,cont4=0,cont5=0;
	float perc1,perc5;
	while(i<15){
		printf("Digite a idade %d: ",i+1);
		scanf("%d",&idade);
		if(idade <=15 ){
			cont1= cont1+1;
		}
		else if(idade <=30){
			cont2 = cont2+1;
		}
		else if(idade <=45){
			cont3 = cont3+1;
		}
		else if(idade <=60){
			cont4 = cont4+1;
		}
		else {
			cont5 = cont5+1;
		}
		
		i= i+1;
	}
	printf("a quantidade de pessoas na 1 faixa eh: %d\n", cont1);
	printf("a quantidade de pessoas na 2 faixa eh: %d\n", cont2);
	printf("a quantidade de pessoas na 3 faixa eh: %d\n", cont3);
	printf("a quantidade de pessoas na 4 faixa eh: %d\n", cont4);
	printf("a quantidade de pessoas na 5 faixa eh: %d\n", cont5);
	
	perc1 = (cont1 / 15.0f) *100;
	perc5 = (cont5 / 15.0f) *100;
	
	printf("%.2f%% das pessoas estao na faixa 1\n",perc1);
	printf("%.2f%% das pessoas estao na faixa 5\n",perc5);
	
	return 0;
}
