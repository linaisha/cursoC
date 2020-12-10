#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <locale.h>
#define TAM 3

int* alocaVetor(int tam){
	int *v;
	
	v = (int *) malloc(tam * sizeof(int));
	
	return v;
}

void imprimeSequencial(int *vetor, int tamanhoLista){
	int i;
	for(i = 0;i < tamanhoLista; i++){
		printf("Valor %d: %d\n",i,vetor[i]);
	}
}

int main(){
	setlocale(LC_ALL,"");
	
	int vetor[TAM] = {1,2,3}, i, tamanhoLista;
	
	imprimeSequencial(vetor, 3);
	
	for(i = 0;i < TAM; i++){
		scanf("%d",&vetor[i]);
	}
	
	imprimeSequencial(vetor, 3);
	
	printf("Digite o tamanho do vetor: ");
	scanf("%d", &tamanhoLista);
	
	int *vetorLidoNaHora;
	
	vetorLidoNaHora = alocaVetor(tamanhoLista);
	
	for(i = 0;i < tamanhoLista; i++){
		scanf("%d",&vetorLidoNaHora[i]);
	}
	
	imprimeSequencial(vetorLidoNaHora, tamanhoLista);
	
	return 0;
}
