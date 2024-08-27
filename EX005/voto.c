#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {
    int nasc, anoAtual, mes, idade, conv, dif;

    printf("Digite o ano em que voce nasceu: ");
    scanf("%d", &nasc);
    printf("Digite o mes em que voce nasceu: ");
    scanf("%d", &mes);

    if (mes > 8)
    {
        conv = (24288 - mes) - (nasc * 12);
        idade = conv * 0.083333333333333;
        dif = mes - 8;
    }
    else {
        conv = 24288 - ((nasc * 12) - mes);
        idade = conv * 0.083333333333333;
    }


    if (idade >= 18)
    {
        printf("!PARABENS VOCE PODE VOTAR!\n\b");
    } 
    else {
        printf("Desculpe mas voce ainda nao pode votar espere mais %d meses para votar\n", dif);
    }

    return 0;
}