#include <stdio.h>
#include <string.h>
int main(){
	char frase[200], invertido[200];
	int i, j, tamanho;
	printf("Digite uma frase: ");
	gets(frase);
	tamanho = strlen(frase);
	j=0;
	for(i=tamanho-1; i>=0; i--){
		invertido[i] = frase[j];
		j++;
	}
	invertido[tamanho] = '\0';
	
	printf("Frase invertida: %s\n", invertido);
	return 0;
}
