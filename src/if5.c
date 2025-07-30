#include <stdio.h>

int main (){
    int nota;
    printf("Digite a nota do aluno:");
    scanf("%d", &nota);

    if (nota >= 90){
        printf("Conceito: A\n");
        
    }else if(nota >= 80){
        printf("conceito: b\n");

    }else if (nota >= 70){
        printf("Conceito c\n");
    }else if (nota >= 60){
        printf("Conceito: D\n");

    }else {
        printf("conceito: F\n");
    }

    return 0;

}
