#include <stdio.h>
#include <string.h>

int main(){
	char string[255], invertido[255];
	int i, j, tamanho;
	printf("Digite uma frase: ");
	gets(string);
	
	tamanho = strlen(string);
	j=0;
	for(i=tamanho-1;i>=0;i--){
		invertido[j] = string[i];
		j++;
	}
	invertido[j] = '\0';
	printf("string invertida:\n%s", invertido);
	return 0;
}
