#include <stdio.h>
#include <stdlib.h>
#include "myIntLib.h"

int main() {
    
    int valor_max = 20, valor_minimo = 0;
   
    printf("[%d-%d]", valor_minimo, valor_max);
    
    imprime(numero(valor_max, valor_minimo));
    return (0);
}

