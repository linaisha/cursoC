#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	
	int minhaMatriz[2][2], i, j, aux1, aux2;
	
	for(i = 0; i < 2; i++){
		for(j = 0; j < 2; j++){
			printf("Digite um valor para [%i][%i]: ",i,j);
			fflush(stdin);
			scanf("%i", &minhaMatriz[i][j]);
		}
	}
	printf("\n");
	
	for(i = 0; i < 2; i++){
		for(j = 0; j < 2; j++){
			printf("%i ", minhaMatriz[i][j]);
		}
		printf("\n");
	}
	
	printf("\n");
	
	aux1 = minhaMatriz[0][0];
	aux2 = minhaMatriz[0][1];
	
	minhaMatriz[0][0] = minhaMatriz[1][0];
	minhaMatriz[0][1] = minhaMatriz[1][1];
	minhaMatriz[1][0] = aux1;
	minhaMatriz[1][1] = aux2;
	
	for(i = 0; i < 2; i++){
		for(j = 0; j < 2; j++){
			printf("%d ", minhaMatriz[i][j]);
		}
		printf("\n");
	}
	
}
