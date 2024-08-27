#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {
    int hrInicio, hrFim, duracao;

    printf("Digite a hora de inicio da partida e a hora de termino da partida: ");
    scanf("%d %d", &hrInicio, &hrFim);

    duracao = 24 - (hrInicio - hrFim);
    if (hrInicio > 12 && hrFim < 12)
    {
        duracao = 24 - (hrInicio - hrFim);
    }
    else
    {
        duracao = hrFim - hrInicio;
    }
    
    printf("O jogo de xadrez durou %d horas!", duracao);

    return 0;
}