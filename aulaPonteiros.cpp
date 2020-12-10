#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <iostream>
#include <string>

int main(){
	setlocale(LC_ALL,"");
	
	int a = 20;
	
	printf("Valor de a : %d\n", a);
	
	printf("Endereço de a: %d\n", &a);
	
	scanf("%d", &a);
	
	printf("Valor de a: %d\n", a);
	
	int b = 10;
	
	int *ponteiro;
	
	ponteiro = &b;	
	
	printf("Valor de b: %d \n", b);
	
	b = 15;
	
	*ponteiro = 40;
	
	printf("Valor de b: %d \n", b);
		
	
	return 0;
}
