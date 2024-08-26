#include <stdio.h>

int main(){
    int valor;

    printf("Digite um valor: ");
    scanf("%d",&valor);

    if(valor >= 0){
        printf("%d e um numero positivo;",valor);
    }
    else{
        printf("%d e um numero negativo",valor);
    }
    return  0;
}