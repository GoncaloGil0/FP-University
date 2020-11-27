#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int cargo, numero_dias, codigo;
    float vencimento, taxa, vencimento_final, alimentacao, irs, seguranca_social_encargo_funcionario, seguranca_social_encargo_patronal;
    
    printf("Digite o seu codigo de funcionario: ");
    scanf("%d", &codigo);
    
    printf("\n| 1) Empregado \n");
    printf("| 2) Chefe \n");
    printf("| 3) Administrador \n");
    printf("| Digite o numero da opção do seu cargo na empresa XPTO:  ");
    scanf("%d", &cargo);
   
    printf("\n| Digite o numero de dias trabalhados: ");
    scanf("%d", &numero_dias);
    
    if (cargo == 1 ){ //caso seja empregado
       
        vencimento = numero_dias * 40;
        alimentacao = numero_dias * 5;
        seguranca_social_encargo_funcionario = vencimento * 0.11;
        seguranca_social_encargo_patronal = vencimento * 0.2375;
        
    } else if (cargo == 2) { // caso seja chefe
        
        vencimento = numero_dias * 60;
        alimentacao = numero_dias * 7.5;
        seguranca_social_encargo_funcionario = vencimento * 0.11;
        seguranca_social_encargo_patronal = vencimento * 0.2375;
        
    } else { // caso seja administrador
        
        vencimento = numero_dias * 80;
        alimentacao = numero_dias * 7.5;
        seguranca_social_encargo_funcionario = vencimento * 0.09;
        seguranca_social_encargo_patronal = vencimento * 0.21;
    }
    
    if (vencimento < 1000){
        taxa = 0.10;
        irs = vencimento * taxa;
    } else {
        taxa = 0.20;
        irs = vencimento * taxa;
    }
   
    vencimento_final = (vencimento + alimentacao) - (irs + seguranca_social_encargo_funcionario + seguranca_social_encargo_patronal );
    
    printf("\n| Funcionario nº %d \n\n", codigo );
    printf("| Valor iliquido a receber:     %.1f euros \n", vencimento);    
    printf("| Subsidio de alimentação:      %.1f euros \n", alimentacao );
    printf("| Valor para o IRS:             %.1f euros (taxa aplicada de %.0f%% \n", irs, taxa*100 );
    printf("| Segurança social:             %.1f euros (encago pessoal) \n", seguranca_social_encargo_funcionario  );
    printf("| Segurança social:             %.1f euros (entidade patronal) \n", seguranca_social_encargo_patronal);
    printf("| Valor liquido a receber:      %.1f euros \n", vencimento_final  );
    
    return (0);
}

