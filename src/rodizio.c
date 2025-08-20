#include <stdio.h>
int main(){
    int placa;
    printf("digite o numero final da placa do seu veiculo e precione enter\n");
    scanf("%d",&placa);
    if(placa == 1){
        printf("rodizio de Segunda-feira\n");
    }
    else if (placa == 2){
        printf("rodizio de Segunda-feira\n");
    }
    else if ( placa == 3){
        printf("rodizio de Terça-feira\n");
    }
    else if(placa == 4){
        printf("rodizio de Terça-feira\n");
    }
    else if(placa == 5){
        printf("rodizio de Quarta-feira\n");
    }
    else if(placa == 6){
        printf("rodizio de Quarta-feira\n");
    }
    else if(placa == 7){
        printf("rodizio de Quinta-Feira\n");
    }
    else if(placa == 8){
        printf("rodizio de Quinta-feira\n");  
    }
    else if(placa == 9){
        printf("rodizio de Sexta-feira\n");
    }
    else if(placa == 0){
        printf("rodizio de Sexta-feira\n");
    }
    else{
        printf("final de placa invalida\n");
    }
    return 0;
}