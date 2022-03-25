#include <stdio.h>
#include <stdlib.h>

void main(){
float num, soma=0, media=0;
int i;                                              //início do laço for
for (i=1; i<=10; i++) {                              //a partir deste ponto são as instruções que devem ser executadas nas interações
printf("Informe o número:\n");
scanf("%f", &num);
soma += num;                                        //a media deve ser calculada apos a interação
} 
media = soma / 10;
printf("A média é: %f\n", media);
}