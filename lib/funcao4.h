#include <stdio.h>

void valor1( int num ){
    printf("%d\n - %p\n",num ,&num);
}
void valor2(int * num){
    printf("%d\n - %p\n",*num,num);
}