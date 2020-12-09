#include <stdio.h>
#include <stdlib.h>
#include "ficha.h"

int menu(){
    int opcao;
    
    do {
    printf("\n1) Inserir Alunos\n");
    printf("2) Ver Alunos\n");
    printf("3) Sair\n");
    printf("Inserir Opção: ");
    scanf("%d", &opcao);
    } while (opcao < 1 || opcao > 4);
    
    return(opcao);
}

void pedirinfo(aluno *aluno, int i){
    printf("Aluno %d \n", i+1);
    printf("Digite o seu nome: ");
    scanf(" %s", aluno->nome);
    printf("Digite o seu numero: ");
    scanf("%d", &aluno->numero);
    pedir_data(&aluno->data_nascimento);   
}

void imprimiralunos(aluno aluno[], int i){

    printf("Nome: %s\n", aluno[i].nome);
    printf("Numero: %d\n", aluno[i].numero);
    imprimirdata(aluno[i].data_nascimento);
    
}

void pedir_data(Data *data){
    printf("Digite a sua data de nascimento\n");
    printf("Dia: ");
    scanf("%d", &data->dia);
    printf("Mes: ");
    scanf("%d", &data->mes);
    printf("Ano: ");
    scanf("%d", &data->ano);
}

void imprimirdata(Data data){

    printf("Data de Nascimento: %d-%d-%d", data.dia, data.mes, data.ano);

}