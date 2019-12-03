#include <stdio.h>
int main(){
	char string[200];
	int i, quantPalavras=0;
	printf("Digite uma frase: ");
	gets(string);
	for(i=0;string[i] != '\0'; i++){
		if(string[i] == ' '){
			quantPalavras++;
		}
	}
	if(string[0] != '\0'){
		quantPalavras++;	
	}
	printf("Quantidade de palavras: %d\n", quantPalavras);
	return 0;
}
