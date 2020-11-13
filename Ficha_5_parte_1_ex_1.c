#include <stdio.h>
#include <stdlib.h>

int numero_user;

int numero(){
    printf("Digite um numero: ");
    scanf("%d", &numero_user);
    return(numero_user);
}

int main() {
    
    numero();
        
    for (int i = 0; i < numero_user; i++){
        printf("*");   
    }
    
    return (0);
}

