#include <stdio.h>

void tabela(int n){
	
	int i,j;
	for(i=1; i<=n; i++){
		for(j=1; j<=i; j++){
			printf("%d\t", i*j);
		}
		printf("\n");
	}
	return;
}

int main(){
	int a;
	printf("digite um numero inteiro: ");
	scanf("%d", &a);
	tabela(a+2);
	return 0;
}
