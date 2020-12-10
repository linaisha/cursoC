#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <iostream>
#include <string>
#include <string.h>

struct palavra{
	int ordem;
	char letra;
	char texto[255];
};

int main(){
	setlocale(LC_ALL,"");
	
	struct palavra primeiraPalavra;
	
	primeiraPalavra.ordem = 0;
	primeiraPalavra.letra = 'c';
	strcpy(primeiraPalavra.texto,"palavrinha");
	
	printf("Ordem: %d, primeira letra: %c, palavra: %s", primeiraPalavra.ordem, primeiraPalavra.letra,primeiraPalavra.texto);
	
	struct palavra listaDePalavras[3];
	
	listaDePalavras[0].ordem = 0;
	listaDePalavras[1].ordem = 1;
	listaDePalavras[2].ordem = 2;
	listaDePalavras[0].letra = 'd';
	listaDePalavras[1].letra = 'l';
	listaDePalavras[2].letra = 'b';
	strcpy(listaDePalavras[0].texto,"Dahr");
	strcpy(listaDePalavras[1].texto,"Legal");
	strcpy(listaDePalavras[2].texto,"Bacana");
	
	int i;
	for(i = 0; i < 3; i++){
		printf("\nOrdem: %d, primeira letra: %c, palavra: %s", listaDePalavras[i].ordem, listaDePalavras[i].letra,listaDePalavras[i].texto);
	}
	
	return 0;
}
