#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <iostream>
#include <string>

void limpaTela(){
	// Limpa a tela
	system("CLS");
}

int main(){
	setlocale(LC_ALL,"");
	
	int a;
	
	printf("Digite um valor para a: ");
	
	scanf("%i", &a);
	
	limpaTela();
	
	printf("O valor digitado foi: %d\n Fim do programa!", a);
	
	return 0;
}
