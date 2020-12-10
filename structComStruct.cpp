#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <iostream>
#include <string>

typedef struct data{
	int dia;
	int mes;
	int ano;
}data;

struct aluno{
	int id;
	data nascimento;
};

int main(){
	setlocale(LC_ALL,"");
	
	struct aluno aluno1;
	
	aluno1.id = 15;
	aluno1.nascimento.ano = 1996;
	aluno1.nascimento.mes = 1;
	aluno1.nascimento.dia = 17;
	
	printf("Nascido em: %d/%d/%d",aluno1.nascimento.dia,aluno1.nascimento.mes,aluno1.nascimento.ano);
	
	return 0;
}
