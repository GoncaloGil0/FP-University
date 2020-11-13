#include <stdio.h>
#include <stdlib.h>

int main() {

    
    int cargo, numero_dias, codigo;
    float vencimento, taxa, vencimento_final, alimentacao, irs, seguranca_social_encargo_funcionario, seguranca_social_encargo_patronal;
    float valor_dia, valor_irs, valor_bonus, valor_alimentacao, valor_seguranca_social_encargo_funcionario, valor_seguranca_social_encargo_patronal;
    char resposta;
    
    do {
        
        printf("Digite o seu codigo de funcionario: ");
        scanf("%d", &codigo);
        
        if (codigo == 0){
            break;
        }
        
        do {
            printf("\n| 1) Empregado \n");
            printf("| 2) Chefe \n");
            printf("| 3) Administrador \n");
            printf("| Digite o numero da opção do seu cargo na empresa XPTO:  ");
            scanf("%d", &cargo);
        } while ( cargo < 0 || cargo > 3);
        
        if (cargo == 0){
            break;
        }
        
        do{
            printf("\n| Digite o numero de dias trabalhados: ");
            scanf("%d", &numero_dias);
        } while ( numero_dias < 0 || numero_dias > 31); 
        
        if (numero_dias == 0){
            break;
        }
    
        if (cargo == 1 ){ //caso seja empregado
            valor_dia = 40;
            valor_alimentacao = 5;
            valor_seguranca_social_encargo_funcionario = 0.11;
            valor_seguranca_social_encargo_patronal = 0.2375;


        } else if (cargo == 2) { // caso seja chefe

            valor_dia = 60;
            valor_alimentacao = 7.5;
            valor_seguranca_social_encargo_funcionario = 0.11;
            valor_seguranca_social_encargo_patronal = 0.2375;

        } else { // caso seja administrador
            valor_dia = 80;
            valor_alimentacao = 7.5;
            valor_seguranca_social_encargo_funcionario = 0.09;
            valor_seguranca_social_encargo_patronal = 0.21;
        }
        
        if ( numero_dias > 20 ){
            vencimento = ((numero_dias * valor_dia) * 0.05) + (numero_dias * valor_dia);
        } else if ( numero_dias < 20 && numero_dias > 17){
            vencimento = ((numero_dias * valor_dia) * 0.02) + (numero_dias * valor_dia);
        } else {
            vencimento = numero_dias * valor_dia;
        }
        
        if (vencimento < 1000){
            taxa = 0.10;
        } else if (vencimento > 1000 && vencimento < 2500) {
            taxa = 0.20;
        } else {
            taxa = 0.20;
        }
        
        alimentacao = valor_alimentacao * numero_dias;
        seguranca_social_encargo_funcionario = vencimento * valor_seguranca_social_encargo_funcionario;
        seguranca_social_encargo_patronal = vencimento * valor_seguranca_social_encargo_patronal;
        irs = vencimento * taxa;
        
        vencimento_final = (vencimento + alimentacao) - (irs + seguranca_social_encargo_funcionario + seguranca_social_encargo_patronal );

        printf("\n| Funcionario nº %d \n", codigo );
        printf("| Valor iliquido a receber:     %.1f euros \n", vencimento);    
        printf("| Subsidio de alimentação:      %.1f euros \n", alimentacao );

        printf("\nDeseja continuar? ");
        scanf(" %c", &resposta);
        
    } while (resposta != 83 || resposta != 115);
    
    return (0);
}

