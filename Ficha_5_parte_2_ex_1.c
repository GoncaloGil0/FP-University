#include <stdio.h>
#include <stdlib.h>
#include "myIntLib.h"

//Tanto a header como o ficheiro .c com as funções encontam-se juntos com o resto dos ficheiros com o nome de:
// (.c) Ficha_5_parte_2_ex_1.c 
// (header.h ) Ficha_5_parte_2_ex_1.h


int main() {
    
    int valor_max = 20, valor_minimo = 0;
   
    printf("[%d-%d]", valor_minimo, valor_max);
    
    imprime(numero(valor_max, valor_minimo));
    return (0);
}

