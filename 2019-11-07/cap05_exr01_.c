#include <stdio.h>
int primo(int n){
	int nDeDivisores = 0, i;
	for(i = 1; i<=n; i++){
		if(n%i==0){
			nDeDivisores++;
		}
	}
	if(nDeDivisores == 2){
		return 1;
	}
	else{
		return 0;
	}
}
int main(){
	int vet[9], i;

	for(i=0;i<9;i++){
		printf("Digite um numero inteiro (%d): ", i+1);
		scanf("%d", &vet[i]);
	}
	for(i=0;i<9;i++){
		if(primo(vet[i])==1){
			printf("%d eh primo. pos: %d\n", vet[i], i+1);
		}
	}
	return 0;
}
