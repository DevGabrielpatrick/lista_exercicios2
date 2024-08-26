#include <stdio.h>

int main() {
    float calculo_media, nota1, nota2;
    const float NOTA_NECESSARIA = 7.0;

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);  

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);  

    calculo_media = (nota1 + nota2) / 2;  

    if (calculo_media >= NOTA_NECESSARIA) {
        printf("Parabens, voce esta aprovado com a media %.2f\n", calculo_media); 
    } else {
        printf("Infelizmente, voce nao atingiu a media necessaria. Sua media foi %.2f\n", calculo_media);  
    }

    return 0;
}
