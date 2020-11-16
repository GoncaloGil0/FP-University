#include <stdio.h>
#include <stdlib.h>
//#include "myModule.h"

int obtemCoord();
void imprimeMatriz(int matriz[3][3]);
int verificaPosicaoVasia(int matriz[3][3], int jogador, int linha, int coluna);
int verificaVitoria(int matriz[3][3], int jogador);

int main() {
    
    int x, y, jogo[3][3], contador=1, player=0;
    
    //Parte: 2 Ex: 1.1 
    for( int x = 0; x < 3; x++){
        for (int y = 0; y < 3; y++){
            jogo[x][y] = -1;
        }
    }
    
    //Parte: 2 Ex: 1.2
    imprimeMatriz(jogo);
    
    while(contador != 9){
        
        printf("\n\n|Jogador: %d\n", player);
        
        x = obtemCoord();
        y = obtemCoord();
        
        verificaPosicaoVazia(jogo,player, x, y);

        imprimeMatriz(jogo);
        
        if (verificaVitoria(jogo, player) == 0){
            break;
        }
    
        if (player == 0){
            player++;
        } else if (player == 1){
            player--;
        }
        contador++;
    } 

    return (0);
}

int obtemCoord(){ //Parte: 1 Ex: 1 

    int coord;
    
    do {
        printf("|Digite um valor [0-2]: ");
        scanf("%d", &coord);
    } while (coord < 0 || coord > 2);

    return (coord);
}

void imprimeMatriz(int matriz[3][3]){ //Parte: 1 Ex: 2 
    
    int x,y;
    
    for (x=0; x< 3; x++){
        printf("\n");
        for (y=0; y< 3;y++){
            printf("|%d| ", matriz[x][y]);
        } 
    }
}

int verificaPosicaoVazia(int matriz[3][3],int jogador, int linha, int coluna){ //Parte: 1 Ex: 3
    
    if ( matriz[linha][coluna] == -1){
        matriz[linha][coluna] = jogador;
        return (1);
    } else {
        printf("Jogada invalida");
    }
}

int verificaVitoria(int matriz[3][3], int jogador){ //Parte: 1 Ex: 4
    int pontos = 0; 
    
    //verificar linhas
    for( int x = 0; x < 3; x++){
        pontos = 0;
        for (int y = 0; y < 3; y++){
            
            if (matriz[x][y] == jogador) {
                pontos++;
            } 
            
            if (pontos == 3) {
                // venceu 
                printf("\n\nVenceu");
                return 0;
            }
        }
    }
    
    //verificar colunas
    for( int x = 0; x < 3; x++){
        pontos = 0;
        for (int y = 0; y < 3; y++){
            
            if (matriz[y][x] == jogador) {
                pontos++;
            } 
            
            if (pontos == 3) {
                // venceu 
                printf("\n\nVenceu");
                return 0;
            }
        }
    }
    
    //verificar diagonais principal 
    if (matriz[0][0] == jogador && matriz[1][1] == jogador && matriz[2][2] == jogador ){
        // venceu 
        printf("\n\nVenceu");
        return 0;
    }

    //verificar diagonal secundaria
    if (matriz[0][2] == jogador && matriz[1][1] == jogador && matriz[2][0] == jogador ){
        // venceu 
        printf("\n\nVenceu");
        return 0;
    }
}

