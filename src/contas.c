#include <stdio.h>
#include <stdlib.h>

int main(){

    // Chamar o comando system ("clear") para limpar a tela do terminal
    system("clear");
    // Criar variavel para guardar dois numeros para as operações
    //Matematicas
    char ch;
    // Criar variavel para guardar dois numeros para as operações
    //Matematicas
    int a, b;
    printf(" DIgite uma operação matematica: + , - , * , /\n");
    // Vamos capturar o sinal digitado pelo usuario e alocar na variavel
    //ch. Usaremos o comando getchar, que vem na biblioteca stdlib
    // caso você queira usar o scanf, poderia ser feito da seguinte forma:
    // scanf ("%c , &ch");
    ch = getchar();
    printf ("Digite dois números separados e tecle enter:  \n");
    scanf("%d%d", &a,&b);

    switch (ch){
        case '+':{
            int c = a + b;
            printf(" O resultado da soma é %d\n" , c);
            
        }
        break;
        case '-' :{
            int d= a - b;
            printf ("O resultado da subtração é %d\n",d);
        }
        break;
        case '*':{
            int e = a * b;
            printf("O resulatado da multiplicação é %d\n,",e );
        }
        break;
        case '/':{
            int f = a / b;
            printf(" O resultado da divisão é %d\n" ,f);
        }
        break;
        default:
        printf ("Operação invalida\n");


    }
    return 0;
    }
