#include <stdio.h>
//* Vamos incluir uma nova habilidade de sistema que possui o comando clear*/
#include <stdlib.h>

int main(){
    // Vamos chamar a função de sistema para excutar  O comando clear (limpar a tela)
    system("clear");
    int nummes;
    printf("================== progama mês===================\n");
    printf("\n Pergunte ao progama. Qual é o mês de numero: ");
    scanf("%d",&nummes);
    printf("\n\n==============================================\n");
    switch(nummes){
        case 1:
        printf("Janeiro\n");
        break;
        case 2:
        printf("Fevereiro\n");
        break;
        case 3 :
        printf("Março\n");
        break;
        case 4:
        printf("Abril\n");
        break;
        case 5:
        printf ("Maio\n");
        break;
        case 6:
        printf ("junho\n");
        break;
        case 7:
        printf ("julho\n");
        break;
        case 8:
        printf("Agosto\n");
        break;
        case 9:
        printf("Setembro\n");
        break;
        case 10:
        printf("Outubro\n");
        break;
        case 11:
        printf("Novembro\n");
        break;
        case 12:
        printf("Dezembro\n");
        break;
        default:
        printf("este mês não existe!!\n");
  }
  return 0;

    }
