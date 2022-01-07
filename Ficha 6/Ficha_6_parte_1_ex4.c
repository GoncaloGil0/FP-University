#include <stdio.h>
#include <stdlib.h>

void  ordenar(int *v1,  int *v2,  int *v3){
    int lista_numeros[3] = { *v1 , *v2, *v3 };
    int lista_numeros_final[3];
    int maior=0, menor=-1, medio=0, y;
    
    //calculo do maior numero
    for (y = 0; y<3; y++){
        if (lista_numeros[y] > maior){
            maior = lista_numeros[y];
        }
    }
    
    //calculo do menor numero
    menor = maior;
    for (y = 0; y<3; y++){
        if (lista_numeros[y] < menor){
            menor = lista_numeros[y];
        }
    }
    
    //calculo do elemento do meio
    for (y = 0; y<3; y++){
        if (lista_numeros[y] != maior && lista_numeros[y] != maior){
            medio = lista_numeros[y];
        }
    }  
    
    //atribuição dos valores as variaves do main
    *v1 = menor;
    *v2 = medio;
    *v3 = maior;
    
}

int main() {
    
    int val1, val2, val3;
    
    printf("Digite o primeiro numero: ");
    scanf("%d", &val1);
    printf("Digite o segundo numero: ");
    scanf("%d", &val2);
    printf("Digite o terceiro numero: ");
    scanf("%d", &val3);
    
    ordenar(&val1, &val2, &val3);
    
    printf("\n %d | %d | %d", val1, val2, val3);
    
    return (0);
}

