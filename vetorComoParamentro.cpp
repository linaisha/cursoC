#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <iostream>
#include <string>

void imprimeVetor(int *vetor, int tamanho){
	
	int i;
	
	for(i = 0; i < tamanho; i++){
		printf("%d\n", vetor[i]);
	}
}

void modificaVetor(int *vetor, int tamanho){
	int i;
	
	for(i = 0; i<tamanho;i++){
		vetor[i] = vetor[i] + 1;
	}
}

int main(){
	setlocale(LC_ALL,"");
	
	int v[3] = {1,2,3};
	
	imprimeVetor(v,3);
	
	modificaVetor(v,3);
	
	imprimeVetor(v,3);
	
	return 0;
}
