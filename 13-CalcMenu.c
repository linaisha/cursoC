#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
setlocale(LC_ALL,"");

    float valor1, valor2;
    int op;

        printf("Escolha 2 valores para somar, subtrair, dividir ou multiplicar.\n");
        printf("Escolha o valor 1: \n");
        fflush(stdin);
        scanf("%f",&valor1);
        printf("Escolha o valor 2: \n");
        fflush(stdin);
        scanf("%f",&valor2);

        printf("Escolha a opção:\n 1-Soma\n 2-Subtração\n 3-Divisão\n 4-Multiplicação\n");
        fflush(stdin);
        scanf("%d",&op);
        switch(op){
            case 1:
                printf("Você escolheu somar os numeros %f e %f\n O resultado é %f!", valor1, valor2, valor1 + valor2);
                break;
            case 2:
                printf("Você escolheu subtrair os numeros %f e %f\n O resultado é %f!", valor1, valor2, valor1 - valor2);
                break;
            case 3:
                printf("Você escolheu dividir os numeros %f e %f\n O resultado é %f!", valor1, valor2, valor1 / valor2);
                break;
            case 4:
                printf("Você escolheu multiplicar os numeros %f e %f\n O resultado é %f!", valor1, valor2, valor1 * valor2);
                break;
            default:
                printf("Opção inválida!");
                break;
        }

}
