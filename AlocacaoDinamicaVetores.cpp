#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <iostream>
#include <string>

int* alocaVetor(int tamanho){
	int *aux;
	
	aux = (int*) malloc(tamanho * sizeof(int));
	
	return aux;
}

int main(){
	setlocale(LC_ALL,"");
	
	int *vetor, tamanho, i;
	
	printf("Digite um tamanho para o vetor: ");
	scanf("%d", &tamanho);
	
	vetor = alocaVetor(tamanho);
	
	vetor[0] = 0;
	vetor[1] = 10;
	vetor[2] = 20;
	vetor[3] = 30;
	
	for(i = 0; i < tamanho; i++){
		printf("%d\n", vetor[i]);
	}
	
	return 0;
}
