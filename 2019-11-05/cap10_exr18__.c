#include <stdio.h>
int primo(int n){
	int contDiv=0;
	int i;
	for(i=1;i<=n;i++){
		if(n%i==0){
			contDiv++;
		}
	}
	if(contDiv == 2){
		return 1;
	}
	else{
		return 0;
	}
}
void geraPrimos(){
	int contPrimos = 0;
	int i;
	for(i=101;contPrimos<10;i++){
		if(primo(i)==1){
			printf("%d ", i);
			contPrimos++;
		}
	}
	return;
}
int main(){
	geraPrimos();
	return 0;
}
