#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
setlocale(LC_ALL,"");

// definindo variaveis
    int a = 6, b = 4;

    printf("A soma de '%d' e '%d' = %d\n", a, b, a + b);

    printf("A subtração de '%d' e '%d' = %d\n", a, b, a - b);

    printf("A divisão de '%d' e '%d' = %d\n", a, b, a / b);

    printf("A multiplicação de '%d' e '%d' = %d\n", a, b, a * b);

    printf("O resto da divisão entre '%d' e '%d' = %d\n", a, b, a % b);

    printf("O valor absoluto de -3 = %d\n", abs(-3));

}
