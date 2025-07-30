#include <stdio.h>
int main(){
    int placa;
    printf(" Digite o numero final da placa de seu veículo\n ");
    scanf("%d",&placa);
    if( placa == 1 || placa == 2){
        printf("rodizio de segunda-feira\n");
    }
    else if( placa == 3 || placa == 4){
        printf("rodizio de terça-feira\n");
    }
    else if(placa == 5|| placa == 6){
        printf("rodizio de quarta-feira");
    }
    else if(placa == 7|| placa == 8){
        printf("rodizio de quinta-feira");
    }
    else if (placa == 9|| placa ==0){
        printf("rodizio de Sexta-feira");
    }
    else {
        printf("Final de placa invalido");
    }
    return 0;
    
}

