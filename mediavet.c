#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define TAM 3

void main(){
	setlocale(LC_ALL,"");
	
	float vet[TAM];
	int i;
	
	for(i = 0; i < TAM; i++){
	printf("Escolha o valor do vetor de posi��o %i: ", i);
	fflush(stdin);
	scanf("%f", &vet[i]);
	}
	
	for(i = 0; i < TAM; i++){
		printf("Vetor posi��o %i: ", i);
	}
	
	print("A m�dia dos vetores �: %.2f", (vet[1]+vet[2]+vet[3])/3);
		
}
