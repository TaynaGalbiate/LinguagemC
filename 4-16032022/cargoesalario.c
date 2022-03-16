/* Programa para o usuário escrever o nome da 
profissão e aparecer na tela o valor do salário
*/

#include <stdio.h>


int main (){

    char cargo [15];
    printf("Digite o nome do cargo e Enter\n");
    scanf("%s",cargo);

    if(strcmp(cargo,"diretor")==0){
        printf("O salario do diretor é R$ 15.000,00.\n");
    }
    else if(strcmp(cargo,"gerente")==0){
        printf("O salário do gerente é R$ 12.000,00.\n");
    }
    else if(strcmp(cargo,"analista")==0){
        printf("O salário do analista é R$ 8.000,00.\n");
    }
    else if(strcmp(cargo,"assistente")==0){
        printf("O salário do assistente é R$ 4.000,00.\n");
    }
    else if(strcmp(cargo,"auxiliar")==0){
        printf("O salário do auxiliar é R$ 2.000,00.\n");
    }
    else{
        printf("Não há salário.\n");
    }

    return 0;
    }