//Biblioteca com as informações da unidade do curso.

#include <stdio.h>
#include <stdlib.h>

typedef struct dados_unidade                    //definição
{
    char tipo[10];
    char nomeunidade[100];
    char localizacao[100];
    char horario[20];
    char telefone[20];
}unidade;