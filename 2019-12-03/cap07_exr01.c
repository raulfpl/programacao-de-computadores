#include <stdio.h>
int main(){
	char frase[255];
	int i, contPalavras=0;
	printf("Digite uma frase: ");
	gets(frase);
	for(i=0; frase[i] != '\0'; i++){
		if(frase[i] == ' '){
			contPalavras++;
		}
	}
	if(frase[0] != '\0'){
		contPalavras++;	
	}
	printf("Quantidade de palavras: %d\n", contPalavras);
	return 0;
}
