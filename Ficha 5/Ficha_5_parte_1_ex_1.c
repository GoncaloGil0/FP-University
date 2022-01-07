#include <stdio.h>
#include <stdlib.h>

int numero_user;

int numero(){
    printf("Digite um numero: ");
    scanf("%d", &numero_user);
    return(numero_user);
}

void imprime(int quantidade){
    for (int i = 0; i < quantidade; i++){
            printf("*");   
        }
}

int main() {
    
    imprime(numero());
    return (0);


