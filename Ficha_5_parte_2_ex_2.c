#include <stdio.h>
#include <stdlib.h>
#include "myIntLib.h"

int main(){
    
    const int numero_alunos = 20;
    int soma = 0, nota, x, lista_notas[numero_alunos];

    for (x = 0; x < numero_alunos; x++){
        printf("Digite a nota do aluno nº %d: ", x+1);        
        scanf("%d", &nota);
        
        if (verificar(nota) == -1) {
            printf("Valor invalido\n");
            x--;
        } else {
            soma = soma + nota;
            lista_notas[x] = nota;
        } ;
    }
       
    printf("\nA media dos alunos é: %d", media(soma, numero_alunos));
    
    return (0);
}

