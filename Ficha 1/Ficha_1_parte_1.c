/*
 ESTE DOCUMENTO CONTEM A RESOLUÇÃO DA FICHA NUMERO 1 FEITA NO DIA 16/10/2020
 OPERAÇÕES BASICAS DE C 
 PRIMEIRA AULA PRESENCIAL DE FUNDAMENTOS DE PROGRAMAÇÃO
 */

#include <stdio.h>
#include <stdlib.h>


//exercio 1
int main() {
    
   int numero1, numero2;

   printf("Digite o 1 numero: ");
   scanf(" %d", &numero1);
   
   printf("Digite o 2 numero: ");
   scanf(" %d", &numero2);
   
   printf("A soma de %d com %d é %d", numero1, numero2, numero1 + numero2);
  
   return 0;
 }      

/*//exercicio 2
 
const int NUMERO_DE_ALUNOS = 3;
 
int main() { 
    
    int aluno1, aluno2, aluno3;
    
    printf("Insira a idade do aluno 1: ");
    scanf("%d", &aluno1);
    
    printf("Insira a idade do aluno 2: ");
    scanf("%d", &aluno2);
    
    printf("Insira a idade do aluno 3: ");
    scanf("%d", &aluno3);
    
    printf("A média de idades é: %.2f", (aluno1 + aluno2 + aluno3) / (float) NUMERO_DE_ALUNOS);
    
    return 0;
}
*/
/* //exercico 3
int main() {
    
    float numero1, numero2;
    
    printf("Insira o primeiro numero: ");
    scanf("%f", &numero1);
    
    printf("Insira o segundo numero: ");
    scanf("%f", &numero2);
    
    printf("%f + %f = %.2f  \n", numero1, numero2, (numero1 + numero2));
    printf("%f - %f = %.2f  \n", numero1, numero2, (numero1 - numero2));
    printf("%f * %f = %.2f  \n", numero1, numero2, (numero1 * numero2));
    printf("%f / %f = %.2f  \n", numero1, numero2, (numero1 / numero2));       
}
*/
/* // exercicio 4
int main(){

    float raio, base, altura;
    
    const PI = 3.14;
    
    printf("Insira o raio numero: ");
    scanf("%f", &raio);
    
    printf("Insira o base numero: ");
    scanf("%f", &base);
    
    printf("Insira o altura numero: ");
    scanf("%f", &altura);
    
    printf("O perimetro da circunferencia é: %.2f cm \n", PI * raio * raio);
    printf("A area do triangulo é: %.2f cm^2\n", (base * altura) / 2);
    
}
*/
//exercicio 5
/*
int main() {
    int a = 2, b = 4, c = 3, d;
    d = (((a = a + 1)+ ++b) * c++) % 2;
    printf("%d, %d, %d, %d", a, b, c, d);
    return 0;
}
*/
