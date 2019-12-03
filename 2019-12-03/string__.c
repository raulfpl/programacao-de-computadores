#include <stdio.h>
int main(){
	char frase[200];
	char palavra[] = "abacate";
	char palavra2 [] = { 'a', 'b', 'a', 'c', 'a', 't', 'e', '\0'};
	int i;
	printf("Digite uma frase: ");
	gets(frase);
	
	printf("Frase: ");
	for(i=0;frase[i] != '\0';i++){
		printf("%c", frase[i]);
	}
	
	printf("\nFrase: %s\n", frase);
	return 0;
}
