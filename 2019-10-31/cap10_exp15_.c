#include <stdio.h>
int contaPar(int X[15]){
		int cont=0, i;
		for(i=0;i<15;i++){
			if(X[i]%2 == 0){
				cont++;
			}
		}
		return cont;
}
int main(){
	int vet[15], i, r;
	for(i=0;i<15;i++){
		printf("Digite um numero (%d): ", i+1);
		scanf("%d", &vet[i]);
	}
	r = contaPar(vet);
	printf("A quantidade de pares eh %d\n", r);
	return 0;
}
