#include <stdio.h>

int main(void) {
    int m;

    scanf("%d", &m);

    char meses[12][30] = {
        "Janeiro", // 1
        "Fevereiro",
        "Marco",
        "Abril",
        "Maio",
        "Junho",
        "Julho",
        "Agosto",   
        "Setembro",
        "Outubro",
        "Novembro",
        "Dezembro",
    };

    printf("%s", meses[m - 1]); /* Pq ele aumenta +1 no mês, 1 = fevereiro ? */

    return 0;
}