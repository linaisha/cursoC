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
		printf("É verdadeiro!");
	}else{
		printf("É falso!");
	}
	
	//printf("%d", variavelBooleana);
	
	return 0;
}
