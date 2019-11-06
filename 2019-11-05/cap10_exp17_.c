#include <stdio.h>
void trocaNegativos(int A[25]){
	int i;
	for(i=0;i<25;i++){
		if(A[i]<0){
			A[i]= 0;
		}
	}
	return ;
}

int main(){
	int vet[5], i;

	for(i=0;i<25;i++){
		printf("Digite um numero inteiro (%d): ", i+1);
		scanf("%d", &vet[i]);
	}
	
	trocaNegativos(vet);
	
	printf("Resutado:\n");
	
	for(i=0;i<25;i++){
		printf("%d\t", vet[i]);
	}
	return 0;
}
