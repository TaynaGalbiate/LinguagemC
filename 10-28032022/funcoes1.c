//Programa paraa trabalhar com funções. Vamos usar funções com retorno, sem retorno, com argumetnos (parâmetros) e sem argumetos.

#include <stdio.h>
#include <stdlib.h>

void separadorHT (){
    for(int i = 0; i <= 50; i++){               //for estrutura de repetição, 
        printf("#");
    }
    printf("\n");
}
void separadorLinha(){
    for(int i =0; i<=50; i++){
        printf ("_");
    }
    printf("\n");
}

void pularLinha(int qtdVezes){                                       //void só executa, não responde.
for(int i=1; i<= qtdVezes; i++){
    printf("\n");
}
}

char* comparar (int v1, int v2){                                 
    if(v1>v2){
        return"O primeiro número é maior que o segundo.\n";
    }
    else if(v1==v2){
        return"São números iguais.\n";
    }

    else{
        return"O segundo número é maior que o primeiro.\n";
    }

}



void main(){
    int n1,n2;
    system("clear"); //limpar a tela do terminal
    separadorHT();                                               //chamando a função de separadorHT
    printf("\n\t\tPrograma que exibe uma mensagem\n");     
    separadorLinha();
    pularLinha(2);
    printf("Digite um número:\n");
    scanf("%d", &n1);
    printf("Digite outro número:\n");
    scanf("%d", &n2);
pularLinha (1);
    printf(comparar(n1,n2));
pularLinha (2);
}