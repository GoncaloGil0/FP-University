/*
ESTE DOCUMENTO CONTEM A RESOLUÇÃO DA FICHA NUMERO 1 PARTE 2 
OPERAÇÕES BASICAS DE C 
 */

#include <stdio.h>
#include <stdlib.h>


int main_ex1() {
    
    char letra;
    
    printf("Digite uma letra: ");
    letra = getchar();
    
    if (letra == 'A' || letra == 'a'){
        printf("A letra depois de \"%c\" é \"%c\"",letra,letra+1);
    }else if (letra == 'z' || letra == 'Z'){
        printf("A letra antes de \"%c\" é \"%c\"",letra,letra--);
    }else{
        printf("A letra antes de \"%c\" é \"%c\" e depois é \"%c\"",letra, letra-1,letra+1);
    }
    return 0;
}

int main_ex2() {

    const int DIVISOR = 3;

    float media, numero1, numero2, numero3;
        
    printf("Valor numero 1: ");
    scanf("%f", &numero1);

    printf("Valor numero 2: ");
    scanf("%f", &numero2);

    printf("Valor numero 3: ");
    scanf("%f", &numero3);

    media = (numero1 + numero3 + numero2) / DIVISOR;
    
    printf("Media = %.2f \n",media);
    printf("Media ponderada a 20%% = %.2f \n",media * 0.20);
    printf("Media ponderada a 30%% = %.2f \n",media * 0.30);
    printf("Media ponderada a 50%% = %.2f \n",media * 0.50);
    
    return 0;
}

int main_ex3() {
    
    int valor1, valor2;
        
    printf("Valor valor 1: ");
    scanf("%d", &valor1);

    printf("Valor valor 2: ");
    scanf("%d", &valor2);
    
    //falta fazer a inversao de var AQUI!!
    
    printf("\nValor 1 = %d \nValor 2 = %d",valor1,valor2); 

    return 0;
}

int main_ex4() {
    
    float valor1, valor2, valor3, soma;
        
    printf("Preço numero 1: ");
    scanf("%f", &valor1);
    
    printf("Preço numero 2: ");
    scanf("%f", &valor2);
    
    printf("Preço numero 2: ");
    scanf("%f", &valor3);
    
    soma = valor1 + valor2 + valor3;
    
    printf("Valor a pagar com desconto de 10%% = %.2f euros",soma - (soma * 0.10));
    
    return 0;
}

int main_ex5() {
    
    int minuto, segundo, minuto_total = 0, segundo_total = 0, i=1, horas_final = 0, minutos_final = 0, segundos_final = 0;
    
    while (i <= 5) {
        printf("Apresente a duraçao da  %dª musica (min.seg): ",i);
        scanf("%d.%d", &minuto,&segundo); 
        
        while (minuto > 60 || segundo > 60) {
            printf("        !Aprensente um valor valido!    \n");
            printf("Apresente a duraçao da  %dª musica (min.seg): ",i);
            scanf("%d.%d", &minuto,&segundo);
        }
        
        minuto_total = minuto_total + minuto;
        segundo_total = segundo_total + segundo;
               
        i++;
    }

    //redução de minutos em horas e segundos em minuitos
    if (minuto_total >= 60 || segundo_total >= 60) {
        
        // calculos dão errado, calculo do resto mal feito
        
        if ( segundo_total >= 60){
            minutos_final = minuto_total + (segundo_total / 60);
            segundos_final = segundo_total % 60;
        } else {
            segundos_final = segundo_total;
        }
        
        if (minuto_total >= 60){
            horas_final = horas_final + (minuto_total / 60);
            minutos_final = minuto_total % 60;
        } else {
            minutos_final == minuto_total;
        }
        
        if (minutos_final >= 60){
            horas_final = horas_final + (minutos_final / 60);
            minutos_final = minutos_final % 60;
        }
        
        printf("O album tem %d:%d:%d",horas_final, minutos_final, segundos_final);
    } else {
        
        printf("O album tem %d minutos e %d segundos",minuto_total, segundo_total);
    }
    
    return 0;
}