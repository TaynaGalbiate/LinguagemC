/*
Programa pede ao usuário que digite
o seu nome, ao fazer será alocado
na variável nome.
*/
#include <stdio.h>

int main (){

    char nome[30];

    printf ("Digite o seu nome e tecle Enter:\n");
    scanf("%s",nome);         //Para o nome do cliente utilizamos %s por conta da quantidade de caracteres.
    printf("%s\n",nome);

    return 0;
}