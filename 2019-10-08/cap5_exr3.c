//cap 5. exercício resolvido n 3
#include <stdio.h>
int main(){
	int vet1[10], vet2[10], i=0;
	printf("Vetor 1:\n");
	while(i<10){
		printf("Digite um numero %d: ", i);
		scanf("%d",&vet1[i]);
		i = i+1;
	}
	i = 0;
	printf("Vetor 2:\n");
	while(i<10){
		printf("Digite um numero %d: ", i);
		scanf("%d",&vet2[i]);
		i = i+1;
	}
	
	i = 0;
	printf("Os valores intercalados:\n");
	while(i<10){
		printf("%d ", vet1[i]);
		printf("%d ", vet2[i]);
		i = i + 1;
	}
	return 0;
}
