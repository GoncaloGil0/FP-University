#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void printFirst(char  *str,  int  n){
    if (n > strlen(str)){
        n = strlen(str);
    }
    
    for( int letra = 0 ; letra < n ; letra++ ){
        printf("%c ", str[letra] );
    }
}

int main() {
    
    char palavra[100];
    int valor;

    printf("Escreva uma palavra: ");
    scanf("%s", palavra);
    
    printf("Digite o valor de n: ");
    scanf("%d", &valor);
    
    printFirst(palavra, valor);
    
    return (0);
}

