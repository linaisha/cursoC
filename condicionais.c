#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
setlocale(LC_ALL,"");
    int a = 5, op = 3;
    float b = 2.5;
    char c = 'x';

    if(a == 5){
        printf("A vari�vel 'a' � igual a 5\n");
    }
    if(b == 2.5){
        printf("A variavel 'b' � igual a 2,5\n");
    }
    if(c == 'x'){
        printf("A vari�vel 'c' � igual a x\n");
    }

    if(a % 2 == 1){
        printf("A vari�vel 'a' � impar\n");
    }else{
        printf("A vari�vel 'a' � par\n");
    }

    if(op == 1){
        printf("A op��o = 1\n");
    }else if(op == 2){
        printf("A op��o = 2\n");
    }else{
        printf("A op��o n�o � igual a 1 nem 2\n");
    }

}
