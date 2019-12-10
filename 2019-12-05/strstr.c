// Faça um programa que lê uma frase e em seguida lê uma palavra
// e diz se a palavra aparece na frase ou não.

// strstr(str1, str2) retorna 0 se a string str2 não estiver contida
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
