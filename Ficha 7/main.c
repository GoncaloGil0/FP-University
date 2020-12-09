#include <stdio.h>
#include <stdlib.h>
#include "ficha.h"
int main() {
    
    aluno aluno[30];
    
    int i=0, opcao;

    do {        
 
        opcao = menu();
        
        switch (opcao){
            case 1:
                pedirinfo(&aluno[i], i);  
                i++; 
                break;
            case 2:
                for(int x=0; x != i ;x++){
                    mostrar(aluno);
                    imprimiralunos(aluno, x);
                    
                }
                break;
            case 3:
                exit (0);   
        }

    } while (1);
    
    
    return (0);
}

