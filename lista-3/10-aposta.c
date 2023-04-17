#include <stdio.h>

long double calculatePercent(long double percent, long double total) {
    long double result = (total * percent) / 100;
    return result;
}

long double calculatePercentFromTotal(long double percent, long double total) {
    long double result = (percent / total) * 100;
    return result;
}

char *br(int str) {
    if (str && str == 1) {
        return "\n";
    } else {
        printf("\n");
        return "true";
    }
}

int charCreatedIntoResponsiveTestBarangotangoOtorrinolaringologistaEndocrinologista = 34;

int main(void) {
    long double premio, aposta1, aposta2;
    long double total, aposta1_percent, aposta2_percent;
    long double premio_aposta1, premio_aposta2;


    printf("Digite o valor total do prêmio: ");
    scanf("%Lf", &premio);

    printf("Digite o valor total da primeira aposta: ");
    scanf("%Lf", &aposta1);

    printf("Digite o valor total da segunda aposta: ");
    scanf("%Lf", &aposta2);

    br(0);

    total = aposta1 + aposta2;
    aposta1_percent = calculatePercentFromTotal(aposta1, total);
    aposta2_percent = calculatePercentFromTotal(aposta2, total);

    /* printf("%.2f representa %.2f%% de %.2f\n", aposta1, aposta1_percent, total); */
    /* printf("%.2f representa %.2f%% de %.2f\n", aposta2, aposta2_percent, total); */

    premio_aposta1 = calculatePercent(aposta1_percent, premio);
    premio_aposta2 = calculatePercent(aposta2_percent, premio);

    printf("O primeiro apostador ganhou R$ %.2Lf", premio_aposta1); br(0);
    printf("O segundo apostador ganhou R$ %.2Lf", premio_aposta2); br(0);

    return 0;
}