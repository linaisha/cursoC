#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <iostream>
#include <string>

#define TAM 10

using namespace std;

void imprimeVetor(int vetor[TAM]){
	int i;
	for(i = 0; i < TAM; i++){
		printf("%i - ",vetor[i]);
	}
}

int buscaSimples(int vetor[TAM],int valorProcurado,int *posicaoEncontrada){
	
	int i;
	bool valorFoiEncontrado;
		
	for(i = 0; i < TAM; i++){
		if(vetor[i] == valorProcurado){
			valorFoiEncontrado = true;
			*posicaoEncontrada = i;
		}
	}
	if(valorFoiEncontrado){
		return 1;
	}else{
		return -1;
	}
	
}

int main(){
	setlocale(LC_ALL,"");
	
	int vetor[TAM] = {1,23,44,56,63,72,84,90,98};
	int valorProcurado;
	int posicao, posicaoEncontrada;
	int i;
	
	imprimeVetor(vetor);
	
	printf("\nQual numero deseja encontrar? ");
	scanf("%d", &valorProcurado);
	
	if(buscaSimples(vetor, valorProcurado, &posicaoEncontrada)== 1){
		printf("\nO valor foi encontrado na posição: %i",posicaoEncontrada);
	}else{
		printf("\nO valor não foi encontrado!");
	}
	
	return 0;
}
