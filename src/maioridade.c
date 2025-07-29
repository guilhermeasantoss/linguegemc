#include <stdio.h>
int main(){
    int idade;
    printf("digite sua idade e tecle enter\n");
    scanf("%d",&idade);
if (idade > 17)
{printf("acesso concedido você tem %d anos de idade ",idade);

}
else {
    printf("Você não esta liberado por não ter o limite de idade %d  \n",idade);
}    
return 0;
}