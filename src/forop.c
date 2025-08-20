#include <stdio.h>
#include<stdlib.h>

int main (){
    int i,inicial,final;
    printf("Digite um numero inicial\n");
    scanf("%d",&inicial);
    printf("Digite valor final\n");
    scanf("%d",&final);
    for(i = inicial;i<= final;i++){
        if(i%2 == 0){
            printf("%d\n",i);
        }
    }
    return 0;
}