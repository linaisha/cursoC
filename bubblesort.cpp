#include <iostream>
#include <stdlib.h>
#include <string>
#include <locale.h>
#define TAM 10

void imprimeVetor(int vetor[]){
	int i;
	printf("\n");
	for(i = 0; i < TAM; i++){
		printf(" |%i| ",vetor[i]);
	}
}

void bubbleSort(int vetor[TAM]){
	
	int x, y, aux;
	
	for(x = 0;x < TAM; x++){
			
		for(y = 0; y < TAM; y++){
			
			imprimeVetor(vetor);
			
			if(vetor[x] > vetor[y]){
				aux = vetor[x];
				vetor[x] = vetor[y];
				vetor[y] = aux;
			}
			
		}
		
	}
}

int main(){
	setlocale(LC_ALL,"");
	
	int vetor[TAM] = {10,9,8,7,6,5,4,3,2,1};
	
	bubbleSort(vetor);
	
	imprimeVetor(vetor);
	
	return 0;
}
