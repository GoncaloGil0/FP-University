#include <stdio.h>
#include <stdlib.h>

int main() {

    int codigo, numero_dias, despesas, total;

    
    printf("Digite o seu codigo de funcionario: ");
    scanf("%d", &codigo);
    
    printf("Digite o numero de dias trabalhados: ");
    scanf("%d", &numero_dias);
    
    printf("Valor liquido a receber: %d euros \n", numero_dias * 40 );
    printf("Subsidio de alimentação: %d euros \n", numero_dias * 5);
    printf("Valor para o IRS: %.2f euros \n", (float) (numero_dias * 40)* 0.10);
    printf("Segurança social: %.2f euros (encago pessoal) \n", (float) (numero_dias * 40)* 0.11);
    printf("Segurança social: %.2f euros (encargo patronal) \n", (float) (numero_dias * 40)* 0.2375);
    
    despesas = ((numero_dias * 40)* 0.11) + ((numero_dias * 40)* 0.2375) + ((numero_dias * 40)* 0.10);
    
    total = ((numero_dias * 40) + (numero_dias * 5))- despesas;
    
    printf("Valor liquido: %d \n", total);
    
    return (0);
}

