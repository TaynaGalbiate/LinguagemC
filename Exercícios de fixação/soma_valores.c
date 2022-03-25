//Programa para soma de valores//
#include <stdio.h>
#include <stdlib.h>
void main () {
    int soma, num1, num2;
    printf ("Informe o primeiro número:\n");
    scanf("%d", &num1);
    printf("Informe o segundo número:\n");
    scanf("%d", &num2);

    soma = num1 + num2;

    printf("Resultado da soma é: %d\n", soma);

}