#include <stdio.h>
#include <ctype.h>
int main(){
	char frase[400], c;
	int repeticoes[26], i;
	
	printf("Digite uma frase: ");
	gets(frase);
	
	for(i=0;i<26;i++){
		repeticoes[i] = 0;
	}
	
	for(i = 0; frase[i] != '\0'; i++){
		c = toupper(frase[i]);
		if(c >= 'A' && c <= 'Z'){
			repeticoes[c - 'A'] ++;
		}
	}
	
	for(i=0;i<26;i++){
		if(repeticoes[i] > 1){
			printf("A letra %c aparece %d vezes\n", i + 'A', repeticoes[i]);
		}
	}
	return 0;
}
























