/* Programa para exibir o salário do
cargo de acordo com a escolha do usuário*/

#include <stdio.h>
int main (){
    int opcao = 0;
    
    //comando para limpar a tela
    system("clear"); //clear screen (limpar tela)
    printf("##############################################################################");
    printf("#\n#\t Programa para exibir salário\t\t\t#\n");
    printf("##############################################################################\n");
    printf("\nEscolha um dos cargos abaixo digitando o número correspondente\n");
    printf("\t1 - Diretor\n");
    printf("\t2 - Gerente\n");
    printf("\t3 - Analista\n");
    printf("\t4 - Assistente\n");
    printf("\t5 - Auxiliar\n");
    printf("---------------------------------------------------------------------------\n");

    scanf("%d",&opcao);                                 //scanf nessa posição porque precisa ser antes do switch para executar o programa

    switch(opcao){
        case 1:                                         //case são as opções
        printf("O salário do Diretor é de R$ 15.000,00\n");
        break;                                          //break para fechar cara opção
        case 2: 
        printf("O salário do Gerente é de R$ 12.000,00\n");
        break;
        case 3:
        printf("O salário do Analista é de R$ 8.000,00\n");
        break;
        case 4:
        printf("O salário do Assistente é de R$4.000,00\n");
        break;
        case 5:
        printf("O salário do Auxiliar é de R$ 2.000,00\n");
        break;

        default:                                 //default é um else do switch, um 'se não'
            printf("Não há salário\n");
            break;
    }
    return 0;
}