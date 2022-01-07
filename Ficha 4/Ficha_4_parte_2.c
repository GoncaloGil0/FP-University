
#include <stdio.h>
#include <stdlib.h>

int main_ex1() {
    
    int i, numero[10], numero_par=0, par=0;
    
    for (i = 0 ; i < 10 ; i++) {
        printf("%d) Digite um numero: ",i+1);
        scanf("%d", &numero[i]);
    }
    
    for (i = 0 ; numero[i] != '\0'; i++) {
        if (numero[i] % 2 == 0) {
            numero_par++;
            if (numero[i] > par ) {
                par = numero[i];
            }
        }
    }
    printf("\nExistem numeros pares: %d", numero_par-1);    
    printf("\nO maior numero par é: %d", par);    
    
}

int main_ex2() {

    int SIZE, i, divisor, contagem=0, contagem_par=0;
    
    printf("Digite quantos numeros primos que deseja: ");
    scanf("%d", &SIZE);
    
    int primos[SIZE];
    
    for ( i = 2 ; contagem_par < SIZE ; i++ ){
        contagem = 0;
        for (divisor = 2; divisor < i; divisor++){
            if (i % divisor == 0) { 
                contagem++;
            }    
        }  
        
        if (contagem == 0) {
          primos[contagem_par] = i;
          contagem_par++;
        }
    }
    for (i = 0; i < SIZE; i++){
        printf("\n| %d | ",primos[i]);
    }
    return 0;    
}

int main_ex3(){
    
    const int TAMANHO_MATRIZ = 5;
    
    int x, y, matriz_A[TAMANHO_MATRIZ][TAMANHO_MATRIZ], matriz_A_transposta[TAMANHO_MATRIZ][TAMANHO_MATRIZ];
    
    printf("\nMATRIZ A: \n");
    for ( x = 0 ; x < TAMANHO_MATRIZ; x++){
        printf("\n");
        for ( y = 0 ; y < TAMANHO_MATRIZ; y++){
            matriz_A[x][y]= matriz_A[x][y-1]+2;  
            printf(" | %d | ", matriz_A[x][y]);
        }
    }
    
    printf("\n\nMATRIZ A TRANSPOSTA: \n");
    for (x = 0; x < TAMANHO_MATRIZ; x++){
        printf("\n");
        for ( y = 0 ; y < TAMANHO_MATRIZ; y++){
            matriz_A_transposta[x][y] = matriz_A[y][x];
            printf(" | %d | ", matriz_A_transposta[x][y]);
        }
    }
    
    return 0;
}

int main_ex4(){

    const int TAMANHO_MATRIZ = 4;
    
    int x, y, A_inicial[TAMANHO_MATRIZ][TAMANHO_MATRIZ], A_final[TAMANHO_MATRIZ][TAMANHO_MATRIZ];
    
    printf("\nMATRIZ A: \n");
    for ( x = 0 ; x < TAMANHO_MATRIZ; x++){
        printf("\n");
        for ( y = 0 ; y < TAMANHO_MATRIZ; y++){
            A_inicial[x][y]= A_inicial[x][y-1]+2;  
            printf(" | %d | ", A_inicial[x][y]);
        }
    }
    
    printf("\n\nMATRIZ COM ROTAÇÃO DE 90º: \n");
    for (x = 0; x < TAMANHO_MATRIZ; x++){
        printf("\n");
        for ( y = 1 ; y < TAMANHO_MATRIZ+1; y++){
            A_final[x][y] = A_inicial[TAMANHO_MATRIZ-y][x];
            printf(" | %d | ", A_final[x][y]);
        }
    }
    
    return 0;
}

int main_ex5(){

    char string[100];
    int i, contador;
    
    printf("Digite uma palavra: ");
    scanf("%s", string);
    
    for (contador = 0; string[contador] != '\0'; contador++){}
    
    for (i = 0; i <= contador; i++){
        printf("%c", string[contador - i]);
    }

    return 0;
}