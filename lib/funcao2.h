#include<stdio.h>




void mensagem(){
    printf("olá, seja Bem-vindo\n");
}

void separador(){
    int i;
    for( i = 0; i < 50 ;i++ ){
        printf("=");
    }
}
int precototal (int qtd , int preco){
    return qtd * preco;

}

