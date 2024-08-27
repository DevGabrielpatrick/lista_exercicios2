#include <stdio.h>

int main() {
    float salario_fixo, valor_vendas, comissao, salario_total;

    printf("Digite o salario fixo do vendedor: R$ ");
    scanf("%f", &salario_fixo);

    printf("Digite o valor total das vendas efetuadas: R$ ");
    scanf("%f", &valor_vendas);

    if (valor_vendas <= 1500.00) {
        comissao = valor_vendas * 0.03;
    } else {
        comissao = 1500.00 * 0.03 + (valor_vendas - 1500.00) * 0.05;
    }

    salario_total = salario_fixo + comissao;

    printf("O salario total do vendedor e: R$ %.2f\n", salario_total);

    return 0;
}
