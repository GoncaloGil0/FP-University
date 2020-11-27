#include <stdio.h>
#include <stdlib.h>
int len(char *str){
    int contador;
    for (int x = 0 ; str[x] != '\0'; x++){
        contador++;
    }
    
    return(contador);
}

int main() {
    
    char palavra[100];
    
    printf("Escreva uma palavra: ");
    scanf("%s", palavra);
    
    printf("%d", len(palavra));

    return (0);
}

