#include <stdio.h>

void geraPrimos(){
	int contPrimos = 0;
	int i, j;
	int contDiv;
	for(i=101;contPrimos<10;i++){
		contDiv = 0;
		for(j=1;j<=i;j++){
			if(i%j==0){
				contDiv++;
			}
		}
		if(contDiv==2){
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
