#include <stdio.h>
void numPerfeitos(int perf[3]){
	int cont = 0;
	int n = 1, i, soma;
	while(cont<3){
		soma = 0;
		for(i = 1; i<n; i++){
			if(n%i == 0){
				soma += i;
			}
		}
		if(soma == n){
			perf[cont] = n;
			cont++;
		}
		n++;
	}
	return;
}

int main(){
	int v[3], i;
	numPerfeitos(v);
	for(i = 0;i < 3; i++){
		printf("%d ", v[i]);
	}
	return 0;
}
