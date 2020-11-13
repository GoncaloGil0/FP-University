#include <stdio.h>
#include <stdlib.h>
    
int main() {

    //variaveis 
    int cargo, numero_dias, codigo, mes;
    float vencimento, vencimento_anual=0, taxa, vencimento_final, alimentacao, irs, seguranca_social_encargo_funcionario, seguranca_social_encargo_patronal;
    float valor_dia, bonus, encargo_empresa, valor_alimentacao, valor_seguranca_social_encargo_funcionario, valor_seguranca_social_encargo_patronal;
    char resposta;
    char nome[10];
    
    //DataBase
    int tabela[15][15]; // linhas = meses; colunas = tipo de valor (IRS, bonus, etc)

    printf("| Bem vindo!\n");
    printf("| A qualquer altura pode terminar o programa introduzindo o numero \"-1\"\n\n");
    do {
        
        printf("| Digite o seu codigo de funcionario: ");
        scanf("%d", &codigo);
        
        if (codigo == -1){
                return 0;
        }

        printf("| Digite o seu nome: ");
        scanf("%s", nome);
      
        do {
            printf("\n| 1)Empregado 2)Chefe 3)Administrador\n");
            printf("| Digite o numero da opção do seu cargo na empresa XPTO:  ");
            scanf("%d", &cargo);
        } while (cargo < -1 || cargo > 3); 

        if (cargo == -1){
                return 0;
        }
        
        printf("\n");
        
        for (mes = 0; mes != 12; mes++){
            do{
                printf("| Digite o numero de dias trabalhados no mes %d: ", mes+1);
                scanf("%d", &numero_dias);
            } while ( numero_dias < -1 || numero_dias > 31 || (mes == 1 && numero_dias > 28 )); 
 
            if (numero_dias == -1){
                return 0;
            }
            
            tabela[mes][0] = 0; 
            tabela[mes][1] = mes+1;
            tabela[mes][2] = numero_dias;
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
        
        for(mes = 0; mes < 12 ; mes++){
            
            if ( tabela[mes][2] > 20 ){
                bonus = 0.05;
            } else if ( tabela[mes][2] < 20 && numero_dias > 17){
                bonus = 0.02;
            } else {
                bonus = 0;
            }
            
            vencimento = ((numero_dias * valor_dia) * bonus) + (tabela[mes][2] * valor_dia);
            
            if (vencimento < 1000){
                taxa = 0.10;
            } else if (vencimento > 1000 && vencimento < 2500) {
                taxa = 0.20;
            } else {
                taxa = 0.20;
            }

            // CALCULOS 
            alimentacao = valor_alimentacao * numero_dias;
            seguranca_social_encargo_funcionario = vencimento * valor_seguranca_social_encargo_funcionario;
            seguranca_social_encargo_patronal = vencimento * valor_seguranca_social_encargo_patronal;
            irs = vencimento * taxa;
            vencimento_final = (vencimento + alimentacao) - (irs + seguranca_social_encargo_funcionario + seguranca_social_encargo_patronal );
            encargo_empresa =  vencimento + alimentacao;
           
            
            // INSERIR NO DATA_BASE 
            tabela[mes][3] = vencimento;
            tabela[mes][4] = alimentacao;
            tabela[mes][5] = irs;
            tabela[mes][6] = seguranca_social_encargo_funcionario;
            tabela[mes][7] = seguranca_social_encargo_patronal;
            tabela[mes][8] = vencimento_final;
            tabela[mes][9] = encargo_empresa;
        }
         
        for(mes = 0; mes < 15 ; mes++){
            vencimento_anual  = vencimento_anual + tabela[mes][8];
        }     
/*
        for(int x = 0; x < 12 ; x++){
            printf("\n");
            for (int y = 1; y < 10; y++){
                printf(" |%d| ",tabela[x][y]);
                }
        }
*/
        printf("\n| Funcionario: %s nº %d \n", nome, codigo );
        printf("| Valor iliquido anual:     %.1f euros \n", vencimento_anual);    
        printf("| Encargo da empresa:       %.1f euros \n", encargo_empresa );

        printf("\nDeseja continuar s/n? ");
        scanf(" %c", &resposta);
        printf("\n");
        
        if (resposta != 78 || resposta != 110){
            return (0);
        }
    } while (1);
}

