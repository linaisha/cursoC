#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
setlocale(LC_ALL,"");

    int lado1, lado2, lado3;

    printf("Informe o lado 1 do tri�ngulo: \n");
    fflush(stdin);
    scanf("%d", &lado1);
    printf("Informe o lado 2 do tri�ngulo: \n");
    fflush(stdin);
    scanf("%d", &lado2);
    printf("Informe o lado 3 do tri�ngulo: \n");
    fflush(stdin);
    scanf("%d", &lado3);

    if(lado1 == lado2 && lado2 == lado3 && lado1 == lado3){
        printf("O tri�ngulo de lados %d, %d e %d � equil�tero!", lado1, lado2, lado3);
    }else if(lado1 == lado2 || lado2 == lado3 || lado3 == lado1){
        printf("O tri�ngulo de lados %d, %d e %d N�O � equil�tero! Por�m possui dois lados iguais. � um tri�ngulo is�sceles!", lado1, lado2, lado3);
    }else{
        printf("O tri�ngulo de lados %d, %d e %d N�O � equil�tero e N�O possui nenhum lado igual. � um tri�ngulo escaleno!", lado1, lado2, lado3);
    }

}
