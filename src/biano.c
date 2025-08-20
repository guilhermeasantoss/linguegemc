#include <stdio.h>

int main(){
    int ano;
    printf("digite um ano e tecle enter\n");
    scanf("%d",&ano);


    if( ano % 4 == 0){
        printf("este ano %d é bissexto\n",ano);
    }
    else{
        printf("esse ano não é bissexto\n");
    }
    return 0;
}