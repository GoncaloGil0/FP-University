#include <stdio.h>
#include <stdlib.h>

int *findMax(int data[], int size){ //data é o array e size o tamanho do mesmo
   
    if (data[0] > data[1] && data[0] > data[2]){
        return (&data[0]);
    } else if (data[1] > data[0] && data[1] > data[2]) {
        return (&data[1]);
    } else if (data[2] > data[0] && data[2] > data[1]) {
        return (&data[2]);
    } else {
        return (0);
    }
}

int main() {
    
    const int TAMANHO = 3;
    int x, lista[TAMANHO];
    
    for(x=0; x<TAMANHO; x++){
        printf("Digire um numero para a lista: ");
        scanf("%d", &lista[x]);
    }

    printf("Endereço: %p",findMax(lista, TAMANHO));

    return (0);
}

