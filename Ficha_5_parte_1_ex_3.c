#include <stdio.h>
#include <stdlib.h>
#include "My_header.h"

int main() {
    
    int numero_1, numero_2;
    char operacao, resposta;
    
    do {
        printf("Digite o primeiro numero: ");
        scanf("%d", &numero_1);

        printf("Digite a operação: ");
        scanf(" %c", &operacao);
        
        printf("Digite o segundo numero: ");
        scanf("%d", &numero_2);

        switch (operacao){
            case '+':
                printf("%d %c %d = %.2f", numero_1, operacao, numero_2, soma(numero_1, numero_2));
                break;
            case '-':
                printf("%d %c %d = %.2f", numero_1, operacao, numero_2, subtracao(numero_1, numero_2));
                break;
            case '*':
                printf("%d %c %d = %.2f", numero_1, operacao, numero_2, multi(numero_1, numero_2));
                break;
            case '/':
                printf("%d %c %d = %.2f", numero_1, operacao, numero_2, divisao(numero_1, numero_2));
                break;
            default:
                printf("Digitou um operador invalido");
                continue;
        }
        
        printf("\nQuer continuar (s/n)? ");
        scanf(" %c", &resposta);
        
        if (resposta == 'n'){
            break;
        }
    
    } while(1);
}

