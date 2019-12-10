#include <stdio.h>

int main(){
	char frase[400];
	char c;
	int aparecimentos[26], i, j;
	
	printf("Digite uma frase: ");
	gets(frase);
	
	for(i=0;i<26;i++){
		aparecimentos[i] = 0;
	}
	
	for(i=0;frase[i] != '\0'; i++){
		c = toupper(frase[i]);
		for(j = 0; j<26; j++){
			if(c == 'A' + j){	// 'A' + j representa a letra na posição j do vetor ('A' + 2 = 'C')
				aparecimentos[j]++;
			}
		}
	}
	
	for(i = 0; i<26; i++){
		if(aparecimentos[i] > 1){
			printf("A letra %c apareceu %d vezes\n", 'A' + i, aparecimentos[i]);
		}
	}

	return 0;
}
