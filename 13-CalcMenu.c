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

        printf("Escolha a op��o:\n 1-Soma\n 2-Subtra��o\n 3-Divis�o\n 4-Multiplica��o\n");
        fflush(stdin);
        scanf("%d",&op);
        switch(op){
            case 1:
                printf("Voc� escolheu somar os numeros %f e %f\n O resultado � %f!", valor1, valor2, valor1 + valor2);
                break;
            case 2:
                printf("Voc� escolheu subtrair os numeros %f e %f\n O resultado � %f!", valor1, valor2, valor1 - valor2);
                break;
            case 3:
                printf("Voc� escolheu dividir os numeros %f e %f\n O resultado � %f!", valor1, valor2, valor1 / valor2);
                break;
            case 4:
                printf("Voc� escolheu multiplicar os numeros %f e %f\n O resultado � %f!", valor1, valor2, valor1 * valor2);
                break;
            default:
                printf("Op��o inv�lida!");
                break;
        }

}
