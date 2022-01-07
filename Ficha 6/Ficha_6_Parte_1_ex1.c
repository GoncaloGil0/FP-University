#include <stdio.h>
#include <stdlib.h>

void incrementar(int valor) {
    printf("\nvalor: %d", ++valor);
}

int main() {
    
    int valor = 0;
    
    incrementar(valor);
            
    printf("\nvalor: %d", valor);

    return 0;
}

