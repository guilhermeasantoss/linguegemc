#include<stdio.h>
#include<stdlib.h>
int cvbin(char x){
    int v = x;
    int i;
    int resto=0;
    int mult=1;
    int rs=0;
    while ( v > 0 ){
        resto = v%2;
        v=v /2;
        rs=mult*resto+rs;
        mult*=10;
        
    }
}
int main (){
    system (" clear");
    char nome [10] = "Vivi";
    char sobrenome [6]= "Momo";
    printf("Letra================Dec=======bin================Memória\n");
    int i;
    for(i= 0;i< 10 ; i++){






    printf("%c========================%d=======0%i=======%p\n",nome[i],nome[i],cvbin(nome[i]),&nome[i]);
    }
    return 0;
}
