//Biblioteca para incluir as informações do curso e da unidade.

#include <stdio.h>
#include <stdlib.h>
#include "curso.h"
#include "unidade.h"

void gravar(){                                    //void= para funcionamento.
    FILE *arquivo;                                // O tipo FILE é utlizado para criar arquivos. 
    arquivo = fopen("dados.txt","w");             //A função fopen é reponsável por criar um arquivo.
    if(arquivo==NULL){
        printf("Arquivo não encontrado ou não existe");
        exit(1); //encerrar o programa
    }
     curso curso, *pcurso;
    unidade unid,*punid;

    pcurso = &curso;
    punid = &unid;

    
    printf("Digite o curso que você deseja inserir:\n");
    fgets(pcurso->curso,50,stdin);

    printf("Digite a descrição do curso até 200 caracteres:\n");
    fgets(pcurso->descricao,200,stdin);

    printf("Digite a carga horária do curso:\n");
    fgets(pcurso->cargahoraria,20,stdin);

    printf("Digite a data de início:\n");
    fgets(pcurso->data,100,stdin);

    printf("Digite a data de término:\n");
    fgets(pcurso->data,100,stdin);

    printf("Digite o valor do curso:\n");
    fgets(pcurso->preco,100,stdin);

    printf("Digite o nome da unidade:\n");
    fgets(punid->nomeunidade,100,stdin);

    printf("Digite a localização do curso:\n");
    fgets(punid->nomeunidade,100,stdin);

    printf("Digite o horário de funcionamento:\n");
    fgets(punid->horario,20,stdin);

    printf("Digite o telefone para contato com DDD:\n");
    fgets(punid->telefone,20,stdin);

    fprintf(arquivo,pcurso->curso);
    fprintf(arquivo,pcurso->descricao);
    fprintf(arquivo,pcurso->cargahoraria);
    fprintf(arquivo,pcurso->data);
    fprintf(arquivo,pcurso->preco);
    fprintf(arquivo,punid->nomeunidade);
    fprintf(arquivo,punid->horario);
    fprintf(arquivo,punid->telefone);

    fclose(arquivo);
}
