#ifndef FICHA_H
#define FICHA_H

typedef struct{
    int dia, mes, ano;
} Data;

typedef struct{
    char nome[10];
    Data data_nascimento;
    int numero;
} aluno;

int menu();
void pedirinfo(aluno *aluno, int i);
void pedir_data(Data *data);
void imprimiralunos(aluno aluno[], int i);
void imprimirdata(Data data);

#endif /* FICHA_H */

