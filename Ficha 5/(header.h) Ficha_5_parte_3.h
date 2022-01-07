#ifndef FUNCOES
#define FUNCOES

float vencimento_mes(int dias, int valor, float tabela[][10], int bonus, int mes);
float alimentacao(int alimenta, int n_dias);
float irs(float venc, float taxa);
float seguranca_social_encargo_funcionario(float venc, float social);
float seguranca_social_encargo_patronal(float venc, float social);
float vencimento_final(float venc, int alim, float irss, float social_f, float social_p);
float encargo_empresa(float venc, int alimentacao);
int pergunta(char string[], int max, int min);

#endif

