#include<stdio.h>
void perfeitos(int v[3]){
	int n=1, cont=0, soma, i;
	while(cont<3){
		soma = 0;
		for(i = 1; i<n; i++){
			if(n%i==0){
				soma += i;
			}
		}
		if(soma == n){
			v[cont] = n;
			cont++;
		}
		n++;
	}
	return ;
}

int main(){
	int vet[3], i;
	
	perfeitos(vet);
	
	for(i =0; i< 3; i++){
		printf("%d ", vet[i]);
	}
	return 0;
}
