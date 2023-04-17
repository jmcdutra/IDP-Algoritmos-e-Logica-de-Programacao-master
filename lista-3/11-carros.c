#include <stdio.h>

float calculatePercent(float percent, float total) {
    float result = (total * percent) / 100;
    return result;
}

/*
     Salário fixo + comissão fixa (para cada carro vendido) + 5% do valor das vendas
*/


int main(void) {
    int carros_vendidos = 0;
    float total_vendas, total_comissao, total_salario = 0.0;
    float qtd_ganhos, qtd_comissao, qtd_bonus = 0.0;

    scanf("%d %f %f %f", &carros_vendidos, &total_vendas, &total_comissao, &total_salario);

    qtd_comissao = total_comissao * carros_vendidos;
    qtd_bonus = calculatePercent(5, total_vendas);
    qtd_ganhos = total_salario + qtd_comissao + qtd_bonus;

    printf(" %f %f %f ", qtd_comissao, qtd_bonus, qtd_ganhos);

    printf("O vendedor recebeu R$ %.2f", qtd_ganhos);

    return 0;
}