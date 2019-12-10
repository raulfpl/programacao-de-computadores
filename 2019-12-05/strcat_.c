#include <stdio.h>
#include <string.h>

int main(){
	char frase1[400], frase2[200];
	int tamanho;
	
	printf("Digite uma frase: ");
	gets(frase1);
	printf("Digite a segunda frase: ");
	gets(frase2);
	
	tamanho = strlen(frase1);
	frase1[tamanho] = ' ';
	frase1[tamanho+1] = '\0';
	
	strcat(frase1, frase2);
	
	printf("%s", frase1);
	
	return 0;
}
