#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main (){
setlocale(LC_ALL,""); // aceitar acentuação BR

printf("Olá\n");

int a = 50; // inteiro
printf("O valor de a é = %d\n", a);
scanf("%d", &a);
printf("O valor de a mudou para %d\n", a);

float b = 5.5; // quebrado
printf("O valor de b é = %f\n", b);
scanf("%f", &b);
printf("O valor de b mudou para %f\n", b);

char c = 't'; // letra
printf("O valor de c é = %c\n", c);
fflush(stdin);
scanf("%c", &c);
printf("O valor de c mudou para %c\n", c);



}
