
#include <stdio.h>
#include <stdlib.h>


int main_ex1() {
    
    int i, soma=0, produtos[10];
    
    for (i = 0; i < 10; i++){
        printf("%d) Digite o preço do produto: ", i+1);
        scanf("%d", &produtos[i]);
        soma = soma + produtos[i];
    }
    
    printf("Soma = %d", soma);
    
    return (0);
}

int main(){
    
    char string[10];
    int i, cifra;
    
    printf("Digite uma palavra ate 10 digitos: ");
    scanf("%s", string);
    
    printf("Digite uma cifra: ");
    scanf("%d", &cifra);
    
    for (i = 0 ; string[i] !='\0'; i++ ){
        if ( string[i]+cifra > 122 ){
            string[i]= string[i]-26;
        }
        
        printf("%c", string[i]+cifra);
    } 
    
    return(0);
}

int main_ex3(){
    
    int x,y, numero, matriz[4][5], contador;
    
    for (x = 0; x < 4; x++){
        for (y = 0; y < 5; y++){
            printf("[%d][%d] Digite um numero: ", x, y);
            scanf("%d", &numero);  
            matriz[x][y] = numero;
        }
    }

    for (x = 0; x < 4; x++){
        printf("\n");
        for (y = 0; y < 5; y++){
            printf("%d ", matriz[x][y]);    
        }
    }
    
    printf("\nDigite um numero: ");
    scanf("%d", &numero);
    
    for (x = 0; x < 4; x++){
        for (y = 0; y < 5; y++){
            if (matriz[x][y] == numero){
                contador++;
            }
        }
    }
    
    printf("\nO numero %d aparece %d vezes ", numero, contador);
    
    return 0;

}

int main_ex4(){
    
    int x,y, numero, matriz[3][3], maior = 0;
    
    for (x = 0; x < 3; x++){
        for (y = 0; y < 3; y++){
            printf("[%d][%d] Digite um numero: ", x, y);
            scanf("%d", &numero);  
            matriz[x][y] = numero;
        }
    }

    for (x = 0; x < 3; x++){
        printf("\n");
        for (y = 0; y < 3; y++){
            printf("%d ", matriz[x][y]);    
        }
    }

    for (x = 0; x < 3; x++){
        for (y = 0; y < 3; y++){
            if (matriz[x][y] > maior){
                maior = matriz[x][y];
            }
        }
    }
    
    printf("\n\nO maior numero é %d", maior);
    
    

    return 0;
}

int main_ex5(){

    char string_1[100], string_2[100];
    int i, contador_1=0, contador_2=0, contador_3=0;
    
    printf("Digite um nome: ");
    scanf("%s", string_1);
    
    printf("Digite um nome: ");
    scanf("%s", string_2);

    for ( i = 0 ; string_1[i] != '\0'; i++ ){
        contador_1++;
    }
    
    for ( i = 0 ; string_2[i] != '\0'; i++ ){
        contador_2++;
    }

    if (contador_1 != contador_2){
        printf("Os nomes sao diferentes");
    } else {
        for ( i = 0 ; string_1[i] != '\0'; i++){
            if (string_1[i] == string_2[i]){
                contador_3++;
            } else {
                continue;
            }
        }
        if (contador_3 == contador_2) {
            printf("Os nomes são iguais");
        } else {
            printf("Os nomes não são iguais");
        }
    }
    
    return 0;
}

