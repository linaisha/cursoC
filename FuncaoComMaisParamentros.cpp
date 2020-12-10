#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <iostream>
#include <string>

void mostraSoma(int primeiroNumero, int segundoNumero){
	printf("\nA soma entre %d e %d é %d",primeiroNumero,segundoNumero,primeiroNumero + segundoNumero);
}

int retornaSoma(int primeiroNumero, int segundoNumero){
	return primeiroNumero + segundoNumero;
}

int main(){
	setlocale(LC_ALL,"");
	
	int a = 5, b = 7;
	
	mostraSoma(a,b);
	
	printf("\nA soma entre %d e %d é %d",a,b,retornaSoma(a,b));
	
	
	
	return 0;
}
