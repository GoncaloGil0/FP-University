
#include <stdio.h>
#include <stdlib.h>

int factorial(int valor) {
    if (valor == 0) {
        return 1;
    }
    printf("\nValor = %d", valor);
    return valor * factorial(valor -1);
}

int main() {

    int valor;
    
    printf("Digite um numero para saber o seu factorial: ");
    scanf("%d", &valor);
    
    printf("\n\nO factorial de %d é %d", valor, factorial(valor));
    
    return (0);
}

