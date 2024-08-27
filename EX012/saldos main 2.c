#include <stdio.h>

int main() {
    int num_conta;
    float saldo, debito, credito, saldo_atual;

    printf("Informe o numero da conta: ");
    scanf("%d", &num_conta);

    printf("Informe o saldo: ");
    scanf("%f", &saldo);

    printf("Informe o debito: ");
    scanf("%f", &debito);

    printf("Informe o credito: ");
    scanf("%f", &credito);

    saldo_atual = saldo - debito + credito;

    printf("Saldo atual: %.2f\n", saldo_atual);

    if (saldo_atual >= 0) {
        printf("Saldo Positivo\n");
    } else {
        printf("Saldo Negativo\n");
    }

    return 0;
}
