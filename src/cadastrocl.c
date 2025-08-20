#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../lib/criararquivo.h"
 
//Vamos criar uma estrtura(struct) que
//represneta o cliente, com seus respectivos
//dados.
struct Cliente{
    char nome[100];
    char email[100];
    int idade;
};
 
int main(){
    system("clear");
    //Vamos definir uma variável do tipo struct de Cliente
    //assim podemos acessar as propriedades da estrutura cliente
    struct Cliente cli;
    //scanf("%s",cli.nome);
    printf("Digite o nome do cliente: \n");
    fgets(cli.nome,sizeof(cli.nome), stdin);
 
    printf("Digite o email do cliente: \n");
    fgets(cli.email,sizeof(cli.email),stdin);
 
    printf("Digite a idade do cliente: \n");
    scanf("%d",&cli.idade);
 
    printf("%s - %s - %d anos\n",cli.nome,cli.email,cli.idade);
 
    //Realizar a concatenação (junção de elementos distintos) para
    //gravar os dados de uma vez
    char dados_cliente[100]= {"Nome: "};
    char nome[50] = {"Nome: "};
    strcat(dados_cliente, cli.nome);
    strcat(dados_cliente,nome);

    char email[30] = ("Email: ");
    strcat(email,cli.email);
    strcat(dados_cliente,email);

    //Vamos converter a idade, que é um valor inteiro()int , para string 
    //Assim será possivel concatenar o texto idaede em valor real da 
    //idade do cliente 
    // utilizamos um novo array de chars que ira guardar o número ,agora 
    //no formato string. E, também usaremos o comando springf(string Print format)
    //o inicio do comando pede o array de chars para guardar o resultadodos
    // da conversão, o segundo item do comando pede formato original do valor 
    // a ser convertido, neste caso %d decimal. E, o ultimo valor é o numero
    // que sera convertido (cli.idade)

    char idade[30] = ("idade: ");
    char idadecli[20];
    char id= sprintf(idadecli,"%d",cli.idade);

 
   
 
    char *resultado = criar("files/cadastro.txt",dados_cliente);
    printf("%s\n", resultado);
 
    return 0;
}