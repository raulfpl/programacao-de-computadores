//cap 5. exercício resolvido n 3
#include <stdio.h>
int main(){
	int vet1[10], vet2[10], i=0;
	int vetRes[20];
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
	while(i<10){
		vetRes[i*2] = vet1[i];
		vetRes[i*2+1] = vet2[i];
		i = i+1;
	}
	
	printf("Os valores intercalados:\n");
	
	i = 0;
	while(i<20){
		printf("%d ", vetRes[i]);
		i = i + 1;
	}
	return 0;
}
