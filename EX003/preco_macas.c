#include <stdio.h>

int main(){
    float preco_maca,valor_total;
    int quantidade_maca;
    

    printf("As macas custam R$1.30 cada se forem compradas menos de uma duzia, e R$1.00 se forem compradas pelo menos 12.\ndigite quantas voce vai levar: ");
    scanf("%d",&quantidade_maca);

    if(quantidade_maca >= 12){
        preco_maca = 1;
        valor_total = preco_maca * quantidade_maca;
        printf("levando %d macas por %.2f real cada,o valor total e %.2f reais.",quantidade_maca,preco_maca,valor_total);
    }
    else if(quantidade_maca< 12){
        preco_maca = 1.3;
        valor_total = preco_maca * quantidade_maca;
        printf("levando %d macas por %.2f  cada,o valor total e %.2f reais.",quantidade_maca,preco_maca,valor_total);
    }
    else{
        printf("ERRO!")
    }
    return  0;
}