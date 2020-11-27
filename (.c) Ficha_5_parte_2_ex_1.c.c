#include <stdio.h>
#include <stdlib.h>
#include "myIntLib.h"

int numero(int max, int minimo){
    int numero_user;
    printf("Digite um numero: ");
    scanf("%d", &numero_user);
    
    if (numero_user <= 20 && numero_user >= 0){
        return(numero_user);
    } else {
        return(-1);
    }
    
}

void imprime(int tamanho){
    
    if (tamanho == -1){
        printf("O valor inserido está fora do intervalo");
    } else {
        for (int i = 0; i < tamanho; i++){
                printf("*");   
            }
    }
}

