#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <iostream>
#include <string>

bool retornaBooleano(){
	return false;
}

int main(){
	setlocale(LC_ALL,"");
	
	bool variavelBooleana;
	
	variavelBooleana = retornaBooleano();
	
	if(variavelBooleana){
		printf("� verdadeiro!");
	}else{
		printf("� falso!");
	}
	
	//printf("%d", variavelBooleana);
	
	return 0;
}
