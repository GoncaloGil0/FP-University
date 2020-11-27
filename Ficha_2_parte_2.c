
#include <stdio.h>
#include <stdlib.h>


int main_ex1() {
    
    float numero1, numero2;
    char operador;
    
    printf("Digite a conta que quer fazer com dois numeros (+,-,*,/): ");
    scanf("%f %c %f", &numero1,&operador,&numero2);
    
    switch (operador) {
        case '-' :
            printf("%0.2f - %0.2f = %0.2f \n", numero1,numero2, numero1-numero2);
            break;
        case '*':
            printf("%0.2f * %0.2f = %0.2f \n", numero1,numero2, numero1*numero2);
            break;
        case '/':
            printf("%0.2f / %0.2f = %0.2f \n", numero1,numero2, numero1/numero2);
            break;
        default:
            printf("%0.2f + %0.2f = %0.2f \n", numero1,numero2, numero1+numero2);
    }
    return 0;
}

int main_ex2() {
    
    float saldo, montante, saldo_final;
    int operação;
    
    printf("Digite o saldo da conta: ");
    scanf("%f",&saldo);
    
    printf("\n1:creditar 2:debitar \n");
    printf("Digite a operação: ");
    scanf("%d", &operação);
        
    switch (operação){
        case 1:
            
            printf("\nDigite o montante a creditar: ");
            scanf("%f", &montante);
            
            saldo_final = saldo + montante;
            
            if ( saldo_final < 0 ){
                printf("\nNão é possivel realizar essa operação, o saldo fica negativo\n");
            }else{
                printf("\nÉ possivel a operação, saldo final = %0.2f \n", saldo_final);
            }
            
            break;
            
        case 2:
            
            printf("\nDigite o montante a debitar: ");
            scanf("%f", &montante);
            
            saldo_final = saldo - montante;
            
            if ( saldo_final < 0 ){
                printf("\nNão é possivel realizar essa operação, o saldo fica negativo\n");
            }else{
                printf("\nÉ possovel a operação, saldo final = %0.2f \n", saldo_final);
            }
            
            break;
        default:
            printf("Não digitou uma operação valida!");
           
    return 0;
            
   
    }
    
    
}

int main_ex3() {
    
    int opcao;

    printf("1: Criar \n");
    printf("2: Atualizar \n");
    printf("3: Eliminar \n");
    printf("4: Sair \n");
    printf("\nEscolha uma das opções: ");
    scanf("%d", &opcao);
    
    switch (opcao) {
        case 1:
            printf("\nEscolheu \"Criar\"");
            break;
        case 2:
            printf("\nEscolheu \"Atualizar\"");
            break;
        case 3:
            printf("\nEscolheu \"Eliminar\"");
            break;
        case 4:
            printf("");
            break;
        default:
            printf("\nEscolheu uma opção não valida");
    }
    return 0;
}

int main_ex4(){

    float nota1, nota2, media;
    
    printf("Apresente a nota 1: ");
    scanf("%f", &nota1);
    
    while ( 0 > nota1  ||  nota1 > 20){
        printf("\nApresente uma nota valida: ");
        scanf("%f", &nota1);
    }
    
    printf("\nApresente a nota 2: ");
    scanf("%f", &nota2);
    
    while (  0 > nota2  ||  nota2 > 20 ){
        printf("\nApresente uma nota valida: ");
        scanf("%f", &nota2);
    }
    
    media = (nota1 * 0.40) + (nota2 * 0.60);
    
    if (media < 9.5){
        printf("\nO aluno esta reprovado (media = %0.2f)", media);
    } else {
        printf("\nO aluno esta aprovado (media = %0.2f)", media);
    }
    
    
    
    
    
    return 0;
}

int main_ex5(){
    
    float x,y;
    
    printf("Digite as coordenadas \"x\" e \"y\": ");
    scanf("%f %f",&x,&y);
    
    if (x>0 && y>0){
        printf("1º Quadrante");
    } else if (x<0 && y>0){
        printf("2º Quadrante");
    }else if (x>0 && y<0){
        printf("4º Quadrante");
    }else if (x<0 && y<0){
        printf("3º Quadrante");
    }
        
    return 0;
}
