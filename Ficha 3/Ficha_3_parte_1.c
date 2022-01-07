
#include <stdio.h>
#include <stdlib.h>



/*
int main_ex1() {

    int numero = 0, soma = 0;
    
    do {
        soma += numero;
        scanf("%d", &numero);              
    } while (numero > 0);
    
    int numero = 1;
    
    for (numero  = 1; numero <= 10; numero++){
        printf("%d \n", numero);   
    }
    
    int i, j;
    
    for (i = 20, j = 0; i > j; i--, j++){
        printf("\n%d %d", i, j);
    }    
    
    return 0;
}
*/

int main_ex2(){

    int numero = 1;
    
    while (numero <= 10){
        printf("%d", numero);
        numero--;
    }
    
    return 0;
    
    //O programa ira subtrair 1 a var "numero" ate ao infinito, para corrigir
    //este erro bastava somar 1 a "numero" assim este iria parar quando "numero"
    //= 10
}

int main_ex3() {
    
    char letra, contagem;
    
    while (1) {
    
    printf("Digite um \"M\" para letras maiusculas e \"m\" para letras minusculas: ");
    letra = getchar();
    
    if (letra == 77 ){ // M 
        
        for (contagem = 65 ; contagem <= 90 ; contagem++) {
            printf("%c \n", contagem);
        }
        
        break;
    
    } else if (letra == 109) { // m
        
        for (contagem = 97 ; contagem <= 122 ; contagem++) {
            printf("%c \n", contagem);
        }
        
        break;
    }
    
    }
    return 0;
}

int main_ex4(){
    
    int somar = 0, numero, contador = 0;
    
    do {
        
        printf("Digite um numero (se = 0 o programa para): ");
        scanf("%d", &numero);
        
        if (numero == 0){
            break;
        } else {
            contador++;
            somar = somar + numero;
            
        }         
    } while(1);

    printf("Media = %d", somar/contador);

    return 0;
}

int main_ex5(){
    
    int numero;
    
    do {
        
        printf("Numero inteiro positivo: ");
        scanf("%d", &numero);
        
        if (numero <= 0){
            continue;
            
        } else if ( (numero % 2) == 0 ) {
            
            for (;numero > 0; numero = numero -2){
                printf("%d \n", numero - 2);
            }
            break;
            
        } else {
            
            for (;numero > 1; numero = numero -2){
                printf("%d \n", numero - 2);
            }
            break;
        }
        
    } while (1);
    return 0;
}