#include <stdio.h>

int main() {
    int valor1, valor2;
    printf("Digite o primeiro numero: ");
    scanf("%i", &valor1);

    printf("Digite o segundo numero: ");
    scanf("%i", &valor2);

    if (valor1 > valor2) {
        printf("%i e maior que %i, logo %i,%i;", valor1,valor2,valor1,valor2);
    }
    else  {
        printf("%i e maior que %i, logo %i,%i;", valor2,valor1,valor2,valor1);
    }
    return 0;
}