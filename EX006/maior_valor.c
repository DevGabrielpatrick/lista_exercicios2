#include <stdio.h>

int main() {
    int valor1, valor2;
    printf("Digite o primeiro numero: ");
    scanf("%i", &valor1);

    printf("Digite o segundo numero: ");
    scanf("%i", &valor2);

    if (valor1 > valor2) {
        printf("%i e o maior numero ", valor1);
    }
    else  {
        printf("%i e o maior numero ", valor2);
    }
    return 0;
}
