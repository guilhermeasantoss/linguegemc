#include <stdio.h>

int main() {
    int numero;
    printf("digite um número e tecle enter\n");
    scanf("%d",&numero);
    if(numero % 2 == 0){
        printf("O número %d é PAR", numero);
    }
    else{
        printf(" O número %d é IMPAR\n",numero);
    }
    return 0;
}
