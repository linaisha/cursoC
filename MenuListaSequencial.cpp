#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define TAM 10

void limpaTela(){
	system("CLS");
}

int main(){
	setlocale(LC_ALL,"");
	
	int funcaoDesejada = 1;
	
	while(funcaoDesejada < 10 && funcaoDesejada > 0){
	
	printf("|----Opera��es----|\n");
	printf("1 - Inser��o de um node no in�cio da lista\n");
	printf("2 - Inser��o de um node no fim da lista\n");
	printf("3 - Inser��o de um node na posi��o %d da lista\n");
	printf("4 - Retirar um node do in�cio da lista\n");
	printf("5 - Retirar um node do fim da lista\n");
	printf("6 - Retirar um node da posi��o %d da lista\n");
	printf("7 - Procurar um node com o campo RG\n");
	printf("8 - Imprimir a lista\n");
	printf("9 - Sair do sistema.\n");
	printf("\nEscolha um n�mero e pressione ENTER: ");
	
	scanf("%i", &funcaoDesejada);
	
	limpaTela();
	
	switch(funcaoDesejada){
		case 1:
			printf("Fun��o escolhida: 1\n");
			break;
		case 2:
			printf("Fun��o escolhida: 2\n");
			break;
		case 3:
			printf("Fun��o escolhida: 3\n");
			break;
		case 4:
			printf("Fun��o escolhida: 4\n");
			break;	
		case 5:
			printf("Fun��o escolhida: 5\n");
			break;
		case 6:
			printf("Fun��o escolhida: 6\n");
			break;
		case 7:
			printf("Fun��o escolhida: 7\n");
			break;
		case 8:
			printf("Fun��o escolhida: 8\n");
			break;
		case 9:
			printf("Fun��o escolhida: 9\n");
			break;						
	}
	}
	
	return 0;
}
