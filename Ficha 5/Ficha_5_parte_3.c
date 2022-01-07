#include <stdio.h>
#include <stdlib.h>
#include <string.h> // biblioteca para fazer a operação de copia de strings (linha 24 e 46)
#include "funcoes.h"

//Tanto a header como o ficheiro .c com as funções encontam-se juntos com o resto dos ficheiros com o nome de:
// (.c) Ficha_5_parte_3.c 
// (header.h ) Ficha_5_parte_3.h

int main() {
    
    //variaveis 
    int cargo, codigo_user, mes, maximo, minimo;
    float vencimento, vencimento_anual=0, taxa, Vencimento_f, Comer, imposto, SF, SE, numero_dias;
    float empresa_encargo_anual = 0, valor_dia, bonus, empresa_encargo, valor_alimentacao, valor_seguranca_social_encargo_funcionario, valor_seguranca_social_encargo_patronal;
    char resposta, string[100], nome[30];
    char* meses[12] = {"| Janeiro", "| Fevereiro", "| Março", "| Abril", "| Maio", "| Junho", "| Julho", "| Agosto", "| Setembro", "| Outubro", "| Novembro", "| Dezembro"};
    
    //Tabela
    float tabela[12][10]; // linhas = meses; colunas = tipo de valor (IRS, bonus, etc)

    printf("| Bem vindo!\n");
    printf("| A qualquer altura pode terminar o programa introduzindo o numero \"-1\"\n\n");
    
    do {  
        
        //DADOS DO UTILIZADOR
        printf("| DADOS DO UTILIZADOR\n");
        strcpy(string, "| Digite o seu codigo [0-9999]: ");
        maximo = 9999;
        minimo = 0;
        codigo_user = (pergunta(string, maximo, minimo));

        printf("| Digite o seu nome: ");
        scanf(" %s", nome);
      
        do {
            printf("| 1)Empregado 2)Chefe 3)Administrador\n");
            printf("| Digite o numero da opção do seu cargo na empresa XPTO:  ");
            scanf("%d", &cargo);
        } while (cargo < -1 || cargo > 3); 

        if (cargo == -1){
            return 0;
        }
        
        // DIAS TRABALHADOS        
        printf("\n| DIAS TRABALHADOS");
        for (mes = 0; mes < 12; mes++){

            printf(" \n%s\n", meses[mes]);
            strcpy(string, "| Digite o numero de dias trabalhados: ");
            maximo = 31;
            minimo = 0;
            
            tabela[mes][1] = mes+1; //coluna que repensenta os meses
            tabela[mes][2] = (pergunta(string, maximo, minimo)); // coluna dos dias trabalhados
            
        }
        
        //SELEÇÃO DO CARGO
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
        
        // CALCULOS POR MES
        for(mes = 0; mes < 12 ; mes++){
            
            // CALCULO DO BONUS
            if ( tabela[mes][2] > 20 ){
                bonus = 0.05;
            } else if ( tabela[mes][2] < 20 && numero_dias > 17){
                bonus = 0.02;
            } else {
                bonus = 0;
            }
            
            // CALCULO DO VENCIMENTO
            vencimento = vencimento_mes(numero_dias, valor_dia, tabela, bonus, mes);
            
            // CALCULO DA TAXA
            if (vencimento < 1000){
                taxa = 0.10;
            } else if (vencimento > 1000 && vencimento < 2500) {
                taxa = 0.20;
            } else {
                taxa = 0.20;
            }

            // CALCULOS 
            Comer = alimentacao(valor_alimentacao, numero_dias);
            SF = seguranca_social_encargo_funcionario(vencimento, valor_seguranca_social_encargo_funcionario);
            SE = seguranca_social_encargo_patronal(vencimento, valor_seguranca_social_encargo_patronal);
            imposto = irs(vencimento, taxa);
            Vencimento_f = vencimento_final(vencimento, Comer, imposto, SF, SE);
            empresa_encargo =  encargo_empresa(vencimento, Comer);
            
            // INSERIR NA TABELA
            tabela[mes][3] = vencimento;
            tabela[mes][4] = Comer;
            tabela[mes][5] = imposto;
            tabela[mes][6] = SF;
            tabela[mes][7] = SE;
            tabela[mes][8] = Vencimento_f;
            tabela[mes][9] = empresa_encargo;
            
        }
        
        //CALCULO DO VENCIMENTO FINAL
        for(mes = 0; mes < 12 ; mes++){
            vencimento_anual  = vencimento_anual + tabela[mes][8];
        }  
        
        //CALCULO DO ENCARGO DA EMPRESA FINAL
        for(mes = 0; mes < 12 ; mes++){
            empresa_encargo_anual  = empresa_encargo_anual + tabela[mes][9];
        }  

        
        /* print da tabela para fins de verificar se tudo foi feito corretamente
        for(int x = 0; x < 12 ; x++){
            printf("\n");
            for (int y = 1; y < 10; y++){
                printf(" |%.1f| ", tabela[x][y]);
                }
        }*/
        
        
        // OUTPUT 
        printf("\n| VALORES");
        printf("| Funcionario: %s nº %d \n", nome, codigo_user );
        printf("| Valor iliquido anual:     %.1f euros \n", vencimento_anual);    
        printf("| Encargo da empresa:       %.1f euros \n", empresa_encargo_anual);
        
        
        // CONDIÇÃO DE SAIR OU CONTINUAR DO PROGRAMA
        printf("\nDeseja continuar s/n? ");
        scanf(" %c", &resposta);
        printf("\n");
        
        if (resposta != 78 || resposta != 110){
            return (0);
        }
        
    } while (1);
}

