#include <stdio.h>
#include <stdlib.h>
#include "myIntLib.h"

int verificar(int nota_aluno){
    if (nota_aluno <= 20 && nota_aluno >= 0){
        return (nota_aluno);
    } else {
        return (-1);
    }
}

int media(int soma, int numero_alunos){
    return (soma / numero_alunos);
}

