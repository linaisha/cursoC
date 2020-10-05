#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
setlocale(LC_ALL,"");
    int a = 5, op = 3;
    float b = 2.5;
    char c = 'x';

    if(a == 5){
        printf("A variável 'a' é igual a 5\n");
    }
    if(b == 2.5){
        printf("A variavel 'b' é igual a 2,5\n");
    }
    if(c == 'x'){
        printf("A variável 'c' é igual a x\n");
    }

    if(a % 2 == 1){
        printf("A variável 'a' é impar\n");
    }else{
        printf("A variável 'a' é par\n");
    }

    if(op == 1){
        printf("A opção = 1\n");
    }else if(op == 2){
        printf("A opção = 2\n");
    }else{
        printf("A opção não é igual a 1 nem 2\n");
    }

}
