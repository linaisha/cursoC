#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <iostream>
#include <string>

void desenhaBorda(){
	printf("|-----------|\n");
}

int main(){
	setlocale(LC_ALL,"");
	
	desenhaBorda();
	
	printf("Oi\n");
	
	desenhaBorda();
	
	
	return 0;
}
