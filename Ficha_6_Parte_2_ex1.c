#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int equal(char *str1, char *str2){
    
    if (strcmp(str1,str2) == 0){ //usei uma das bibliotecas ("string.h") faladas no powerpoint das bibliotecas
        return 1;
    } else {
        return 0;
    }
}

int main() {
    
    char palavra1[100], palavra2[100];
    
    printf("Escreva uma palavra: ");
    scanf(" %s", palavra1);
    
    printf("Escreva uma palavra: ");
    scanf(" %s", palavra2);
    
    printf("%d", equal(palavra1, palavra2));
    
    return (0);
}

