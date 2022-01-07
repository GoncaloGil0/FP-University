
#include <stdio.h>
#include <stdlib.h>

int main_ex1() {

    int a, b;
    
    printf("Digite dois numeros inteiros: ");
    scanf("%d %d", &a,&b);
    
    if (a > b){
        printf("O maior numero é %d \n",a);
        printf("Ordem crescente: %d,%d \n", a,b);
    } else {
        printf("O maior numero é %d \n",b);
        printf("Ordem crescente: %d,%d \n", b,a);
    }
    return 0;
}

int main_ex2() {

    int a, b, c;
    
    printf("Digite tres numeros inteiros: ");
    scanf("%d %d %d", &a,&b,&c);
    
    if (a > b && a > c){
        printf("O maior numero é %d \n",a);
    } else if ( b > a && b > c) {
        printf("O maior numero é %d \n",b);
    } else {
        printf("O maior numero é %d \n",c);
    }
    return 0;
}

int main_ex3() {

int a = 0, b = 1;

if (a = b) {
    printf("Os valores são iguais ");
}
printf("a : %d b: %d: ", a, b);

// a = 1 e b = 1

return 0;

}

int main_ex4() {

int a;
float resto;

printf("Digite um numero inteiro: ");
scanf("%d", &a);

resto = a % 2;

if (resto == 0){
    printf("%d é numero par \n",a);
} else {
    printf("%d é numero impar \n",a);
}

return 0;

}

int main_ex5() {

int a;

printf("Digite um numero inteiro: ");
scanf("%d", &a);

switch (a){
    case 1:
        printf("O valor é 1");
        break;
    case 2:
        printf("O valor é 2");
        break;
    case 3:
        printf("O valor é 3");
        break;
    default:
        printf("O valor é %d",a);
}

return 0;

}
