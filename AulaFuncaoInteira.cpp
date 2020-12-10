#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <iostream>
#include <string>

int retornaDez(){
	printf("\n Oi galera! \n");
	return 10;	
}

float retornaQuebrado(){
	return 5,5;
}

int main(){
	setlocale(LC_ALL,"");
	
	int a, b;
	
	a = retornaDez();
	
	printf("%d\n",a);
	
	b =  retornaQuebrado();
	
	printf("%f", b);
	
	
	return 0;
}
