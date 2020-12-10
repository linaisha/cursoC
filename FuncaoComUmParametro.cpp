#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <iostream>
#include <string>

void mostraSucessor(int numero){
	printf("\nO sucessor de %d é %d\n",numero,numero+1);
}

int retornaAntecessor(int numero){
	return -1;
}

int main(){
	setlocale(LC_ALL,"");
	
	int a;
	
	printf("Digite um valor: ");
	
	scanf("%d", &a);
	
	mostraSucessor(a);
	
	printf("\nO antecessor de %d é %d", a, retornaAntecessor(a));
	
	return 0;
}
