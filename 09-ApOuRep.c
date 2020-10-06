#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
setlocale(LC_ALL,"");
    float nota1, nota2, nota3, media;

    printf("Insira a nota 1 do aluno: \n");
    fflush(stdin);
    scanf("%f", &nota1);

    printf("Insira a nota 2 do aluno: \n");
    fflush(stdin);
    scanf("%f", &nota2);

    printf("Insira a nota 3 do aluno: \n");
    fflush(stdin);
    scanf("%f", &nota3);

    media = (nota1 + nota2 + nota3)/3;

    printf("A média das notas %f, %f e %f é %f\n", nota1, nota2, nota3, media);
    if(media >= 7)
        printf("O aluno foi aprovado!\n");
    else if(media >= 5)
        printf("O aluno esta de recuperação!\n");
    else
        printf("O aluno foi reprovado!\n");

}
