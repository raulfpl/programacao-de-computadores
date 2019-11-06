//cap 5, exercicio resolvido nº 4
#include <stdio.h>

int main(){
	int num[8], pos[8], neg[8], i, p=0,n=0;
	
	for(i=0;i<8;i++){
		printf("Digite um numero (%d): ", i+1);
		scanf("%d", &num[i]);
	}
	
	for(i=0;i<8;i++){
		if(num[i]>=0){
			pos[p] = num[i];
			p++;
		}
		else{
			neg[n] = num[i];
			n++;
		}
	}
	printf("Numeros positivos:\n");
	for(i=0;i<p;i++){
		printf("%d ", pos[i]);
	}
	printf("\nNumeros negativos:\n");
	for(i=0;i<n;i++){
		printf("%d ", neg[i]);
	}
	return 0;
	
}
