#include <stdio.h>
int main(){
    int opcao;
    printf("Selecione uma opção\n");
    printf("1- Ver saldo\n");
    printf("2- Fazer Saque\n");
    printf("3- Fazer Depósito\n");
    printf("4- Sair\n");
    printf("Digite sua opção");
    scanf("%d", &opcao);//Lê a opção do usuario
    if(opcao == 1){
        printf("Você escolheu ver 'Ver Saldo'.\n");
        //Lógica para ver saldo
    }else if (opcao == 2){
        printf("Você escolheu 'fazer saque'.\n");
        //logica para fazer saque
    }else if(opcao == 3){
        printf("Você escolheu 'fazer o Depósito'.\n");
        //Lógica para fazer deposito
    }else if(opcao == 4){
        printf("Saindo do progama.Até mais!!\n");
    }else{
        printf("Opção inválida. Por favor, escolha um numero entre 1 a 4.\n");
    }
    return 0;    
}