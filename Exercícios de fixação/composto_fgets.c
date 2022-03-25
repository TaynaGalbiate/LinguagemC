//Programa para ler texto composto com fgets, o fgts tem a função de armazenar corretamente o texto, independente da quantidade de palavras.

#include <stdio.h>
#include <stdlib.h>

void main (){
    char produto[30];
    printf("Informe o nome do produto:\n");
    fgets(produto, 30, stdin);

    printf("Produto:%s\n", produto);
}