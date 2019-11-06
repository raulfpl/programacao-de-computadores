#include <stdio.h>
void trocaZero(int A[25]){
	int i;
	for(i=0;i<25;i++){
		if(A[i]<0){
			A[i] = 0;
		}
	}
	return ;
}
int main(){
	int vet[25], i;
	
	for(i=0;i<25;i++){
		printf("Digite um numero real (%d): ", i+1);
		scanf("%d", &vet[i]);
	}
	trocaZero(vet);
	for(i=0;i<25;i++){
		printf("%d ", vet[i]);
	}
	return 0;	
}
