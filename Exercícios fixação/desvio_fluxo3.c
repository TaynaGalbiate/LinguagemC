#include <stdio.h>
#include <stdlib.h>
void main(){
    char nome [30];
    int idade, bemAlimentado, resfriado;
    float peso;
    printf("Informe o nome:\n");
    scanf("%s", &nome);
    printf("Informe o peso:\n");
    scanf("%f", &peso);
    printf("Informe a idade:\n");
    scanf("%d", &idade);
     printf("Está bem alimentado? <1-SIM / 0-NÃO>\n");
    scanf("%d", &bemAlimentado);
    printf("Está resfriado? <1-SIM / 0-NÃO>\n");
    scanf("%d", &resfriado);
    if (peso >= 50 && (idade >= 16 && idade <= 69)
    && bemAlimentado && !resfriado)
    printf("O voluntário %s está apto!\n", nome);
    else
    printf("O voluntário %s NÃO está apto!\n", nome);
}