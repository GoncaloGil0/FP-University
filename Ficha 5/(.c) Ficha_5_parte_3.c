#include <stdio.h>
#include <stdlib.h>
#include "funcoes.h"

float vencimento_mes(int dias, int valor, float tabela[][10], int bonus, int mes){
    return(((dias * valor) * bonus) + (tabela[mes][2] * valor));
}

float alimentacao(int alimenta, int n_dias){
    return (alimenta * n_dias);
}

float irs(float venc, float taxa){
    return(venc * taxa);
}

float seguranca_social_encargo_funcionario(float venc, float social){
    return(venc * social);
}

float seguranca_social_encargo_patronal(float venc, float social){
    return(venc * social);
}

float vencimento_final(float venc, int alim, float irss, float social_f, float social_p){
    return ((venc + alim) - (irss + social_f + social_p));
}

float encargo_empresa(float venc, int alimentacao){
    return(venc + alimentacao);

}

int pergunta(char string[], int max, int min){
    int numero;
    
    do{
        printf("%s", string);
        scanf("%d", &numero);
        
        if (numero == -1){
            exit (0);
        }
    } while ( numero < min || numero > max);
    
    return (numero);
}