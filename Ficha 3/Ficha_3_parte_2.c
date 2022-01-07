

#include <stdio.h>
#include <stdlib.h>

int main_ex1() {

        float numero1 = 0, numero2 = 0;
        char operador, opcao;
        
    while (1) {     
        
        printf("Digite o primeiro numero: ");
        scanf("%f", &numero1);
        
        printf("Digite a operação (+,-,*,/): ");
        scanf(" %c", &operador);
        
        printf("Digite o segundo numero: ");
        scanf("%f", &numero2);

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
        
        printf("Deseja continuar? ");
        scanf(" %c", &opcao);
        
        if (opcao == 83 || opcao == 115){
            continue;
        } else if (opcao == 78 || opcao == 110){
            break;
        } else {
            printf("Valor Invalido");
            break;
        }
        
    }
    
    return 0;
}

int main_ex2() {
    
    while (1) {
    
        int opcao = 0;

        printf("1: Criar \n");
        printf("2: Atualizar \n");
        printf("3: Eliminar \n");
        printf("4: Sair \n");
        printf("\nEscolha uma das opções: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("\nEscolheu \"Criar\"\n");
                break;
            case 2:
                printf("\nEscolheu \"Atualizar\"\n");
                break;
            case 3:
                printf("\nEscolheu \"Eliminar\"\n");
                break;
            case 4:
                printf("\n");
                break;
            default:
                continue;

        }
    }
    return 0;
}

int main_ex3(){

    int numero1, numero2, tentativas;
    
    do {
        printf("\nJogador 1 \n");
        printf("Digite o numero: ");
        scanf("%d", &numero1);
        
    } while ( numero1 < 0 || numero1 > 100);
    
    do {
        printf("\nJogador 2 \n");
        printf("Digite o numero: ");
        scanf("%d", &numero2);
        
        if (numero1 > numero2){
            printf("Numero do jogador 1 é maior\n");  
        } else if (numero1 < numero2) {
            printf("Numero do jogador 1 é menor\n");        
        }
        
        tentativas++;
            
    } while (numero1 != numero2);
    
    printf("\nFINALMENTE!!");
    printf("\nForam necessarias %d", tentativas);
    

    return 0;
}

int main_ex4() {
  
  int divisor, numero; 
  int contagem = 0;
  
  do {
    printf("Digite um número inteiro e positivo: ");
    scanf("%d", &numero);
  } while (numero <= 0);
  
  for (divisor = 2; divisor < numero; divisor++) {
        if (numero % divisor == 0) { 
            contagem++;
        }
  }
    
  if (contagem == 0) {
    printf("O número %d é primo!", numero);
  } else {
    printf("O número %d não é primo!", numero);
  }
  
  return 0;
}

int main_ex5() {
    
    int candidato_1 = 0, candidato_2 = 0, candidato_3 = 0, candidato_4 = 0, candidato_5 = 0, nulo = 0, branco = 0, opcao;
    
    do {
        
        printf("Digite o candidato no qual quer votar: ");
        scanf("%d", &opcao);
        
        switch (opcao){

            case 1: 
                candidato_1++;
                continue;   
            case 2: 
                candidato_2++;
                continue;
            case 3: 
                candidato_3++;
                continue;
            case 4: 
                candidato_4++;
                continue;
            case 5: 
                candidato_5++;
                continue;
            case 0: 
                branco++;
                continue;
            case 9: 
                nulo++;
                continue; 
            case -1:
                continue;
            default :
                printf("\n Digitou um valor invalido \n");
                continue;
        }
              
    } while (opcao != -1);

    printf("\n| Candidato 1: %d votos \n", candidato_1);
    printf("| Candidato 2: %d votos \n", candidato_2);
    printf("| Candidato 3: %d votos \n", candidato_3);
    printf("| Candidato 4: %d votos \n", candidato_4);
    printf("| Candidato 5: %d votos \n", candidato_5);
    printf("| Branco: %d votos \n", branco);
    printf("| Nulo: %d  votos \n", nulo);
    
    return 0;
}