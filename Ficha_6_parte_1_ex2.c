#include <stdio.h>
#include <stdlib.h>

void foo(int a, int *aPtr) {
    
    printf("\n");
    printf("|Valor de A na função = %d\n", a);           // imprimir o valor de a
    printf("|Endereço de A na função = %p\n", &a);       // imprimir o endereço de a
    printf("|Valor de aPtr na função = %p\n", aPtr);     // imprimir o valor de aPtr
    printf("|Endereço de aPtr na função = %p\n", &aPtr); // imprimir o endereço de aPtr
    a++;                                                // somar um ao valor de a
    (*aPtr)++;                                          // somar um ao valor apontado por de aPtr
    
    
}

int main() {
           
    int a = 0;
    printf("\n");
    printf("|Valor de A no main = %d\n", a);      // imprimir o valor de a
    printf("|Endereço de A no main = %p\n", &a);  //printf("Endereço da função = %p\n", &(foo(a, &a)));// imprimir o endereço de afoo(a, &a);
    
    foo(a, &a);
    
    printf("\n");
    printf("|Valor de A no main = %d\n", a);      // imprimir o valor de a
    
    
    return (0);
}

