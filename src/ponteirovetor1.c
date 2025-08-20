#include <stdio.h>
#include<stdlib.h>
int main(){
    system("clear");
    int idades[5]={15,18,56,41,5};
    printf("%d - %p\n",idades[0],&idades[0]);
    printf("%d - %p\n",idades[1],&idades[1]);
    printf("%d - %p\n",idades[2],&idades[2]);
    printf("%d - %p\n",idades[3],&idades[3]);
    printf("%d - %p\n",idades[4],&idades[4]);
    printf("================for==========\n");
    int i;
    for(i=0; i< 5; i++){
        printf("%d - %p\n",idades[i],&idades[i]);
    }
    printf("============Ponteiro===========\n");
    //vamos obter a posição de memoria do primeiro elemento do vetor 
    //e atribiu ao ponteiro p
    int *p = idades;
    printf(" O primeiro elemento do array é %d - %p\n", *p , p);
    // Incrementar o ponteiro para ir ao proximo elemento 
    p++;
    printf("o segundo elemento do array é %d - %p", *p, p);
    printf("============== for com ponteiro ======================================\n");
    int *ptr =idades;
    for( i = 0 ; i < 5 ; i++ ){
        printf("O %d º elemento - %d - %p\n" , i+1 , *ptr , ptr );
        ptr++;
    }
    return 0;
}