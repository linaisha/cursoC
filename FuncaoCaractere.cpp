#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <iostream>
#include <string>

char retornaLetra(){
	return 120;
}

int main(){
	setlocale(LC_ALL,"");
	
	char letra;
	
	letra = retornaLetra();
	
	printf("%c", letra);
	
	
	return 0;
}
