#include <stdio.h>

int minha_strlen(char str[]){
	int i;
	for(i=0;str[i] != '\0'; i++){
	}
	
	return i;
}

void minha_strcat(char str1[], char str2[]){
	int tamanho, i;
	tamanho = minha_strlen(str1);
	for(i=0; str2[i] != '\0'; i++){
		str1[tamanho + i] = str2[i];
	}
}

int main(){
	char frase1[200], frase2[400];
	int tamanho;
	printf("Digite uma frase: ");
	gets(frase1);
	printf("Digite outra frase: ");
	gets(frase2);
	
	minha_strcat(frase1, frase2);
	
	printf("%s", frase1);
}
