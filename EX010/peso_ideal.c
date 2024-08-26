#include <stdio.h>

int main() {
    float altura, peso_ideal;
    char sexo;

    printf("Digite a sua altura: ");
    scanf("%f", &altura);

    printf("Digite o seu sexo, \"M\" para masculino e \"F\" para feminino: ");
    scanf(" %c", &sexo);  // Adicionei um espaço antes de %c para consumir qualquer caractere de nova linha residual

    if (sexo == 'M' || sexo == 'm') {
        peso_ideal = (72.7 * altura) - 58;
        printf("Seu peso ideal e: %.2f\n", peso_ideal);
    }
    else if (sexo == 'F' || sexo == 'f') {
        peso_ideal = (62.1 * altura) - 44.7;
        printf("Seu peso ideal e: %.2f\n", peso_ideal);
    }

    return 0;
}
