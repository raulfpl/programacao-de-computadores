#include <stdio.h>

int main(){
	char frase[400];
	char letras[52], c;
	int aparecimentos[52], tamanho=0, i, j, achou;
	
	printf("Digite uma frase: ");
	gets(frase);
	
	for(i=0;frase[i] != '\0'; i++){
		c = toupper(frase[i]);
		if(c!=' '){
			achou = 0;
			for(j = 0; j<tamanho; j++){
				if(c == letras[j]){
					aparecimentos[j]++;
					achou = 1;
				}
			}
			if(achou == 0){
				letras[tamanho] = c;
				aparecimentos[tamanho] = 1;
				tamanho++;
			}
		}
	}
	
	for(i = 0; i<tamanho; i++){
		if(aparecimentos[i] > 1){
			printf("A letra %c apareceu %d vezes\n", letras[i], aparecimentos[i]);
		}
	}
	return 0;	
}
