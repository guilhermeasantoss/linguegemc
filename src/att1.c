#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../lib/att.h"

struct funcionario{
    char nome[100];
    float salario;
    float convenio;
    float premio;
    float salarioliquido;

};

int main(){
    system("clear");
    struct funcionario fun;
    printf(" Digite o nome do funcionário: \n");
    fgets(fun.nome,sizeof(fun.nome),stdin);

    
    printf("Digite o salario do funcionário:\n");
    scanf("%f", &fun.salario);
    

    printf("Digite o desconto de convênio  do funcionário:\n");
    scanf("%f", &fun.convenio);

    printf("Digite o prêmio do funcionário:\n");
    scanf("%f", &fun.premio);

    printf(" O desconto de convenio é %.2f\n", jurosimples(fun.salario,fun.convenio));
    
    printf(" O valor do premio é %.2f\n", jurosimples(fun.salario,fun.premio));

    fun.salarioliquido = fun.salario + jurosimples(fun.salario,fun.premio) - jurosimples(fun.salario,fun.convenio);
    
    printf("O salário liquido é %2.f\n",fun.salarioliquido);

    // Vamos criar uma posição com textos literais e variaveis para
    // guardar em arquivo de texto.
    char dados_funcionarios[100];

    char nome[30] = {"\nNome :"};
    strcat(nome,fun.nome);
    strcat(dados_funcionarios,nome);

    // criamos o vetor salário para armazenar o texto Salário com R$
    // e juntar (concatenar) com o valor do salario 
    char salario[20] = {"\nSalário : R$ "};
    char c_salario[10];
    // Foi criado o vetor  c_salário para guardar o valor do salário convertido 
    // em char somente assim, sera concatenado com  o texto salário R$

   
    sprintf(c_salario,"%.2f" , fun.salario);
    
    strcat(salario,c_salario);

    strcat(dados_funcionarios,salario);

    char salario_liquido[20] = {"\nliquido: R$ "};

    char c_salario_liquido[10];

    sprintf(c_salario_liquido,"%.2f" , fun.salario);

    strcat(salario,c_salario_liquido);

    strcat(dados_funcionarios,salario_liquido);



    char *reposta = criar("files/funcionario.txt", dados_funcionarios);
    printf("%s\n",reposta);

    return 0;
}