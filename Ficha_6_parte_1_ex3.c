#include <stdio.h>
#include <stdlib.h>
void somar(int num1, int num2, long *resultado){
    //atribuir o valor da soma ao apontador "resultado"
    *resultado = num1 + num2;
}

int main() {
    
    //criar variaveis 
    int val1, val2;
    long *resultado, soma=0;
    
    //atribuir o endereço da variavel "soma" ao apontador "resultado"
    resultado = &soma;
    
    //Pedir valores
    printf("Digite 2 valores: ");
    scanf("%d %d", &val1, &val2);
    
    //Chamar a função
    somar(val1, val2, resultado);
    
    //Mostrar o resultado
    printf("%d + %d = %ld", val1, val2, *resultado);
    
    return (0);
}

