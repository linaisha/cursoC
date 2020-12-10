#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <iostream>
#include <string>

int retornaComMaisDez(int numero){
	return numero + 10;
}

void aumentaDez(int *numero){
	*numero = *numero + 10;
}

int main(){
	setlocale(LC_ALL,"");
	
	int a = 5;
	
	printf("%d\n", a);
	
	a = retornaComMaisDez(a);
	
	printf("%d\n", a);
	
	aumentaDez(&a);
	
	printf("%d\n", a);
	
	return 0;
}
