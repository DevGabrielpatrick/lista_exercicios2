#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float horas_trabalhadas, salario_por_hora, salario_total;
	float horas_extras;
	float valor_hora_extra;
	float salario_regular;
	
	printf("Digite o Numero de Horas Trabalhadas:");
	scanf("%f", &horas_trabalhadas);
	
	printf("Digite o Salario por Hora:");
	scanf("%f", &salario_por_hora);
	
	valor_hora_extra = salario_por_hora * 1.5;
	
	salario_regular = salario_por_hora *40*4;
	
	if("horas_trabalhadas > 160"){
		horas_extras = horas_trabalhadas - 160;
		salario_total = salario_regular + (horas_extras * valor_hora_extra);
	}else {
		salario_total = salario_regular; 
	}
	printf("O Salario Total do Funcionario e de: %.2f\n", salario_total);
	
	

	
	
	
	
	
	
	return 0;
}
