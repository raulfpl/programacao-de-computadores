// Fa�a um programa que l� uma frase e em seguida l� uma palavra
// e diz se a palavra aparece na frase ou n�o.

// strstr(str1, str2) retorna 0 se a string str2 n�o estiver contida
// na string str1

#include <stdio.h>
#include <string.h>
int main(){
	char frase[400], palavra[400];
	
	printf("Digite uma frase: ");
	gets(frase);
	
	printf("Digite uma palavra: ");
	gets(palavra);
	
	if(strstr(frase, palavra)==0){
		printf("A palavra nao existe na frase\n");
	}
	else {
		printf("A palavra existe na frase\n");
	}
	
	return 0;
}
