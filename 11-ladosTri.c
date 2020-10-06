#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
setlocale(LC_ALL,"");

    int lado1, lado2, lado3;

    printf("Informe o lado 1 do triângulo: \n");
    fflush(stdin);
    scanf("%d", &lado1);
    printf("Informe o lado 2 do triângulo: \n");
    fflush(stdin);
    scanf("%d", &lado2);
    printf("Informe o lado 3 do triângulo: \n");
    fflush(stdin);
    scanf("%d", &lado3);

    if(lado1 == lado2 && lado2 == lado3 && lado1 == lado3){
        printf("O triângulo de lados %d, %d e %d é equilátero!", lado1, lado2, lado3);
    }else if(lado1 == lado2 || lado2 == lado3 || lado3 == lado1){
        printf("O triângulo de lados %d, %d e %d NÃO é equilátero! Porém possui dois lados iguais. É um triângulo isósceles!", lado1, lado2, lado3);
    }else{
        printf("O triângulo de lados %d, %d e %d NÃO é equilátero e NÃO possui nenhum lado igual. É um triângulo escaleno!", lado1, lado2, lado3);
    }

}
