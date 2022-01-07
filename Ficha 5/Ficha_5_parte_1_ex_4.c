#include <stdio.h>
#include <stdlib.h>

//mostra as duas matrizes
void show_matrizes(int numero_linhas, int numero_colunas, int matriz_1[numero_linhas][numero_linhas], int matriz_2[numero_linhas][numero_linhas]);
//soma e mostra a matriz resultante da soma das duas matrizes
void soma_matrizes(int numero_linhas, int numero_colunas, int matriz_1[numero_linhas][numero_linhas], int matriz_2[numero_linhas][numero_linhas]);
//soma e mostra o somatorio de todos os elementos das duas matrizes
void somatorio(int numero_linhas, int numero_colunas, int matriz_1[numero_linhas][numero_linhas], int matriz_2[numero_linhas][numero_linhas]);

int main() {
    
    int numero_linhas, numero_colunas;
    
    printf("Numero de linhas: ");
    scanf("%d", &numero_linhas);
    
    printf("Numero de colunas: ");
    scanf("%d", &numero_colunas);
    
    int matriz_1[numero_linhas][numero_linhas], matriz_2[numero_linhas][numero_linhas];
    
    // X representa as linhas e Y as colunas
    
    printf("\nPrencher a matriz 1\n");
    for( int x = 0; x < numero_linhas; x++ ){ //preencher a matriz_1
        for( int y = 0; y < numero_colunas; y++ ){
            printf("Digite um numero: ");
            scanf("%d", &matriz_1[x][y]);
        }
    }
    
    printf("\nPrencher a matriz 2\n");
    for( int x = 0; x < numero_linhas; x++ ){ //preencher a matriz_2
        for( int y = 0; y < numero_colunas; y++ ){
            printf("Digite um numero: ");
            scanf("%d", &matriz_2[x][y]);
        }
    }

    show_matrizes(numero_linhas, numero_linhas, matriz_1, matriz_2);
    soma_matrizes(numero_linhas, numero_linhas, matriz_1, matriz_2);
    somatorio(numero_linhas, numero_linhas, matriz_1, matriz_2);
    
    return (0);
}

//mostra as duas matrizes
void show_matrizes(int numero_linhas, int numero_colunas, int matriz_1[numero_linhas][numero_linhas], int matriz_2[numero_linhas][numero_linhas]){
    
    printf("\nMatriz 1");
    for( int x = 0; x < numero_linhas; x++ ){
        printf("\n");
        for( int y = 0; y < numero_colunas; y++ ){
            printf(" |%d|", matriz_1[x][y]);
        }
    }
    
    printf("\n\nMatriz 2");
    for( int x = 0; x < numero_linhas; x++ ){
        printf("\n");
        for( int y = 0; y < numero_colunas; y++ ){
            printf(" |%d|", matriz_2[x][y]);
        }
    }
}
//soma e mostra a matriz resultante da soma das duas matrizes
void soma_matrizes(int numero_linhas, int numero_colunas, int matriz_1[numero_linhas][numero_linhas], int matriz_2[numero_linhas][numero_linhas]){
    
    printf("\n\nSoma das matrizes");
    for( int x = 0; x < numero_linhas; x++ ){
        printf("\n");
        for( int y = 0; y < numero_colunas; y++ ){
           printf(" |%d|", matriz_2[x][y] + matriz_1[x][y]);
        }
    } 
}
//soma todos os elementos das duas matrizes e mostra o resultado
void somatorio(int numero_linhas, int numero_colunas, int matriz_1[numero_linhas][numero_linhas], int matriz_2[numero_linhas][numero_linhas]){
    
    int soma = 0;

    for( int x = 0; x < numero_linhas; x++ ){
        printf("\n");
        for( int y = 0; y < numero_colunas; y++ ){
           soma = soma + (matriz_2[x][y] + matriz_1[x][y]);
        }
    } 
    printf("\nSomatorio dos numeros: %d", soma);
}
