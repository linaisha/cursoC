#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
setlocale(LC_ALL,"");
    float a, b;

    printf("Escolha um n�mero: \n");
    fflush(stdin);
    scanf("%f", &a);
    printf("\nEscolha um segundo n�mero: \n");
    fflush(stdin);
    scanf("%f", &b);
    printf("\nA m�dia entre '%f' e '%f' �: %f\n", a, b, (a+b)/2);

}
