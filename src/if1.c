#include <stdio.h>
int main (){
int pontos= 55;
char conceito;
if (pontos>=90){// primeira condição 
    conceito= 'A';
}else if (pontos >= 80){//Segunda condição, so avaliando se a primeira for falsa
    conceito= 'B';
}else if(pontos>= 70){//Terceira condição, só avaliando se as anteriores forem falsa
    conceito='c';
}else if(pontos>= 60){// quarta condição
    conceito='d';
}else{// se nenhuma das condições acima for verdadeira
    conceito= 'f';
}
printf("Sua pontuação: %d -> conceito: %c\n", pontos,conceito);
return 0;
}