/*Programa pra calcular o resultado
da situação do aluno se está aprovado
ou reprovado. Vamos levar em consideração
a notta do aluno e compará-la a média de
aprovação da escola. Caso a nota do aluno
seja maior ou igual 7, então o aluno
estará aprovado, caso contrário,
estará reprovado*/

/*Incluir o cabeçalho de entrada e saída de 
dados padrão: std(Sttandard -> Padrão) io
(i -> input | output)*/
#include <stdio.h>

//Definir uma constante. Sempre em Letras Maiúsculas
#define MEDIAESCOLA 7.0

int main (){
    //Declaração da variável notaAluno com o tipo float
    float notaAluno;
    printf("Digite a nota do aluno e tecle Enter\n");
    scanf("%f", &notaAluno);

    //Desvio de fluxo com if .. else
    if(notaAluno >= MEDIAESCOLA){
        printf ("O aluno está aprovado\n"); 
     }
    else{
        printf("O aluno está reprovado\n");
     }
return 0;
}